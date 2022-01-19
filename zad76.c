// Program ce izracunat Volumen kvadra.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14
//Funkcija za izracunavanje volumena kvadra
int volumen(int a, int b,int c)
{
	float volumen;
	volumen=a*b*c;
    return volumen;
}
  

int main()
{
    int a,b,c;
    printf("Unesi duljine stranice  \n");
    scanf("%d %d %d",&a,&b,&c);
    // Pozivanje funkcije.
    float V= volumen(a,b,c);
    printf("Volumen kvadra je: %.2f",V);
    return 0;
}
