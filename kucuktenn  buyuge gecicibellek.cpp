#include<stdio.h>
main(){
	int dizi[5],i,j,gecicibellek;
	
	for(i=0;i<5;i++){
		printf("%d. sayiyi giriniz :  ",i+1);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(dizi[j]>dizi[j+1]){
				gecicibellek=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecicibellek;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n ",dizi[i]);
	}
}