#include <stdio.h>

int main(){
	int i,j;
	for(i=5;i>=1;i--){
		for(int k = 0;k<5-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}

