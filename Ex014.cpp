#include<iostream>
using namespace std;
int main()
{
int hora;
cout<<"Informe as horas sem os minutos: ";
cin>>hora;
if(hora>=6&&hora<=18)
{
cout<<"É dia!";
}
else
{
cout<<"É noite!";
}
}
