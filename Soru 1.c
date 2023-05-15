#include <stdio.h>
#include <stdlib.h>

int main() {


int len, i, aranan, bayrak = -1, index;

// Kullanýcýdan dizinin boyutunu alýnýr.
printf("Dizinin boyutunu giriniz:");
scanf("%d",&len);

// Dizinin boyutu kadar bellekten yer ayrýlýr.
int*arr=(int*)malloc(len*sizeof(int));

// Kullanýcýdan dizinin elemanlarý alýnýr.
for(i=0; i<len; i++)
{
	printf("Dizinin %d.elemanini giriniz:", i+1);
	scanf("%d",&arr[i]);
}

// Kullanýcýdan aranacak olan eleman alýnýr.
printf("Aramak istediginiz elemani giriniz:");
scanf("%d",&aranan);

// Dizi üzerinde arama yapýlýr.
for(i=0; i<len; i++)
{
	if(arr[i]==aranan)
	{
		// Aranan eleman dizide bulunduðunda bayrak deðiþkeni 1 yapýlýr.
		bayrak = 1;
		index =i;
		break;
	}
}

// Bayrak deðiþkeni kontrol edilerek aranan elemanýn dizide olup olmadýðý belirtilir.
if(bayrak==1)
{
	printf("%d dizinin %d.indexsinde bulunmustur",aranan,index);
}
else 
{
	printf("%d dizide bulunamamýþtýr",aranan);
}


	return 0;
}
