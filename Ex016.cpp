#include<iostream>
using namespace std;
int main()
{
float lado1, lado2, lado3;

	cout<<"Digite o valor de lado 1: ";
	cin>>lado1;

	cout<<"Digite o valor de lado 2: ";
	cin>>lado2;

	cout<<"Digite o valor de lado 3: ";
	cin>>lado3;
  {

    cout <<"Este é um triângulo equilátero!";

  }

  else if (lado1==lado2 || lado2==lado3 || lado3==lado1)

  {

    cout <<"Este é um triângulo escaleno!";

  }

  else

  {

    cout <<"Este é um triângulo isósceles!";

  }

}
