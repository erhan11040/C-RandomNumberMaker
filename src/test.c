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
#include<stdarg.h>
int main()
{
	//program cıktıları
	char kar = 'a';
	char *b = &kar;
	rast r = RastgeleKarakter(25);
	printf("RastgeleKarakter:%c\n",r->rastgelekarakter());
	r->rastgelekarakter_adet(3);
	r->rastgelekarakter_arasi('a','t',2);
	r->belirtilen_karakterler(2,b,'a','k','b','z','t');
	r->cumle_kur(5);
	
    return 0;
}

