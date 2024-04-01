#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};

struct comparePerson {
	bool operator()(const Person& p1, const Person& p2) const {
		return p1.age < p2.age;
	}
};

struct comparePerson3 {
	bool operator()(int v1, int v2) {
		return v1 % 10 < v2 % 10;
	}
};

int main() {
	vector<int> v = { 1,2,3,4,5,6,7 };
	bool ret = binary_search(v.begin(), v.end(), 4);
	if (ret)
		cout << "yes";
	else
		cout << "no";


	vector<Person> v2;
	v2.push_back(Person("a", 1));
	v2.push_back(Person("b", 2));
	v2.push_back(Person("c", 3));
	v2.push_back(Person("d", 4));
	v2.push_back(Person("e", 5));
	sort(v2.begin(), v2.end(), comparePerson());
	bool ret2 = binary_search(v2.begin(), v2.end(), Person("e", 6), comparePerson());
	if (ret2)
		cout << "yes";
	else
		cout << "no";

	vector<int> v3 = { 15,23,37,42,55,67,79 };
	bool ret3 = binary_search(v3.begin(), v3.end(), 57, comparePerson3());
	if (ret3)
		cout << "yes";
	else
		cout << "no";
}