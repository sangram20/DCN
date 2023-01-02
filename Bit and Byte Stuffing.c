//Bit & Byte Stuffing.
#include <stdio.h>
void senderSide()
{
    char str[100],ptrn[6]="11111",data[100],dis[100];
    int i,j=0,k=0,c=0;
    printf("\nEnter The Data:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ptrn[j])
        {
            data[k]=str[i];
            k++;    j++;
            c++;
            if(c==5)
            {
                data[k]='0';//inserting 0 after 5 consecative 1.
                c=0;    j=0;
                k++;
            }
        }
        else
        {
            data[k]=str[i];
            j=0;    c=0;
            k++;
        }
    }
    strcat(dis,"01111110");
    strcat(dis,data);
    strcat(dis,"01111110");
    printf ("\nSending Data:%s\nWhere, the Flag is 0111110.",dis);
}
void receiverSide()
{
    char str[100],data[100],ptrn[6]="11111";
    printf ("Enter received coded word:");
    scanf("%s",str);
    int i,j=0,k=0,c=0;
    for(i=8;i<strlen(str)-8;i++)
    {
        if(str[i]==ptrn[j])
        {
            data[k]=str[i];
            k++;    j++;
            c++;
            if(c==5)
            {
                i++; //for skipping 0 after 5 consecative 1.
                j=0;    c=0;
            }
        }
        else
        {
            data[k]=str[i];
            k++;
            j=0;    c=0;
        }
    }
    data[k]='\0';
    printf("\nReceived Data:%s",data);
}
void main()
{
    int opt;
    printf("1.Send Data\t2.Receive Data\nOption:");
    scanf("%d",&opt);
    if(opt==1)
        senderSide();
    else
        receiverSide();
    return;
}