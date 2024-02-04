//Cemberde alan ve cevre hesabi
#include<stdio.h>
int main()
{
	float pi,r,alan,cevre;
	printf("Cemberin yaricapini giriniz:\n\n ");
	scanf("%f",&r);
	pi=3.14;
	alan=pi*r*r;
	cevre=2*pi*r*r;
	printf("Cemberin alani: %f\n\n",alan);
	printf("Cemberin cevresi: %f",cevre);
	
	return 0;
}
