#include <stdio.h>
#include <stdlib.h>
typedef enum{ //enumerate yani numaralandýrmak.
	bay, // 0
	bayan // 1
} cinsiyet;

typedef struct { //birden fazla veri tipinin oluþturulduðu tek bir bilgi veya veri tipi.
	int yas;
	char *isim;
	cinsiyet c;
} insan;
int emeklimi(insan *birey){ // fonksiyon tanýmladýk.
	printf(" \n %d %u",birey->yas,birey->c);
	fflush(stdout); // bellektekileri standart outputa gösterir.
	perror("gecti"); // hata kontrolu
	if(birey->c == bay && birey->yas > 55)
		return 1;
	if(birey->c == bayan && birey->yas >50)
		return 1;
	return 0;	
}

int main(){
	int a;
	insan ali;
	insan *veli; // struct pointeri
	veli = (insan*) malloc(sizeof(insan));
	veli->yas = 60;
	veli->c = bay;
	ali.yas = 30;
	ali.c = bay;
	printf("alinin yasi : %d %u",ali.yas,ali.c);
	printf("\nvelinin yasi : %d",veli->yas);
	printf("\nali emeklimi : %d",emeklimi(&ali));
	printf("\nveli emeklimi : %d",emeklimi(veli));
}
