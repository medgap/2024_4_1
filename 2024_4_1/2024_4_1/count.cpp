#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Person {
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	bool operator==(const Person& p) {
		if (p.age == this->age && p.name == this->name)
			return true;
		return false;
	}
	string name;
	int age;
};

int main() {
	vector<int> v = { 1,2,3,5,7,23,77,6,6,6 };
	cout << count(v.begin(), v.end(), 6) << endl;
	vector<Person> v2;
	v2.push_back(Person("a", 1));
	v2.push_back(Person("a", 1));
	v2.push_back(Person("a", 1));
	v2.push_back(Person("a", 13));
	v2.push_back(Person("a", 14));
	v2.push_back(Person("a", 13));

	Person p("a", 13);
	cout << count(v2.begin(), v2.end(), p) << endl;


}