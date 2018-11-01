/*
programa: registro de 4 tiendas
fecha: 31/10/2018
creador: Samuel Fernandez Fernandez
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct producto
	{
		int cod;
		char nom[40];
		float precio;
	};
struct tienda
	{
		char tie[40];
		struct producto prod[4];
	};
struct venta
	{
		int suma;
		struct tienda tien[4];
	}vent[4]; 


struct producto crear ()
{
	
	
	
	for(int i=0;i<4;i++)
	{
		printf("Ingrese nombre de la tienda %d:\n",i+1);
		gets(vent[i].tien[i].tie);
		for(int k=0;k<4;k++)
		{
			printf("Ingrese el codigo del producto %d\n",k+1);
			scanf("%i",&vent[i].tien[i].prod[k].cod);
			fflush(stdin);
			printf("Ingrese la descripcion\n");
			gets(vent[i].tien[i].prod[k].nom);
			printf("Ingrese el precio\n");
			scanf("%f",&vent[i].tien[i].prod[k].precio);
			vent[i].suma=vent[i].suma+vent[i].tien[i].prod[k].precio;
			fflush(stdin);
		}}
	return vent[4].tien[4].prod[4];
}
int main ()
{
	struct producto prod1;
	prod1=crear();
	fflush(stdin);
	
	for(int i=0;i<4;i++)
	{
		printf("\ntienda:%s\n",vent[i].tien[i].tie);
		printf("\ncodigo    nombre    precio\n");
		for(int k=0;k<4;k++)
		{           
			printf("%d     %s     %.2f\n",vent[i].tien[i].prod[k].cod,vent[i].tien[i].prod[k].nom,vent[i].tien[i].prod[k].precio);
			fflush(stdin);
		}
		fflush(stdin);
		printf("\nTotal: %d\n",vent[i].suma);
	}
}
