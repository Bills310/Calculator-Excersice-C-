#include<iostream>
#include<stdlib.h>

using namespace std;

short sum;
short num1;
short num2;

void menu()
{
cout<<"First Number: ";
cin>>num1;

cout<<"Second Number: ";
cin>>num2;

sum = num1 + num2;
cout<<"Sum = ";
cout<<sum;
}

int main()
{
	system("color 0A");
	menu();	
	return 0;
}
