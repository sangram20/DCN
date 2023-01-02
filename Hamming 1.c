// Hamming Code
#include <stdio.h>
int main()
{
    int dw[8];
    printf("\nEnter Dataword:");
    for(int i=0;i<8;i++)
        scanf("%d",&dw[i]);
    printf("\nDataword:");
    for(int i=0;i<8;i++)
        printf("%d",dw[i]);
    int cw[12];
    cw[0]=0;
    cw[1]=0;
    cw[2]=dw[0];
    cw[3]=0;
    cw[4]=dw[1];
    cw[5]=dw[2];
    cw[6]=dw[3];
    cw[7]=0;
    cw[8]=dw[4];
    cw[9]=dw[5];
    cw[10]=dw[6];
    cw[11]=dw[7];
   
    cw[0]=cw[0]^cw[2]^cw[4]^cw[6]^cw[8]^cw[10];
    cw[1]=cw[1]^cw[2]^cw[5]^cw[6]^cw[9]^cw[10];
    cw[3]=cw[3]^cw[4]^cw[5]^cw[6]^cw[11];
    cw[7]=cw[7]^cw[8]^cw[9]^cw[10]^cw[11];
   
    printf("\nCodeword:");
    for(int i=0;i<12;i++)
        printf("%d",cw[i]);
    return 0;
}