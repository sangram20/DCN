// Correction Method  returning Dataword.
#include <stdio.h>
int main()
{
    int cw[12],s=-1;
    printf("\nEnter Codeword:");
    for(int i=0;i<12;i++)
        scanf("%d",&cw[i]);
    printf("\nCodeword:");
    for(int i=0;i<12;i++)
        printf("%d",cw[i]);
    int p1=cw[0]^cw[2]^cw[4]^cw[6]^cw[8]^cw[10];
    int p2=cw[1]^cw[2]^cw[5]^cw[6]^cw[9]^cw[10];
    int p4=cw[3]^cw[4]^cw[5]^cw[6]^cw[11];
    int p8=cw[7]^cw[8]^cw[9]^cw[10]^cw[11];
    if(p1==1)
        s+=1;
    if(p2==1)
        s+=2;
    if(p4==1)
        s+=4;
    if(p8==1)
        s+=8;
    if(s==-1)
    {
        printf("\nCodeword is right.");
        return 0;
    }
    else
    {
        if(cw[s]==1)
            cw[s]=0;
        else
            cw[s]=1;
    }
    printf("\nCodeword is wrong.\nCorrected Codeword:");
    for(int i=0;i<12;i++)
        printf("%d",cw[i]);
    printf("\nDataword:");
    for(int i=0;i<12;i++)
    {
        if((i==0)||(i==1)||(i==3)||(i==7))
            continue;
        else
            printf("%d",cw[i]);
    }
    return 0;
}