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
	string previous = " ";
	string current;
	while (cin  >> current) {
		if (previous == current)
			cout << "Repeated word: " << current << '\n';
		previous = current;
	}
	keep_window_open();
	return 0;
}