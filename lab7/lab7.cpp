// lab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "RUS");
	cout<<"input number of the task"<<endl;
	cin>>a;
	switch (a)
	{
	case 1: 
	{int a, b;
		cout << "input a,b" << endl;
		cin >> a >> b;
		if (a > 2 && b <= 3)
			cout << "true, " << a << ">2" << " and " << b << " <=3" << endl;
		else
			cout << "false" << endl; }
	break;

	case 2: 
	{int a, b, c;
		cout << "input a,b,c" << endl;
		cin >> a >> b >> c;
		if (a < b && b < c)
			cout << "true, " << a << "<" << b << "<" << c << endl;
		else
			cout << "false" << endl; }
	break;

	case 3:
	{int a;
		cout << "input a" << endl;
		cin >> a;
		if ((a / 10 != 0) && (a / 100 == 0) && (a % 2 == 0))
			cout << "true, данное число является четным двузначным" << endl;
		else
			cout << "false" << endl; }
	break;

	case 4:
	{int n, a, b, c;
	cout << "enter a three digit number n" << endl;
	cin >> n;
	n = abs(n);
	a = n / 100;
	b = (n / 10) - (a * 10);
	c = n - (b * 10) - (a * 100);
	if (((a < b) && (b < c)) || ((a > b) && (b > c)))
		cout << "true" << endl;
	else
		cout << "false" << endl; }
	break;

	case 5:
	{int n, a, b, c, d;
	cout << "input n - a four digit number" << endl;
	cin >> n;
	n = abs(n);
	a = n / 1000;
	b = (n / 100) % 10;
	c = (n / 10) % 10;
	d = n % 10;
	if (a == d && b == c)
		cout << "true" << endl;
	else
		cout << "false" << endl; }
	break;

	case 6:
	{int a, b, c;
	cout << "input a,b,c" << endl;
	cin >> a >> b >> c;
	if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)))
		cout << "true, треугольник со сторонами a, b, c является прямоугольным" << endl;
	else
		cout << "false" << endl; }
	break;

	case 7:
	{int a, b, c;
	cout << "input a,b,c" << endl;
	cin >> a >> b >> c;
	if (a > 0 && b > 0 && c > 0)
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
			cout << "true, there is a triangle with sides a, b, c" << endl;
		else
			cout << "false" << endl;
	}
	else
		cout << "false" << endl; }
	break;

	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
