#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	float c,d;
	printf("Bir Sayi Girin=");
	scanf("%d",&a);
	c=sqrt(a);
	printf("Bir Sayi Daha Girin=");
	scanf("%d",&b);
	d=sqrt(b);
	printf("Karekokleri Sirasiyla=%.2f,%.2f",c,d);
}