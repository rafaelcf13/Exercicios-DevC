#include<iostream>
using namespace std;
int main()
{
int idade;
cout<<"Digite sua idade: ";
cin>>idade;
if (idade>=7 && idade<=12)
{
	cout<<"Sua categoria e a Infantil";
} 
else if (idade>=13 && idade<=17)
{
	cout<<"Sua categoria e a Juvenil";
} 

else if (idade>=18 && idade<=49)
{
	cout<<"Sua categoria e a Adulto";
} 

else if (idade>=50)
{
	cout<<"Sua categoria e a Senior";
} 

else
{
	cout<<"Cetagoria Invalida!";
}		
}
