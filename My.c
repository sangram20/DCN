#include<stdio.h>

int main(){
    int arr[8];
    int a;

    printf("Enter Dataword:");

    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }

    printf("Codeword: 01111110.");
    for(int i=0;i<8;i++){
            if(arr[i]==0){
                printf("%d",arr[i]);
                a=0;
            }
            else if(arr[i]==1){
                a=a+1;
                printf("%d",arr[i]);
                if(a==5){

                    printf("0");
                }
            }
        }
        printf(".01111110");

    return 0;
}