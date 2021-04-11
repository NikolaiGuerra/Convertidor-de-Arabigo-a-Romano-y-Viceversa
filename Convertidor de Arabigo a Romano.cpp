#include <iostream>
#include <wchar.h>
#include <locale.h>
using namespace std;
int main ()
{
	//Encabezado y tildes
	setlocale(LC_ALL, "");
	
	//Declaracion de variables / Inicio del código
	int numeroEntero, unidades, decenas, centenas, x;
	for (x=0; x<5; x++)
	{
		cout <<" "<<endl;
		cout <<"Ingrese un número entero entre 1 y 100 "<<" #"<< x <<endl;
		cin>>numeroEntero;
			if (numeroEntero>=1 && numeroEntero<=100)
			{
				//Calculos
				unidades=numeroEntero%10;
				numeroEntero/=10;
				decenas=numeroEntero%10;
				numeroEntero/=10;
				centenas=numeroEntero%10;
				numeroEntero/=10;
				
				//Impresión
				switch (centenas)
				{
					case 1: 
						cout<<"C"<<endl;
						break;
				}
	
				switch (decenas)
				{
					case 1: 
						cout<<"X";
						break;
					case 2: 
						cout<<"XX";
						break;
					case 3: 
						cout<<"XXX";
						break;
					case 4: 
						cout<<"XL";
						break;
					case 5: 
						cout<<"L";
						break;
					case 6: 
						cout<<"LX";
						break;
					case 7: 
						cout<<"LXX";
						break;
					case 8: 
						cout<<"LXXX";
						break;
					case 9: 
						cout<<"XC";
						break;								
				}
	
				switch (unidades)
				{	
					case 1: 
						cout<<"I";
						break;
					case 2: 
						cout<<"II";
						break;
					case 3: 
						cout<<"III";
						break;
					case 4: 
						cout<<"IV";
						break;
					case 5: 
						cout<<"V";
						break;
					case 6: 
						cout<<"VI";
						break;
					case 7: 
						cout<<"VII";
						break;
					case 8: 
						cout<<"VIII";
						break;
					case 9: 
						cout<<"IX";
						break;								
				}
			cout <<" "<<endl;	
			cout<<"\n----------------------------------------------------------"<<endl;	
			}
			else
			{
				cout<<"ERROR: DEBE INGRESAR UN NÚMERO QUE ESTE ENTRE 1 Y 100"<<endl;
				cout <<" "<<endl;
				cout<<"---------------------------------------------------------"<<endl;
				x--;
			}
	}
	return 0;
}
