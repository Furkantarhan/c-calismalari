#include <stdio.h>
#include <conio.h>

int main(){
	int n;
	printf("Bir sayi giriniz");
	scanf("%d",&n);
	int i;
	int c = 0;
	for(i = 1;i<n;i=i*2){
		c++;
	}
	printf("%d",c);
	getch();
}


