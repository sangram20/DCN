#include<stdio.h>
#include<string.h>
int main()
{   char ip[15];
    printf("IP Address:");
	scanf("%s",ip);
    int e,n=1,c, d1, d2, d3, d4;
    int a1=0,a2=0,a3=0,a4=0;
    int b1[8],b2[8],b3[8],b4[8];
    int i=strlen(ip)-1;

    while(ip[i]!='.')
	{ e=ip[i];
	  e=(e-48)*n;
	  a4=a4+e;
	  n=n*10;
	  i--;
	}
	d4=a4;
	i--;
	n=1;

	while(ip[i]!='.')
	{ e=ip[i];
	  e=(e-48)*n;
	  a3=e+a3;
	  n=n*10;
	  i--;
	}
	d3=a3;
	i--;
	n=1;

	while(ip[i]!='.')
	{ e=ip[i];
	  e=(e-48)*n;
	  a2=e+a2;
	  n=n*10;
	  i--;
	}
	d2=a2;
	i--;
	n=1;

	while(i>-1)
	{ e=ip[i];
	  e=(e-48)*n;
	  a1=a1+e;
	  n=n*10;
	  i--;
	}
	d1=a1;

 if(a1>255 || a2>255 ||a3>255 || a4>255)
  { printf("invalid ip address\n");
   return -1;
  }

  for(c=0;c<8;c++)
	 { b1[c]=a1%2;
       a1=a1/2;
     }
    for(c=7;c>=0;c--)
	 {printf("%d",b1[c]);
	 }
	 printf(".");

   for(c=0;c<8;c++)
	 { b2[c]=a2%2;
       a2=a2/2;
     }
    for(c=7;c>=0;c--)
	 {printf("%d",b2[c]);
	 }
	 printf(".");

	 for(c=0;c<8;c++)
	 { b3[c]=a3%2;
	   a3=a3/2;
     }
    for(c=7;c>=0;c--)
	 {printf("%d",b3[c]);
	 }
  printf(".");

	 for(c=0;c<8;c++)
	 { b4[c]=a4%2;
	   a4=a4/2;
     }
    for(c=7;c>=0;c--)
	 {printf("%d",b4[c]);
	 }

    if(b1[7]==1 && b1[6]==1 && b1[5]==1 && b1[4]==1)
	  {printf("\nCLASS : E\nIn this class, IP adress is not divided into network id and host id.");}

	else if(b1[7]==1 && b1[6]==1&& b1[5]==1 && b1[4]==0 )
         printf("\n CLASS : D\nIn this class, IP adress is not divided into network id and host id.");

    else if(b1[7]==1 && b1[6]==1 && b1[5]==0 )
	{ printf("\n CLASS : C");
	  printf("\n NETWORK ID : %d.%d.%d.0",d1,d2,d3);
	}

	else if(b1[7]==1 && b1[6]==0 )
	{ printf("\n CLASS : B");
	  printf("\n NETWORK ID : %d.%d.0.0",d1,d2);
	}

	else
    { printf("\n CLASS : A");
	  printf("\n NETWORK ID: %d.0.0.0",d1);
	}
 return 0;
}