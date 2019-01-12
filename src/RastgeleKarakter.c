/**
*
* @author Erhan Okumuş - erhan11040@gmail.com  B151210080
* @author Rabia Yeler - yelerrabia@gmail.com  B140910020
* @since 12.04.2017 
* <p>
* ---A GURUBU---
* --3. Programlama Dilleri Prensibi C Ödevi---
*/
#include "RastgeleKarakter.h"
#include<sys\timeb.h>
#include<time.h>
#include<stdarg.h>
rast RastgeleKarakter(int uzunluk)
{
	rast self = (rast)malloc(sizeof(struct rastgele));
	self->uzunluk = uzunluk;
	self->super = Random();
	self->karakterler =(char *)malloc(sizeof(char)*uzunluk);
	self->rastgelekarakter = &rastgelem;
	self->rastgelekarakter_adet = &rastgelem_adet;
	self->rastgelekarakter_arasi = &rastgelem_karakter_arasi;
	self->belirtilen_karakterler = &belirtilen_karakterlerim;
	self->cumle_kur = &cumlem;
	return self;
}
int rastgelem()
{
	rast rst = RastgeleKarakter(25);
	int sayi = rst->super->sayi_uret();
	int degisken = 0; //kontrol amaclı kullanılacak
	int sayac1 = 2;   //sayiyi kücültmek icin kullanılacak
	int sayac2 = 1;//Sayiyi short turune cevircez.
	int sayac3=0;
	if (sayi < 0) {
		sayi = -sayi; //sayının negatif olma ihtimali ortadan kaldırıldı
	}
	while (degisken != 1) {
		sayi = (sayi / 2)+sayac2; //Ssayi kuculecek
		if ((sayi >= 65 && sayi <= 90) || (sayi >= 97 && sayi <= 122)) //sayi beklenen harf aralıgında ise donguden cıkılacak
		{
			degisken = 1;
		}
		else if (sayi < 65) //sayı beklenen aralıkta olmadıgı icin dongu sayıyı buyutmek uzere devam edecek
		{
			sayi = (sayi * sayac1); //sayi arttırıldı
			sayac1 = sayac1 + 2; //ardısık olmaması icin sayac arttırıldı
		}
	}
	for (int i = 0; i < 100000000; i++)
	{
	}
	if(sayi==1)
	{
		sayac3=3;
	}
	else
	{
		sayac3++;
	}

	return sayi; 
}
void rastgelem_adet(int adet)
{	
	printf("Verilen Adet Kadar Rastgele Karakter:");
	for (int i = 0; i < adet; i++)
	{
		rast r = RastgeleKarakter(25);
		printf("%c",r->rastgelekarakter());
	}
	printf("\n");
}
void rastgelem_karakter_arasi(char a, char b, int karaktersayisi)
{
	struct timeb tmb;
	printf("Karakter arasi ve adet:");
	int karakter1 = (int)a; //degiskenin asci karsılıgı alındı
	int karakter2 = (int)b; //degiskenin asci karsılıgı alındı
	int karakter_tmp = (int)a;
	int sayac1 = 2;      //long tipindeki sayıyı ufaltmak icin kullanılacak
	int sayac2 = 1;		//long tipindeki sayıyı ufaltmak icin kullanılacak
	int sayac3 = 3;
	for (int i = 0; i < karaktersayisi; i++) { //istenen sayi kadar karakter üretilecek.
		int degisken = 0; //whiledan cıkmak icin kontrol amaclı degisken
		ftime(&tmb);
		for (int i = 0; i < 100000000; i++)
		{
		}
		rast rst = RastgeleKarakter(25);
		int sayi = rst->super->sayi_uret(); //Rastgele uretilecek sayi sistem saatinden nanotime cinsinden alýndý ve short turune cevrildi.
		if (sayi < 0) {
			sayi = -sayi; //Nanotime cinsinden gelen sayi negatif olabiliyor bu yuzden her ihtimale karsi negatif olursa pozitif yaptik.
		}
		while (degisken != 1) {
			sayi = ((sayi / 2 + sayac2));
			if (sayi > karakter1 && sayi < karakter2) { //Eger uretilen sayi belirtilen karakterlerin arasinda ise o sayi alinir ve whiledan cikilir.
				degisken = 1;
			}
			else if (sayi <= karakter1) { //Eger uretilen sayi belirtilen karakterlerin arasinda degil ise o sayi buyutulur ve tekrar donguye dahil olur.
				sayi = (sayi * sayac1);
				sayac1 = sayac1 + 2;
			}
		}
		for (int i = 0; i < 100000000; i++)
		{
		}
		if(sayac3==3)
		{
			for(int j=0;j<100; j++)
			{
				sayac3++;
			}
		}
		printf("%c",sayi); //Sayi whiledan sonra direk yazdirilir.
	}
	printf("\n");
}
void belirtilen_karakterlerim(int adet,char *message, ...)
{
	rast rst = RastgeleKarakter(25);
	va_list list;
	int sayac1 = 2; //long tipindeki sayıyı ufaltmak icin kullanılacak
	int arttir2 = 1;
	struct timeb tmb;
	int degisken = 0; //while kontrol icin olsuturuldu
	char *a;
	int degisken2 = 0;
	int i = 0;
		va_start(list, message);
		char *s;
		s = va_arg(list, char *);
		int enbuyuk = (int)s;
		int enkucuk = (int)s;
		while (*message)
		{
			if ((int)s >= 65 && (int)s <= 90 || (int)s >= 97 && (int)s <= 122)
			{
				rst->karakterler[i] = (char)s;
				i++;
				if ((int)s>=enbuyuk)//Sayi enkucukten kucukse buyutulur ve tekrar donguye dahil edilir.
				{
					enbuyuk = (int)s;
				}
				if ((int)s<=enkucuk)//Sayi enkucukten kucukse buyutulur ve tekrar donguye dahil edilir.
				{
					enkucuk = (int)s;
				}
			}
			s = va_arg(list, char *);
			message++;
		}
		printf("Belirtilen karakterler ve adet:");
		for (int j = 0; j < adet; j++)
		{
			ftime(&tmb);
			for (int i = 0; i < 100000000; i++)
			{
			}
			int sayi = rst->super->sayi_uret(); //Rastgele uretilecek sayi sistem saatinden nanotime cinsinden alýndý ve short turune cevrildi.
			if (sayi < 0) {
				sayi = -sayi; //negatif olması engellendi
			}
			degisken = 0;
			while (degisken != 1)
			{
				sayi = sayi / 2 + arttir2;
				if (sayi >= enkucuk && sayi <= enbuyuk) {   //Eger sayi dizideki enkucuk ve enbuyuk eleman arasindaysa belirtilen karakterlerle eþleþtirilir.
					for (int d = 0; d < i; d++) { //Eger sayi dizideki karakterlerin integer bicimlerinden bir tanesiyle uyusursa degeri sayiya atanir. 
						if ((int)rst->karakterler[d] == sayi) {
							degisken = 1;
							break;
						}
					}
				}
				else if (sayi < enkucuk) { //Sayi enkucukten kucukse buyutulur ve tekrar donguye dahil edilir.
					sayi = sayi * sayac1;
					sayac1 = sayac1 + 2;
				}
			}
			printf("%c", sayi);
		}
		printf("\n");
}
//Cumle olusturucu.
void cumlem(int tmp)
{
	rast rst = RastgeleKarakter(25);
	//degisken adlarinin anlamlarini yerine getiriyor.
	int kelimedurdurma = 0;
	int yeni_cumle=0;//kac adat yeni cumle oldugunu hesaplamaya yarar
	printf("Cumle: \"");
	//Output icin duzenli bir cikis saglandiktan sonra while icinde kac tane kelime isteniyorsa o kadar kelime uretiliyor.
	while (kelimedurdurma<tmp)
	{
		//Kelime uzunlugunu rastgele olarak ele aliyoruz.
		int kelimeuzunlugu = rst->rastgelekarakter();
		//eksi cýkmamasý icin.
		if (kelimeuzunlugu<0)
		{
			kelimeuzunlugu = kelimeuzunlugu*(-1);
		}
		//kelimeuzunlugu 3 ila 8 arasý degisiyor.
		kelimeuzunlugu = ((kelimeuzunlugu % 6) + 3);
		//for dongusunde kelimeuzunlugu kadar rastgele karakter cikartiliyor.
		for (int i = 0; i<kelimeuzunlugu; i++)
		{
			char x = (char)(rst->rastgelekarakter());
			printf("%c",x);
		}
		//Bu ifde son kelime haric diger kelimelerden sonra bosluk birakiliyor.
		if (kelimedurdurma + 1 != tmp)
		{
			printf(" ");
		}
		//Bu ifde de son kelimeden sonra nokta koyuluyor.
		if (kelimedurdurma + 1 == tmp)
		{
			printf(".");
		}
		kelimedurdurma++;
		yeni_cumle++;
	}
	//Tirnak icinde yazdiriyorduk cumleyi tirnagi kapatiyoruz.
	printf("\"");
	printf("\n");
}

