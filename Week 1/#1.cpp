#include <iostream>
using std::cin;
using std::cout;

int main(){
	int a;
	cout << "Enter a number: ";
	cin >> a;
	
	(a%2==0)? cout << "Number is Even!": cout << "Number is Odd!";
	return 0;
}
