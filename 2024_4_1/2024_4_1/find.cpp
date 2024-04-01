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
	bool operator==(const Person& p) {
		if (this->name == p.name && this->age == p.age)
			return true;
		return false;
	}
	string name;
	int age;
};

int main() {
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person p5("ccc", 30);
	vector<Person>::iterator pos = find(v.begin(), v.end(), p5);
	if (pos != v.end())
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}