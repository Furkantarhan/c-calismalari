#include<stdio.h>
#include<string.h>

struct futbolcu
{
	char ad[20];
	char takim[20];
	int yas;
}

int main (){
	struct futbolcu f;
	strcpy(f.ad,"Arif Koyun");
	strcpy(f.takim,"Koyluspor");
	f.yas=40;
	
	printf("AD    : %s",f.ad);
	printf("TAKIM : %s",f.takim);
	printf("YAS   : %d",f.yas);
}