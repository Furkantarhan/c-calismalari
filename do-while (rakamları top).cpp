#include<stdio.h>

int main (){
	
	double n,hane =0,toplam =0;
	
	printf("Sayiyi Giriniz=");
	scanf("%d",&n);
	
	do{
		
		toplam = toplam + (n %10);
		
		hane = hane + 1;
		
		n = n/10;
	}
	while (n > 0);
	printf("%f", n);
	printf("Rakamlari Toplami %f\n%f Haneli",toplam,hane);
	
	
	return 0;
}
