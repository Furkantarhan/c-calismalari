#include <stdio.h>
#include <conio.h>

int main(){
	int bugun,dogumtarihi;
	printf("bugunun tarihinizi giriniz");
	scanf("%d",&bugun);
	printf("dogum tarihinizi giriniz");
	scanf("%d",&dogumtarihi);
	printf("yasiniz: %d",bugun-dogumtarihi);
}


