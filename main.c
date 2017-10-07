#include <stdio.h>

int main()
{
    printf("Kolku broevi sakate da vnesete?\n");
    int m;
    scanf("%d", &m);
    int i=0;
    for(i;i<m;i++)
    {
    	int n;
    	printf("Vnesete trocifren broj\n");
    	scanf("%d",&n);
    	if(n>99&&n<1000)
        	{
            		int a,b,c;
            		a=n/100;
            		b=(n/10)%10;
            		c=n%10;
            		printf("Cifrite na brojot %d se %d, %d i %d \n",n,a,b,c);
            		printf("Proizvodot na cifrite na brojot %d e ednakov na %d\n",n,a*b*c);
        	}
        else
        	printf("Nevaliden vnes\n");
    }
    return 0;
}
