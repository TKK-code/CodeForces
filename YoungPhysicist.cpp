#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int b,c,d;
	int b1,c1,d1;
	for(int i = 0; i < a; i++)
	{
		cin >> b >> c >> d;
		b1 = b + b1;
		c1 = c + c1;
		d1 = d + d1;
	}
	if(b1 == 0 && c1 == 0 && d1 == 0){
		cout << "Yes";
	}
	else cout << "No";
	return 0;

}

