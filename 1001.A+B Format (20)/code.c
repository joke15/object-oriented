#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d",&y,&z);
	x=z+y;
	int a,b,c;
	if (x<0)
	{
	printf("-");
	x=-x;
    }
	a=(x-x%1000000)/1000000;
	b=(x%1000000-x%1000)/1000;
	c=x%1000;
	if(a!=0)
	{
		printf("%d,%03d,%03d",a,b,c);
	}
	else if(b==0)
	{
		printf("%d",c);
	}
	else
	{
		printf("%d,%03d",b,c);
	}
	return 0;
 } 
