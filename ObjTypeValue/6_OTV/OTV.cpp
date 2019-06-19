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
	string first, second;
	cout << "Please, inter two names\n";
	cin >> first >> second;
	if (first == second) cout << "Names are equal\n";
	if (first < second)
		cout << first << " earler than " << second
			 << " in Alpabet\n";
	if (first > second)
		cout << first << " later than " << second
			 << " in Alpabet\n";
	keep_window_open();
	return 0;
}