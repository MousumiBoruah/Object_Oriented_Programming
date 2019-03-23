#include<iostream>
using namespace std;
class complex_numbers{
private:
	float real_part;
	float imag_part;
public:
	void get_data();
	void set_data();
	complex_numbers add(complex_numbers);
};
void complex_numbers :: get_data(){
	cout << "ENTER THE REAL PART" << endl;
	cin >> real_part; 
	cout << "ENTER THE IMAGINARY PART" << endl;
	cin >> imag_part;
}
void complex_numbers :: set_data(){
	cout << real_part << " + i " << imag_part << endl;
}
complex_numbers complex_numbers :: add(complex_numbers a){
	complex_numbers t;
	t.real_part = real_part + a.real_part;
	t.imag_part = imag_part + a.imag_part;
	return t;
}
int main(){
	complex_numbers a,b,c;
	a.get_data();
	b.get_data();
	cout << "FIRST COMPLEX NUMBER IS: "<< endl;
	a.set_data();
	cout << "SECOND COMPLEX NUMBER IS: " << endl;
	b.set_data();
	c = b.add(a);
	cout << "THE SUM IS : " <<endl;
	c.set_data();
 
}