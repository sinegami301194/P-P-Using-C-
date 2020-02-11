#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void PrintEvents(const map<int, string>& m) {
	for (auto item : m) {
		cout << item.first << ": " << item.second << endl;
	}
}

void PrintEvents1(const map<string, int>& m) {
	for (auto item : m) {
		cout << item.first << ": " << item.second << endl;
	}
}

map<string, int> BuildReverseMap(const map<int, string>& m) {
	map<string, int> result;
	for (auto item : m) {
		result[item.second] = item.first;
	}
	return result;
}

int main() {
	map<int, string> events;
	events[1950] = "Bjarne";
	events[1941] = "Denis";
	events[1970] = "UNIX epoch start";
	events.erase(1970);
	cout << events.size() << endl;
	PrintEvents(events);
	map<string, int> result = BuildReverseMap(events);
	PrintEvents1(result);
}