/**
*
* @author Erhan Okumuş - erhan11040@gmail.com  B151210080
* @author Rabia Yeler - yelerrabia@gmail.com  B140910020
* @since 12.04.2017 
* <p>
* ---A GURUBU---
* --3. Programlama Dilleri Prensibi C Ödevi---
*/
//kullanılacak tüm yapı ve baslıklar tanımlanıyor.
#ifndef RANDOM_H
#define RANDOM_H
#include<stdio.h>
#include<stdlib.h>
typedef struct randm *ran;
struct randm
{
	int(*sayi_uret)();
};
	
int sayim();
ran Random();
	#endif // !1