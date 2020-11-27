#include <stdio.h>


int main()

{
 int x;
 int y;
 char a;

scanf("%d %s %d",&x ,&a, &y);

	if(a=='+')
	{
		printf("%d", x+y);
	}
	else if(a=='-')
	{
		printf("%d", x-y);
	}
	else if(a=='*')
	{
		printf( "%d", x*y);
	}
	else if(a=='/')
	{
		printf( "%f",(float)x/(float)y);
	}
	else
	{
		printf("HATA");
	}
	
}
