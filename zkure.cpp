#include<stdio.h>

int main () {
	
	int vize1,vize2,final;
	float dersort;
	
	
	printf("Ilk Vize Notunuzu Giriniz=");
	scanf("%d",&vize1);
	
	printf("Ikinci Vize Notunuzu Giriniz=");
	scanf("%d",&vize2);
	
	printf("Final Notunuzu Giriniz=");
	scanf("%d",&final);
	
	dersort = (vize1*0.2+vize2*0.2+final*0.6)/3;
	
	if (dersort > 60) {
		printf("DERSTEN GECTÝNÝZ :))");
	}
	else if (dersort < 50){
		printf("BUTLERE KALDÝNÝZ GECMÝS OLSUN :()");
		
	}
	else {
		printf("KALDÝNÝZ HAYIRLI OLSUN :))))");
	}
	return 0;
		
}
