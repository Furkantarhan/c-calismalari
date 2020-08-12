#include <stdio.h>
int main()
{
	int a,b=1;
	printf("Bir Tamsayi Giriniz=");
	scanf("%d",&a);
	if(a>=0){
		for(int i=a;i>0;i--){
			b=b*i;
		}
		printf("faktoriyel alinan sayi=%d",b);
	}
	else{
		printf("Negatif bir sayi giriniz!!");
	}
	
}