#include<stdio.h>
#include<string.h>

struct ogrenci
{
	char ad[50];
	char soyad[50];
	char bolum[50];
	int sinif;
	int numara;
	int ort;
}ogr[5]={
	{"Furkan","Tarhan","CEO",1721012005,2,1.8},
	{"Rafet","Gozbasi","PC muh",1721012049,2,1.73},
	{"Ulas","Turan","PCmuh",1721012011,2,1.56},
	{"Murat","Orhun","Issiz",1711012068,2,0.50},
	{"Mehmet","Colak","Fahise",1711022069,2,1.23}
};
int main(){
	
	
		printf("AD       : %s\n",ogr[0].ad);
		printf("SOYAD    : %s\n",ogr[0].soyad);
		printf("BOLUM    : %s\n",ogr[0].bolum);
		printf("SINIFI   : %d\n",ogr[0].sinif);
		printf("NUMARASI : %d\n",ogr[0].ort);
	 
}