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
	int count;
	cin >> count;
	string name;
	cin >> name;
	int c2 = count + 2;
	string s2 = name + " Jr. ";
	int c3 = count - 3;
	string s3 = name;
	cout << "count == " << count
		 << "\nname == " << name
		 << "\nc2 * 3 == " << c2 * 3
		 << "\ns2 == " << s2
		 << "\nc3 / 2 == " << c3 / 2
		 << "\ns3 == " << s3 
		 << "\n";
	keep_window_open();
	return 0;
}