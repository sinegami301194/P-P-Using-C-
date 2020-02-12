#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
	ifstream input("/home/alpatikov_i/Documents/hello_test.txt");
	string line;
	if (input.is_open()) {
		while (getline(input, line)) {
			cout << line;
		}
		cout << " Done" << endl;
	} else {
		cout << " Error" << endl;
	}
	operator<<(operator<<(cout, "Hello"), ", world");
	return 0; 
}