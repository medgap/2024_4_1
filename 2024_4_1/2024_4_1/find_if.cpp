#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Greater2 {
public:
	bool operator()(int val) {
		return val > 4;
	}
};

class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};

class ageGreater2 {
public:
	bool operator()(const Person& p) {
		return p.age > 2;
	}
};

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	vector<int>::iterator pos = find_if(v.begin(), v.end(), Greater2());
	if (pos != v.end())
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	vector<Person> v2;
	Person p1("aaa", 1);
	Person p2("bbb", 2);
	Person p3("ccc", 3);
	Person p4("ddd", 4);

	v2.push_back(p1);
	v2.push_back(p2);
	v2.push_back(p3);
	v2.push_back(p4);

	vector<Person>::iterator pos2 = find_if(v2.begin(), v2.end(), ageGreater2());
	if (pos2 != v2.end())
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}