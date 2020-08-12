#include <stdio.h>  
   int main (){
     int a,b,c,v,f;
	 printf("Ayakkabi Numarani Gir=");
	 scanf("%d",&a);
	 c=((a*5)+50)*20;
	 printf("Dogdugunuz Ayi Girin=");
	 scanf("%d",&b);
	 printf("Dogum Yiliniz=");
	 scanf("%d",&f);
	 if(b<=10){
 		c=c+1017;
 	}
 	else{
	 	c=c+1016;
	 }
	 v=c-f;
	 printf("Sonucun Ilk 2 Hanesi Ayakkabi Numaraniz Son 2 Hanesi Yasinizdir %d\n",v);
	 return 0;
 	}