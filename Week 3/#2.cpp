#include <bits/stdc++.h>
using std::cin;
using std::cout;

int main(){
	int x;
	cout << "To calculate: 1- x^2/2! + x^4/4! - x^6/6! + x^8/8! - x^10/10! \nEnter x: ";
	cin >> x;
	
	cout << 1 - (pow(x,2)/2 ) + (pow(x,4)/ 24) - (pow(x,6)/ 720) + (pow(x,8)/ 40320) - (pow(x,10)/ 3628800) ; 
	
	
	
	return 0;
}
