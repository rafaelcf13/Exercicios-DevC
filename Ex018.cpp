#include<iostream>
using namespace std;
int main()
{
	int numMes;
	char *mesExtenso;
	bool invalido=false;
	cout<<"Informe o numero do mes: ";
	cin>>numMes;
	switch (numMes)
{
	case 1: mesExtenso="Janeiro"; break;
	case 2: mesExtenso="Fevereiro"; break;
	case 3: mesExtenso="Marco"; break;
	case 4: mesExtenso="Abril"; break;
	case 5: mesExtenso="Maio"; break;
	case 6: mesExtenso="Junho"; break;
	case 7: mesExtenso="Julho"; break;
	case 8: mesExtenso="Agosto"; break;
	case 9: mesExtenso="Setembro"; break;
	case 10: mesExtenso="Outubro"; break;
	case 11: mesExtenso="Novembro"; break;
	case 12: mesExtenso="Dezembro"; break;
	default: cout<<"Mes Invalido!";
	invalido=true;

    }

    if (!invalido)

    {

    cout <<"O numero "<<numMes <<" equivale ao mes de " <<mesExtenso;
	}
}	
