#include<stdio.h>
#include<locale.h>
#include <math.h> 
int  main() {
	setlocale(LC_ALL, "RUS");
	char c = '!';

	int i = 2;

	float f = 3.14f;

	double d = 5e-12;
	printf("\n��� = %c",c);
	printf("\n��� = %i",i);
	printf("\n����� = %f",f);
	printf("\n���� = %e",d);
	printf("\n\n������� ���: ");
	scanf("%c",&c);
	printf("\n������� ���:");
	scanf("%i",&i);
	printf("\n������� �����: ");
	scanf("%f",&f);
	printf("\n������� ����: ");
	scanf("%e", &d);
	
	printf("\n��� = %c", c);
	printf("\n��� = %i", i);
	printf("\n����� = %f", f);
	printf("\n���� = %e", d);
	int celka = f;
	double desyatka = f - celka;
	printf("\n����� ����� �����:%i",celka);
	printf("\n������� ����� �����:%f",desyatka);
return 0;


};