//Matt McGrath
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <string>


using namespace std;

void ex02()
{
	bool hasPassedTest = true;


	int x, y;
	x = rand();
	y = rand();

	if (x > y)
	{
		cout << "x is greater than y" << endl;
	}
	else if (x == y)
	{
		cout << "x is equal to y" << endl;
	}
	else
		cout << "y is greater than x" << endl;

	int numberOfShares;
	cin >> numberOfShares;
	if (numberOfShares < 100)
	{
		cout << "The number is less than 100" << endl;
	}
	else
		cout << "The number is not less than 100" << endl;

	int box, book;
	cout << "\nEnter the width the box and book respectively" << endl;
	cin >> box;
	cin >> book;
	if (box%book == 0)
		cout << "The box is divisible by the book width." << endl;
	else
		cout << "The box is not divisible by the book width." << endl;

	int shelfLife, temp;
	cout << "Enter a shelf life and temperature, respectively." << endl;
	cin >> shelfLife;
	cin >> temp;
	if (temp > 90)
		shelfLife -= 4;

}

int dub(int val)
{
	return 2 * val;
}

void ex03()
{
	cout << "\n\nEnter the length and height of a right triangle.\n";
	double length, height, hyp;
	cin >> length;
	cin >> height;
	hyp = pow(length*length + height*height, .5);
	cout << hyp << endl;

	char input;
	cout << "enter y for yes and n for no.\n";
	cin >> input;
	if (input == 'y')
		cout << "yes\n";
	else
		cout << "no\n";
	char tab = '	';

	string mailingAddress;
	cout << "Enter your mailing address.\n";
	cin >> mailingAddress;
	string empty = "";

	cout << "Enter a number between 1 and ten.\n";
	int pick;
	cin >> pick;
	while (!(pick <= 10 && pick >= 1))
	{
		cout << "Enter a valid number.\n";
		cin >> pick;
	}
	int sum = 0;
	for (int i = 0; i <= pick; i++)
	{
		sum += i*i*i;
	}

	int count = 1;
	do
	{
		cout << "*";
		count++;

	} while (count < pick);

	for (int i = 0; i <= 40; i += 2)
	{
		cout << i;
	}

	cout << dub(pick);

}

int add(int a, int b)
{
	return a + b;
}

int addOne(int &c)
{
	return c++;
}

void ex04()
{
	int arr[5];
	int choice;
	cout << "\nEnter three numbers into this array." << endl;
	for (int i = 0; i <= 4; i++)
	{
		cin >> choice;
		arr[i] = choice;
	}

	int sum = 0;
	int product = 0;
	for (int i = 0; i <= 2; i++)
	{
		sum += arr[i];
		product *= arr[i];
	}
	cout << "sum: " << sum << "   product: " << product << endl;

}

void lastPart(int a[], int size)
{
	cout << "\nEnter a value." << endl;
	int x;
	cin >> x;

	int result = a[2] * x*x + a[1] * x + a[0];
}

void arrays(int arra[], int size)
{
	int ar[5];
	for (int i = 0; i < 5; i++)
	{
		ar[i] = arra[i];
	}


}

int main()
{
	srand(time(NULL));
	ex02();
	ex03();
	int a = rand();
	int b = rand();
	cout << add(a, b);
	int d = 4;
	cout << addOne(d) << endl;
	ex04();


}