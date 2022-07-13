#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
using namespace std;

float Centigrados, Rankine, Fahrenheit, Kelvin;
string resp;
char opc='\0';
char Menu();
void RankineF(void);
void FahrenheitF(void);
void KelvinF(void);

int main() 
{
	
	do
	{
		cout<<"BIENVENIDO AL PROGRAMA DE CONVERSION DE TEMPERATURAS\n";
	
		Centigrados=0;
		cout<<"Escribe los grados Centigrados: ";cin>>Centigrados;
		Sleep(1000);
		cout<<endl<<"Datos capturados."<<endl;
		do
		{	
		
			opc=Menu();
			switch(opc)
			{
				case 49:
					RankineF();
				break;
			
				case 50:
					FahrenheitF();
				break;
			
				case 51:
					KelvinF();
				break;
			
				default:
					if(opc!=27)
					{
						Beep(1000,100);
					}
			}
		
		}while(opc!=27);
		cout<<"Desea agregar otro numero? ";
		cin>>resp;
		system("cls");
	}while(resp=="Si"|resp=="sI"|resp=="si"|resp=="SI");
	cout<<"GRACIAS POR USAR EL PROGRAMA.";
}

char Menu()
{
	char opc1='\0';
	system("cls");
	cout<<"Presiona:\n";
	cout<<"[ESC] Para Salir del MENU.\n";
	cout<<"[ 1 ] Para convertir a Grados Rankie.\n";
	cout<<"[ 2 ] Para convertir a Grados Fahrenheit.\n";
	cout<<"[ 3 ] Para convertir a Grados Kelvin.\n";
	opc1=getch();
}

void RankineF(void)
{
	Rankine=(Centigrados*1.8000+491.67);
	system("cls");
	cout<<"Grados CENTIGRADOS CONVERTIDOS A RANKIE\n";
	cout<<"GRADOS CENTIGRADOS: "<<Centigrados<<" = GRADOS RANKIE: "<<Rankine<<endl;
	getch();
}
void FahrenheitF(void)
{
	Fahrenheit=((Centigrados*9)/5)+32;
	system("cls");
	cout<<"Grados CENTIGRADOS CONVERTIDOS A FEHRENHEIT\n";
	cout<<"GRADOS CENTIGRADOS: "<<Centigrados<<" = GRADOS FAHRENHEIT: "<<Fahrenheit<<endl;
	getch();
}
void KelvinF(void)
{
	Kelvin=(Centigrados+273.15);
	system("cls");
	cout<<"Grados CENTIGRADOS CONVERTIDOS A KELVIN\n";
	cout<<"GRADOS CENTIGRADOS: "<<Centigrados<<" = GRADOS KELVIN: "<<Kelvin<<endl;
	getch();
}
