//Functions
#include<iostream>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
double Fac(int a);
int Pow(int a, int b);


void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b;
	int c = Add(a, b);// »спользование фунции или вызов (Function call)
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
	cout << a << "!" << "=" << Fac(a) << endl;
	//cout << a << "^" << b << "=" << pow(a, b) << endl;
	cout << a << "^" << b << "=" << Pow(a, b) << endl;
}

int Add(int a, int b)
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
double Fac(int a)
{
	if (a < 0) return 0;
	if (a == 0) return 1;
	else return (double) a * Fac (a - 1);
}
int Pow(int a, int b)
{
	if (b == 0) return 1;
	if (b == 1) return a;
	if (b % 2 == 0) return Pow(a * a, b / 2);
	else return Pow(a * a, b / 2) * a;
}