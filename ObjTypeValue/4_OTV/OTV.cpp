using namespace std;
#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>
inline void keep_window_open() { char ch; cin >> ch; }

int main()
{
	int age = -1;
	string first_name = "???";
	string second_name = "???";
	cout << "Input your full name and age and press 'Enter'" << "\n";
	cin >> first_name >> second_name >> age;
	cout << "Hello, " << first_name << " " << second_name << " (age: " << age << ")!\n";
	keep_window_open();
	return 0;
}