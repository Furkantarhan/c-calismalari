#include<stdio.h>
 int main(){
 
 int x,y;
 int i,j;
 int t=1;
 printf("hesaplamak istediginiz matrisin satir sayisini giriniz:");
 scanf("%d",&x);
 printf("hesaplamak istediginiz matrisin stun sayisini giriniz:");
 scanf("%d",&y);
 int matris[x][y];
 for(i=0; i<x; i++){
  for(j=0; j<y; j++){
   printf("\n%d x %d  giriniz :",i+1,j+1);
   scanf(" %d",&matris[i][j]);
  } 
 }
 printf("Girdiginiz Sayilardan Olusan Matris Asagidaki Sekildedir.\n");
 for(i=0 ;i<x ; i++){
  for(j=0 ; j<y ; j++){
   printf("%d\t",matris[i][j]);
  }
  printf("\n\n");
 }
 for(i=0 ; i<x ; i++){
  int toplam=0;
  for(j=0 ; j<y ; j++){
   toplam=toplam+matris[i][j];
   }
   printf("matrisiniz %d.satirindaki sayilarin toplami=%d'dir.\n",i+1,toplam);
 
 }
 }
