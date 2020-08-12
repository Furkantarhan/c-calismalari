#include <stdio.h>

int main(){
	for(int i=0;i<10;i++){
		if(i==5)
			// break;(5'e kadar yaz sonra programý kýr)
			continue; // 5'i atla
		printf("%d\n",i);
		
	}
}
