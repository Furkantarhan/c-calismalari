#include<stdio.h>
#include<string.h>

	struct ogrenci
	{
		char ad[20];
		char soyad[20];
		char bolum[50];
		int numara;
		int sinif;
		float ortalama;
	}ogr;
int main ()
	{
	
	strcpy(ogr.ad,"Furkan");
	strcpy(ogr.soyad,"Manisa");
	strcpy(ogr.bolum,"PC muh");
	ogr.numara=1721012005;
	ogr.sinif=2;
	ogr.ortalama=1.82;
	
	printf("ADI  :%s\n",ogr.ad);
	printf("SOYAD  :%s\n",ogr.soyad);
	printf("BOLUMU  :%s\n",ogr.bolum);
	printf("NUMARASI  :%d\n",ogr.numara);
	printf("SINIFI  :%d\n",ogr.sinif);
	printf("ORTALAMASI  :%f\n",ogr.ortalama);
	
}