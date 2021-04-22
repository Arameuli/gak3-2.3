#include <iostream>
#include <string>
#include <vector>
#include"Smartphone.h"
using namespace std;
int main()
{
	vector<Smartphone> s;
	Smartphone t;
	int mx, mn, c;
	while (cin >> t.company >> t.model >> t.gb >> t.ram) {
		s.push_back(t);
	}
	mx = s[0].gb; mn = s[0].gb;
	for (int i = 0; i < s.size(); i++) {
		if (mx < s[i].gb) { 
			mx = s[i].gb; 
			c = i;
		}
	}
	s[c].print();
	for (int i = 0; i < s.size(); i++) {
		if (mn > s[i].gb) {
			mn = s[i].gb;
			c = i;
		}
	}
	s[c].print();
}

