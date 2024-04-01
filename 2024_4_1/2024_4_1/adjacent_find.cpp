#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

class Person {
public:
	Person(string name, int age){
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
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(5);
	v1.push_back(2);
	v1.push_back(6);
	v1.push_back(4);

	vector<int>::iterator pos = adjacent_find(v1.begin(), v1.end(),greater<int>());
	if (pos != v1.end())
		cout << "yes  num = " << *pos << endl;
	else
		cout << "no";

	vector<Person> v2;
	v2.push_back(Person("a", 1));
	v2.push_back(Person("b", 2));
	v2.push_back(Person("c", 4));
	v2.push_back(Person("d", 3));
	v2.push_back(Person("f", 7));
	v2.push_back(Person("f", 7));

	vector<Person>::iterator pos2 = adjacent_find(v2.begin(), v2.end());
	if (pos2 != v2.end())
		cout << "yes  age = " << pos2->age << endl;
	else
		cout << "no";
}