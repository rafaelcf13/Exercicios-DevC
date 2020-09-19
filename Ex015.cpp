#include<iostream>
using namespace std;
int main()
{
	float num1, num2, resultado;
	int op;
	cout <<"Informe 0 1o. numero: ";
	cin>>num1;
	cout <<"Informe 0 2o. numero: ";
	cin>>num2;
	cout <<"----------------------------------------------------\n";
	cout <<"Escolha uma operação matematica: \n";
	cout <<"1 - Adicao\n";
	cout <<"2 - Subtracao\n";
	cout <<"3 - Divisao\n";
	cout <<"4 - Multiplicacao\n";
	cout <<"Opcao: ";
	cin >>op;
	if (op==1)
	{
	resultado=num1+num2;
	cout <<num1 << " + " << num2 << " = " << resultado;
	}  		

	else if (op==2)

	{	
	resultado=num1-num2;
	cout <<num1 << " - " << num2 << " = " << resultado;
	}
	else if (op==3)

	{
	resultado=num1/num2;
	cout <<num1 << " / " << num2 << " = " << resultado;
	}
	else if (op==4)

	{
	resultado=num1*num2;
	cout <<num1 << " * " << num2 << " = " << resultado;
	}
	else
  	{

    cout <<"Opcao invalida!!!";

  }

}
