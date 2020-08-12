#include<stdio.h>
main(){
	int vize[10],final[10],aanotu=0,bbnotu=0,ccnotu=0,ddnotu=0,ffnotu=0,i;
	float ort[10];
	for(i=0;i<10;i++){
		printf("%d. ogrencisinin vizesi : ",i+1);
		scanf("%d",&vize[i]);
		printf("%d. ogrencisinin finali : ",i+1);
		scanf("%d",&final[i]);
		ort[i]=vize[i]*0.4+final[i]*0.6;
		printf("ORTALAMA = %.2f\n",ort[i]);
		if(ort[i]>90 && ort[i]<=100){
			aanotu++;
		}
		else if(ort[i]>70 && ort[i]<90){
			bbnotu++;
		}
		else if(ort[i]>59 && ort[i]<70){
			ccnotu++;
		}
		else if(ort[i]>40 && ort[i]<60){
			ddnotu++;
		}
		else {
			ffnotu++;
		}
			
	}
	printf("\n-----------------\n");
	printf("%d adet ogrenci AA notu aldi.\n",aanotu);
	printf("%d adet ogrenci BB notu aldi.\n",bbnotu);
	printf("%d adet ogrenci CC notu aldi.\n",ccnotu);
	printf("%d adet ogrenci DD notu aldi.\n",ddnotu);
	printf("%d adet ogrenci FF notu aldi.\n",ffnotu);
	
}