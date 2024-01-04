#include<stdio.h>
swap(int,int);
int main()
{
	int a=10,b=20;
	printf("before swapping : a=%d and b=%d",a,b);
	swap(a,b);
}
swap(int x,int y)
{
int t;
t=x;
x=y;
y=t;
printf("after swapping : a=%d and b=%d",x,y);
}
