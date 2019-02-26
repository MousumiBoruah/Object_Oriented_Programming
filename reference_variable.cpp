#include<iostream>
using namespace std;
int main(){
	int x = 10;
	int &y = x;
	cout << "Before changing values" << x << "-" << y << endl;
	y = y + 10;
	cout << "After changing the reference variable" << x << "-" << y << endl;
	x = x * 10;
	cout << "After changing the value" << y << "-" << x <<endl;
}