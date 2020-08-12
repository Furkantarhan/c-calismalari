#include <stdio.h>
#include <conio.h>

int main(){
	int a=1,b;
	scanf("%d",&b);
	int c = 0;
	while(a<b-1){
		a++;
		printf("%d", b);
		if(b%a==0)
			c = 1;
	}
	if(c==0)
		printf("sayi asal");
	else
		printf("sayi asal degil");
	getch();
}

