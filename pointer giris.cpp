#include<stdio.h>
main(){
	int sayi=5;
	int *p1;
	p1=&sayi;
	int sayi2=*p1;
	
	printf("%d\n",&sayi);
	printf("%p\n",*p1);
	printf("%d",sayi2);
	
}