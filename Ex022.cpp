#include<iostream>
using namespace std;
int main()
{
int idade;
cout<<"Qual e a idade do competidor? ";
cin>>idade;
while(idade!=-1)
{
	if (idade>=7 && idade<=12)
	{
	cout<<"Competidor inscrito na categoria infantil!\n";
	}
	else if (idade>=12&&idade<=17)
	{
	cout<<"Competidor inscrito na categoria Juvenil!\n";
	}
	else if (idade>=17&&idade<=49)
	{
	cout<<"Competidor inscrito na categoria adulto!\n";
	}
	else if (idade>50)
	{
	cout<<"Competidor inscrito na categoria senior!\n";
	}
	else
	{
	cout<<"Competidor esta fora da faixa permitida!\n";	
	}
    
	cout <<"Idade do competidor: ";
	cin >>idade;

  }
}

