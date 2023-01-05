#include<stdio.h>

int main(){
    int a=0,b=0;
    int c;
    int arr[8];
    printf("1. Even Parity\n");
    printf("2. Odd Parity\n");
    printf("Enter a Choice:");
    scanf("%d",&c);

    printf("Enter Dataword:");

    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }

    if(c==1){
        for(int i=0;i<8;i++){
            if(arr[i]==1){
                a=a+1;
            }
        }
        printf("EVEN PARITY :");
        if(a%2==0){
            for(int i=0;i<8;i++){
                printf("%d",arr[i]);
            }
        }
        else{
            for(int i=0;i<8;i++){
                printf("%d",arr[i]);
            }
            printf("1");
        }

    }

    if(c==2){
        for(int i=0;i<8;i++){
            if(arr[i]==1){
                a=a+1;
            }
        }
        printf("ODD PARITY :");
        if(a%2==1){
            for(int i=0;i<8;i++){
                printf("%d",arr[i]);
            }
        }
        else{
            for(int i=0;i<8;i++){
                printf("%d",arr[i]);
            }
            printf("1");
        }

    }



    printf("\n\nRECEIVER SIDE----->>>");

    printf("\n\nDataword is Correct\t");

    for(int i=0;i<8;i++){
        printf("%d",arr[i]);
    }

    return 0;
}