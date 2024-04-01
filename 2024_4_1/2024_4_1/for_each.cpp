#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void print1(int val) {
	cout << val << " ";
}

class print2 {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

int main() {
	vector<int>v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print1);
	cout << endl;
	for_each(v.begin(), v.end(), print2());
	cout << endl;
}