#include<stdio.h>

int main () {
	
	int toplam = 0;
	int i;
	
	for(i =1 ; i <=10 ;i++) {
		
		if(i % 2 == 0) {
			printf("%d \n", i);
			continue;
			
		}
		
		toplam += i;
		
	}
	printf("%d \n",toplam);
	
	return 0;
}
