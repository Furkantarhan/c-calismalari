#include <stdio.h>
#include <conio.h>

int fib(int);
int main(){
	printf("Bir say� giriniz");
	int x;
	scanf("%d",&x);
	printf("%d ",fib(x));
	getch();
}
int fib(int n){
	if(n==0 || n == 1) //veya
		return 1;
	return fib(n-1) + fib(n-2); /* recursive(�zyineli) fonksiyonlar
bir fonksiyonun kendini �a��rmas� durumudur.*/
}
