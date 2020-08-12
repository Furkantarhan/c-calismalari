#include<stdio.h>
main (){
	int dizi []={5,4,8,9,11};
	int *ptr;
	//ptr=&dizi[0];
	ptr=dizi;
	
	//printf("dizinin 2. elamani: %d ve adresi :%p\n",dizi[i],ptr);
	//printf("dizinin 2. elamani: %d ve adresi :%p\n",*(ptr+2),(ptr+2));
	int i ;
	for(i=0;i<5;i++){
		printf("dizi[%d]:%d - adresi : %p \n",i,*(ptr+2),(ptr+i));
	}	
	
	for(int i=0;i<5;i++){
		printf("%d\n",dizi);
	}
	}