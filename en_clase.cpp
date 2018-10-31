/*
Programa: El programa debe recibir 4 tiendas y para cada tienda debe recibir cuatro precios
Fecha: 31/10/2018
Creador: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>

struct venta{
	double vent[4];
};

struct tienda{
	int tiend[4];
	struct venta ven;
}tien[4];

void crear(struct tienda tien[4])
{
	int f = 0, s = 0;
	intento:
		system("color 2F");
	printf("___________A cuantas tiendas les va ingresar precios?______________\n");
	printf("----------SOLO SE PERMITEN INGRESAR 4 TIENDAS COMO MAXIMO----------\n");
	printf("--SI NO QUIERE REGISTRAR LOS PRECIOS DE  INGUNA TIENDA, INGRESE 0--\n");
	scanf("%i", &tien[4].tiend[4]);
	if(tien[4].tiend[4] > 0 && tien[4].tiend[4] <= 4)
	{
		system("cls");
		for(int x=0;x<tien[4].tiend[4];x++)
		{
			intento1:
			system("cls");
			system("color 3F");
			printf("\n\n**************************|TIENDA %i|******************************\n", x+1);	
			printf("Cuantos precios desea ingresar para la tienda %i?\n", x+1);
			printf("----------SOLO SE PERMITEN INGRESAR 4 PRECIOS COMO MAXIMO----------\n");
			printf("------SI NO HAY PRECIOS A INGRESAR EN LA TIENDA %i, INGRESE 0------\n", x+1);
			scanf("%i", &tien[x].tiend[x]);
			if(tien[x].tiend[x] > 0 && tien[x].tiend[x] <= 4)
			{
				system("cls");
				system("color 8F");
				for(int i=0;i<tien[x].tiend[x];i++)
				{
					intento2:
					printf("Ingrese precio del producto %i: ", i+1);
					scanf("%lf", &tien[x].ven.vent[i]);
					if(tien[x].ven.vent[i] >= 0)
					{
						printf("-------------------------------------------------\n");
					}else
					{
						system("cls");
						system("color 4E");
						s = s+1;
						printf("\nHA INGRESADO UN DATO HERRONEO\n");
						printf("TIENE 3 INTENTOS PARA INGRESAR UN DATO CORRECTO\n");
						printf("Enter para cotinuar__\n");
						getch();
						if(s <= 3)
						{
							system("cls");
							printf("\nINTENTO %i\n", s);
							printf("Enter para cotinuar__\n");
							getch();
							goto intento2;
						}else
						{
							system("cls");
							system("color 4E");
							printf("\n_____________YA NO TIENE MAS INTENTOS__________________\n\n");
							printf("EL PRECIO A MOSTRAR DE ESTE PRODUCTO SERA 0\n\n");
							printf("Enter para cotinuar__\n");
							getch();
						}
					}
				}
				printf("Enter para cotinuar__\n");
				getch();
			}else
			{
				if(tien[x].tiend[x] == 0)
				{
					system("cls");
					printf("____________EN LA TIENDA %i NO HAY PRECIOS HA INGRESAR__________________\n\n", x+1);
					printf("LOS PRECIOS DE ESTA TIENDA EQIVALDRAN A 0\n\n");
					printf("Enter para cotinuar__\n");
					getch();
				}else
				{					
					system("cls");
					system("color 4E");
					f = f+1;
					printf("\nHA INGRESADO UN DATO HERRONEO\n");
					printf("TIENES 3 INTENTOS PARA INGRESAR UN DATO CORRECTO\n");
					printf("Enter para cotinuar__\n");
					getch();
					if(f <= 3)
					{
						system("cls");
						printf("\nINTENTO %i\n", f);
						printf("Enter para cotinuar__\n");
						getch();
						goto intento1;
					}else
					{
						system("color 4E");
						system("cls");
						printf("____________________HA EXCEDIDO LOS INTENTOS__________________\n\n");
						printf("____________EN LA TIENDA %i NO HAY PRECIOS HA INGRESAR__________________\n\n", x+1);
						printf("LOS PRECIOS DE CADA PRODUCTO DE ESTA TIENDA EQIVALDRAN A 0\n\n");						
						tien[x].tiend[x] = 5;
						printf("Enter para cotinuar__\n");
						getch();
					}
				}
			}			
		}
	}else
	{
		if(tien[4].tiend[4] == 0)
		{
			system("cls");
			printf("_____________________HA SELECCIONADO 0_______________________\n***************************************************************\n");
			printf("Enter para cotinuar__\n");
			getch();
		}else
		{
			system("cls");
			system("color 4E");
			f = f+1;
			printf("\nHA INGRESADO UN DATO HERRONEO\n");
			printf("TIENES 3 INTENTOS PARA INGRESAR UN DATO CORRECTO\n");
			printf("Enter para cotinuar__\n");
			getch();
			if(f <= 3)
			{
				system("cls");
				printf("\nINTENTO %i\n", f);
				printf("Enter para cotinuar__\n");
				getch();
				goto intento;
			}else
			{
				system("cls");
				system("color 4E");
				tien[4].tiend[4] = 5;
				printf("_____________YA NO TIENE MAS INTENTOS__________________\n\n");
				printf("Enter para cotinuar__\n");
				getch();
			}			
		}
	}
	
	printf("Enter para ver informacion__\n");
	getch();
}

void imprimir(struct tienda tien[4])
{
	system("cls");
	system("color 6F");
	printf("\t\tINFORMACION DE PRECIOS\n\n\n");
	if(tien[4].tiend[4] > 0 && tien[4].tiend[4] <= 4)
	{
		for(int x=0;x<tien[4].tiend[4];x++)
		{			
			printf("**************************|TIENDA %i|******************************\n", x+1);
			if(tien[x].tiend[x] > 0 && tien[x].tiend[x] <= 4)
			{
				for(int i=0;i<tien[x].tiend[x];i++)
				{					
					if(tien[x].ven.vent[i] >= 0)
					{
						printf("Precio del producto %i: %.2f",i+1, tien[x].ven.vent[i]);
						printf("\n-------------------------------------------------\n");
					}else
					{
						printf("Precio del producto %i: %.2f",i+1, tien[x].ven.vent[i]);
						printf("\n-------------------------------------------------\n");
					}
				}
			}else
			{
				if(tien[x].tiend[x] == 0)
				{
					printf("____________EN LA TIENDA %i NO HAY PRECIOS QUE MOSTAR__________________\n\n", x+1);
				}else
				{
					if(tien[x].tiend[x] == 5)
					{
						printf("____________EN LA TIENDA %i NO HAY PRECIOS QUE MOSTAR__________________\n\n", x+1);
					}					
				}
			}			
		}
	}else
	{
		if(tien[4].tiend[4] == 0)
		{
			printf("***************NO HAY NINGUNA TIENDA PARA MOSTRAR PRECIOS*****************\n");
		}else
		{
			if(tien[4].tiend[4] == 5)
			{
				printf("_____________NO HAY INFORMACION QUE MOSTRAR__________________\n\n");
				printf("Enter para cotinuar__\n");
				getch();
				printf("**********************FIN DEL PROGRAMA***************************\n");
			}		
		}
	}
	
}

int main()
{
	
	crear(tien);
	imprimir(tien);
	printf("Enter para finalizar programa__\n");
	getch();
}
