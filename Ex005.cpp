#include<iostream>
using namespace std;
int main()
{
int anoAtual, anoNasc, idade;
cout<<"Ano Atual:";
cin>>anoAtual;
cout<<"Ano de Nascimento:";
cin>>anoNasc;
idade=anoAtual-anoNasc;
 cout <<"Voc� tem ou far� " << idade << " anos.";
if(idade>=16)
{
cout<<"Voce ja pode votar!";
}
}
