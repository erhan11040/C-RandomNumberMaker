/**
*
* @author Erhan Okumuş - erhan11040@gmail.com  B151210080
* @author Rabia Yeler - yelerrabia@gmail.com  B140910020
* @since 12.04.2017 
* <p>
* ---A GURUBU---
* --3. Programlama Dilleri Prensibi C Ödevi---
*/
#include<sys\timeb.h>
#include<time.h>
#include"Random.h"
#include<stdarg.h>
ran Random()
{
	ran nesne = (ran)malloc(sizeof(struct randm));
	nesne->sayi_uret = &sayim;
	return nesne;
}
int sayim()
{
	//sayaclar baslatıp sayacların dondugu degerlerin nanosaniye cinsinden alıp int e cevirerek rastgele sayi uretiliyor.
	clock_t start, middle1, middle2, end;
	int duration;
	start = (int)clock();
	for (int i = 0; i < 99999999; i++);
	middle1 = (int)clock();
	for (int i = 0; i < 99999999; i++);
	middle2 = (int)clock();
	for (int i = 0; i < 99999999; i++);
	end = (int)clock();
	int sayi = ((end - start) + (middle2 + middle1)) % 130;
	return sayi;
}