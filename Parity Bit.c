//Parity Bit.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int checking(char data[]) //entered data is binary/not?
{
    int i=0,num;
    while (data[i]!='\0')
    {
        num=data[i];
        if (num=='0'||num=='1')
            i++;
        else
            return 1;
    }
    return 0;
}
void evenParityS(char data[])
{
    int i=0,count=0;
    while (data[i]!='\0')
    {
        if (data[i]=='1')
            count++;
        i++;
    }
    if (count%2==1)
        data[i]='1';
    else
        data[i]='0';
    data[i+1]='\0';
    printf ("\nData to be sent:%s",data);
}
void oddParityS(char data[])
{
    int i=0,count=0;
    while (data[i]!='\0')
    {
        if (data[i]=='1')
            count++;
        i++;
    }
    if (count%2==0)
        data[i]='1';
    else
        data[i]='0';
    data[i+1]='\0';
    printf ("\nData to be sent:%s",data);
}
void evenParityR(char data[],int len)
{
    int i=0,count=0;
    while (data[i]!='\0')
    {
        if (data[i]=='1')
            count++;
        i++;
    }
    if(count%2==1)
    {
        printf ("\nError...\nReceived Data is Incorrected.");
        return;
    }
    else
        printf ("\nReceived Data is Correct.\nData:");
    for(i=0;i<len-1;i++)
        printf("%c",data[i]);
    return;
}
void oddParityR(char data[],int len)
{
    int i=0,count=0;
    while (data[i]!='\0')
    {
        if (data[i]=='1')
            count++;
        i++;
    }
    if(count%2==0)
    {
        printf ("\nError...\nReceived Data is Incorrected.");
        return;
    }
    else
        printf ("\nReceived Data is Correct.\nData:");
    for(i=0;i<len-1;i++)
        printf("%c",data[i]);
    return;
}
void senderSide()
{
    char data[40];
    int check,opt;
    printf("\nEnter Data:");
    scanf ("%s",data);
    check=checking(data);
    if (check==1)
    {
        printf ("\nError.....\tEntered Data is Wrong");
        return;
    }
    printf("\nParity Type:\n1.Even Prity\t2.Odd Parity\nOption:");
    scanf("%d",&opt);
    if(opt==1)
        evenParityS(data);
    else
        oddParityS(data);
    return;
}
void receiverSide()
{
    char data[40];
    int check,len,opt;
    printf("\nReceived Data :");
    scanf ("%s",data);
    check=checking(data);
    len=strlen(data);
    if(check==1)
    {
        printf ("\nError.....\tEntered Data is Wrong");
        return;
    }
    printf("\nParity Type:\n1.Even Prity\t2.Odd Parity\nOption:");
    scanf("%d",&opt);
    if(opt==1)
        evenParityR(data,len);
    else
        oddParityR(data,len);
    return;
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