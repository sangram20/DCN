#include<stdio.h>
#include<string.h>
void main()
{ char ip[35];
 int i;
 char b1[8],b2[8],b3[8],b4[8];
 printf("enter ip ");
  scanf("%s",ip);
  for(i=0;i<4;i++)
{   
   b1[i]=ip[i]; 
}
  if(b1[0]=='1' && b1[1]=='1' && b1[2]=='1' && b1[3]=='1')
	  {printf("\nCLASS : E");
	      
	  }

	else if(b1[0]=='1' && b1[1]=='1' && b1[2]=='1' && b1[3]=='0')
         printf("\n CLASS : D");

    else if(b1[0]=='1' && b1[1]=='1' && b1[2]=='0' )
	{
	    printf("\n CLASS : C");
    }

	else if(b1[0]=='1' && b1[1]=='0' )
	{ 
	    printf("\n CLASS : B");
	}
	else
    {
        printf("\n CLASS : A");
	}
}