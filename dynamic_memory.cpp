// dynamic memory kullan�m� 

int a = 10;
int d[a];
/* Yukar�daki 2 sat�rl�k kod c i�in hatad�r.��nk�
dizi tan�mlarken de�i�ken kullanamay�z ve biz istedi�imiz
derecede dizi tan�mlamak yani dinamiklik katmak istersek
a�a��daki kodlar� kullanmam�z gerekir.*/ 

a = 10;
int *p = (int *) malloc (sizeof(int) *a); /* malloc komutunu kullanabilmemiz 
i�in stdlib.h k�t�phaneisini aktarmam�z gerekiyor.*/
/* Bu sayede a de�i�kenine ne girersek haf�zada sizeof komutu ile
haf�zada a kadar yer ay�r�p bunu malloc komutu ile haf�zada yer 
ay�r�yoruz.*/ 
