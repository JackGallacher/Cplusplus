using namespace std;
#include <iostream>
#include <string>

int main()
{
	//1
	int x;
	int y;

	cout << "enter age 1: ";
	cin >> x;
	cout << "enter age 2: ";
	cin >> y;

	if (x > y)
	{
		cout << "age 1 is greater than age 2 \n\n";
	}
	else if ( x < y)
	{
		cout << "age 2 is greater than age 1 \n\n";
	}
	else if (x == y)
	{
		cout << "ages are the same \n\n";
	}

	//2
	string user1 = "jack";
	string user2 = "ben";
	string user3 = "ryan";

	string user1_pw = "gallacher";
	string user2_pw = "moulton";
	string user3_pw = "pearson";

	string username;
	string password;

	cout << "enter username: ";
	cin >> username;
	cout << "enter password: ";
	cin >> password;

	if (username == user1 && password == user1_pw)
	{
		cout << "welcome jack\n";
	}
	else if (username == user2 && password == user2_pw)
	{
		cout << "welcome ben\n";
	}
	else if (username == user3 && password == user3_pw)
	{
		cout << "welcome ryan\n";
	}
	else
	{
		cout << "user name or password incorrect, try again.";
		main();//comment out other tasks to restart login.
	}

	//3
	char function;
	double i;
	double j;

	cout << "enter equation: ";
	cin >> i >> function >> j;

	if (function == '+')
	{
		cout << i << "+" << j << "=" << i + j << "\n";
	}
	else if (function == '*')
	{
		cout << i << "*" << j << "=" << i * j << "\n";
	}
	else if (function == '/')
	{
		cout << i << "/" << j << "=" << i / j << "\n";
	}
	else if (function == '-')
	{
		cout << i << "-" << j << "=" << i - j << "\n";
	}
	else
	{
		cout << "incorrect function used.\n";
	}

	system("pause");
}