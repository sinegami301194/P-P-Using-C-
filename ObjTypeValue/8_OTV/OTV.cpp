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
	int number = 0;
	string previous = " ";
	string current;
	while (cin  >> current) {
		++number;
		if (previous == current)
			cout << "Repeated word " << current
				 << " is after " << number - 1
				 << " word" << '\n';
		previous = current;
	}
	keep_window_open();
	return 0;
}