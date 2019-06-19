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
	string first_name;
	cout << "Input your name and press 'Enter'" << "\n";
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";
	keep_window_open();
	return 0;
}