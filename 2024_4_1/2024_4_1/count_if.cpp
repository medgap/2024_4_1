#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Greater5 {
	bool operator()(int val) {
		return val > 5;
	}
};

struct Person {
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};

struct ageUnder2 {
	bool operator()(const Person& p) {
		return p.age < 2;
	}
};

int main() {
	vector<int> v = { 1,2,3,4,5,6,7,7 };
	cout << count_if(v.begin(), v.end(), Greater5()) << endl;

	vector<Person> v2;
	v2.push_back(Person("a", 1));
	v2.push_back(Person("a", 1));
	v2.push_back(Person("a", 1));
	v2.push_back(Person("a", 1));

	cout << count_if(v2.begin(), v2.end(), ageUnder2()) << endl;

}