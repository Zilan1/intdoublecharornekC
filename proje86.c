#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi=20;
	int *s=&sayi;
	
	printf("Deger: %d\n",sayi);
	printf("ADres: %x",s);
	
	char harf='a';
	char *h=&harf;
	
	printf("\n\n-------------\n\n");
	
	printf("Harf: %c\n",harf);
	printf("Adres: %x",h);
	
	
	
//*************************************************	
	
	//int s1=10;
	//int s2=20;
	//double s3=12.50;
	//char kelime='r';
	
	//printf("%d\n",s1);
	//printf("%d\n",s2);
	//printf("%f\n",s3);
	//printf("%c",kelime);
	
	//printf("\n\nBELLEK ADRESLERI\n\n");
	
	//printf("%x\n",&s1);
	//printf("%x\n",&s2);
	//printf("%x\n",&s3);
	//printf("%x\n",&kelime);
	
	return 0;
}
