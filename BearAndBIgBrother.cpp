#include <iostream>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin); 
		freopen("output.txt","w",stdout);
	#endif

	int a;
	int b;
	int count = 0;

	cin >> a >> b;
	if(a <= b && a >=1 && b <= 10){
		while(a <= b){
			a = a *3;
			b = b *2;
			count++;
		}

		cout << count << endl;
	}

	
	// a is less than b where the condition is true
	// and where b is greater than a then the conditon is false
	

	return 0;
}
