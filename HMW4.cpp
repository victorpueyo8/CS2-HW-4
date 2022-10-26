//Victor Pueyo
//Chapter 20 homework 4

#include<iostream>
#include<string>

using namespace std;

void reverse(string&, int, int);

int main()
{
	string str = "ComputerScience2";
	char option;

	cout << "The chosen string (word) is: " << str << endl;

	cout << "Do you want the word to be reversed: (y) Yes / (n) No: ";
	cin >> option;

	if (option == 'y')
	{
		reverse(str, 0, str.length() - 1);
		cout << "The word reversed looks like this: " << str << endl;
	}
	else
	{
		cout << "There is nothing to do. The program is done." << endl;
	}

	system("pause");
	return 0;
}

void reverse(string& str, int i, int j)
{
	if (i > j)
	{
		return;
	}
	else
	{
		swap(str[i], str[j]);
		reverse(str, i + 1, j - 1);
	}
}