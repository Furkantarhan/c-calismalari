// dynamic memory kullanýmý 

int a = 10;
int d[a];
/* Yukarýdaki 2 satýrlýk kod c için hatadýr.Çünkü
dizi tanýmlarken deðiþken kullanamayýz ve biz istediðimiz
derecede dizi tanýmlamak yani dinamiklik katmak istersek
aþaðýdaki kodlarý kullanmamýz gerekir.*/ 

a = 10;
int *p = (int *) malloc (sizeof(int) *a); /* malloc komutunu kullanabilmemiz 
için stdlib.h kütüphaneisini aktarmamýz gerekiyor.*/
/* Bu sayede a deðiþkenine ne girersek hafýzada sizeof komutu ile
hafýzada a kadar yer ayýrýp bunu malloc komutu ile hafýzada yer 
ayýrýyoruz.*/ 
