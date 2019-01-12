/**
*
* @author Erhan Okumuş - erhan11040@gmail.com  B151210080
* @author Rabia Yeler - yelerrabia@gmail.com  B140910020
* @since 12.04.2017 
* <p>
* ---A GURUBU---
* --3. Programlama Dilleri Prensibi C Ödevi---
*/

//kullanılacak tüm yapılar ve başlıklar tanımlanıyor...
#ifndef RASTGELE_H
#define RASTGELE_H
#include<stdio.h>
#include<stdlib.h>
#include "Random.h"
typedef struct rastgele *rast;
struct rastgele
{
	ran super;
	char *karakterler;
	int uzunluk;
	int(*rastgelekarakter)();
	void(*rastgelekarakter_adet)(int adet);
	void(*rastgelekarakter_arasi)(char a, char b, int karaktersayisi);
	void(*belirtilen_karakterler)(int adet,char *message,...);
	void(*cumle_kur)(int tmp);
};
int rastgelem();
void rastgelem_adet(int adet);
void rastgelem_karakter_arasi(char a, char b, int karaktersayisi);
void belirtilen_karakterlerim(int adet,char *message, ...);
void cumlem(int tmp);
rast RastgeleKarakter(int uzunluk);
#endif // !1
