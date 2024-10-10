#include<stdio.h>
#include<locale.h>
#include <math.h> 
int  main() {
	setlocale(LC_ALL, "RUS");
	char c = '!';

	int i = 2;

	float f = 3.14f;

	double d = 5e-12;
	printf("\nЧар = %c",c);
	printf("\nИнт = %i",i);
	printf("\nФлоат = %f",f);
	printf("\nДабл = %e",d);
	printf("\n\nВведите Чар: ");
	scanf("%c",&c);
	printf("\nВведите Инт:");
	scanf("%i",&i);
	printf("\nВведите Флоат: ");
	scanf("%f",&f);
	printf("\nВведите Дабл: ");
	scanf("%e", &d);
	
	printf("\nЧар = %c", c);
	printf("\nИнт = %i", i);
	printf("\nФлоат = %f", f);
	printf("\nДабл = %e", d);
	int celka = f;
	double desyatka = f - celka;
	printf("\nЦелая часть равна:%i",celka);
	printf("\nДробная часть равна:%f",desyatka);
return 0;


};