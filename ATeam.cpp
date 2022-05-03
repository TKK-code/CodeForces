#include <iostream>
using namespace std;

int main() {
	
	int questions;
	cin >> questions;
	int Petya;
	int Vasys;
	int Tonya;
	int count = 0;
	if (questions >= 1 && questions <= 1000) {
		for (int i = 0; i < questions; i++) {
			cin >> Petya >> Vasys >> Tonya;
			if ((Petya + Vasys + Tonya) >1) {
				count++;
			}
		}
		cout << count;
	}
	return 0;
}
