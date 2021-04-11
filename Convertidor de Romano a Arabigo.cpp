#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <string.h>
using namespace std;
int main ()
{
	//Encabezado y tildes
	setlocale(LC_ALL, "");
	
	//Declaracion de variables / Inicio del código
	char numeroRomano[100];
	int valor[100], n, i, numero=0;
	cout<<"Ingrese un número romano entre 1 y 100 "<<endl;
	cin>>numeroRomano;
	n=strlen(numeroRomano);
	for (i=0; i<n; i++)
	{
		if (numeroRomano[i]=='I' || numeroRomano[i]=='i')
		{
			valor[i]=1;
		}		
		if (numeroRomano[i]=='V' || numeroRomano[i]=='v')
		{
			valor[i]=5;
		}		
		if (numeroRomano[i]=='X' || numeroRomano[i]=='x')
		{
			valor[i]=10;
		}		
		if (numeroRomano[i]=='L' || numeroRomano[i]=='l')
		{
			valor[i]=50;
		}		
		if (numeroRomano[i]=='C' || numeroRomano[i]=='c')
		{
			valor[i]=100;
		}				
	}
	for (i=0; i<n; i++)
	{
		if (i==n-1)
		{
			numero+=valor[i];
		}
		else
		{
			if (valor[i]>=valor[i+1])
			{
				numero+=valor[i];
			}
			else
			{
				numero-=valor[i];
			}
		}
	}
	cout<<"El número romano "<< numeroRomano <<" en arabigo es "<< numero <<endl;
	return 0;
}
