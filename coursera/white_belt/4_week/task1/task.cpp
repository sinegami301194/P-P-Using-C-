*#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

class FunctionPart {
public:
	FunctionPart(char new_operation, double new_value) {
		operation = new_operation;
		value = new_value;
	}
	double Apply(double sorce_value) const {
		if (operation == '+') {
			return sorce_value + value;
		} else {
			return sorce_value - value;
		}
	}
	void Inver() {
		if (operation == '+') {
			operation = '-';
		} else {
			operation = '+';
		}
	}
private:
	char operation;
	double value;
};

class Function {
public:
	void AddPart(char operation, double value) {
		parts.push_back({operation, value});
	}
	double Apply(double value) const {
		for (const FunctionPart& part : parts) {
			value = part.Apply(value);
		}
		return value;
	}
	void Invert() {
		for (FunctionPart& part : parts) {
			part.Invert();
		}
		reverse(begin(parts), end(parts));
	}
private:
	vector<FunctionPart> parts;
};

int main() {

	return 0; 
}