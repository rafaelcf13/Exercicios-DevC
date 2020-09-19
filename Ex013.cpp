#include<iostream>
using namespace std;
int main()
{
int num, resto;
cout<<"Digite um numero: ";
cin>>num;
resto=num%2;
if(resto==0&&num>0)
{
cout<<"Este numero e par e positivo";
}
else
{
cout<<"Não atende os requisitos";	
}
}

