#include<iostream>
using namespace std;
int main()
{
int desenha, totLinhas, linAtual;
cout<<"Quantas linhas tem o triangulo? ";
cin>>totLinhas;
for (linAtual=1;linAtual<=totLinhas;linAtual++)
{
 cout<<"\n";
 	for(desenha=1;desenha<=linAtual;desenha++)
 	{
 	cout<<"*";
 }
}
}

