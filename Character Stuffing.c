//character stuffing
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,j=0,n;
    char a[20],b[50],ch;
    printf("enter string\n");
    scanf("%s",a);
    n=strlen(a);
    b[0]='#';
    b[1]='@';
    j=2;
    while(i<n)
    {
        if(a[i]=='#')
        {
        b[j]='#';
        b[j+1]='#';
        j=j+1;
        }
        b[j]=a[i];
        i++;
        j++;
    }
    b[j]='#';
    b[j+1]='@';

    b[j+2]='\0';
    printf("\nResult:\n");
    printf("%s",b);

}
