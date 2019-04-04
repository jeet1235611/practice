#include <iostream>
using namespace std;

int fact(int n) {
	if(n == 0 || n == 1)
		return 1;
	return n*fact(n-1);
}

int main() {
	int n;
	cout << "Enter the number to be checked!!!" << endl;
	cin >> n;
	int originalNum = n;
	int factAdd = 0;
	while(n > 0) {
		factAdd = factAdd + fact(n%10);
		n = n / 10;
		
	}
	if(originalNum == factAdd)
		cout <<"Strong Number = YES!!!" << endl;
	else
		cout << "Strong Number = NOOO!!!" << endl;
	return 0;
}
