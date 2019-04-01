#include<iostream>
using namespace std;
class length{
private:
	int feet;
	float inches;
public:
	length() : feet(0),inches(0.0)
	{  }
	length(int a,float b) {
		feet = a;
		inches = b;
	}
	void get_data(){
		cout << "Enter the feet" << endl;
		cin >> feet;
		cout << "Enter the inches" << endl;
		cin >> inches;
	}
    void show_data(){
    	cout << feet << "\'-" << inches << "\"" << endl;
    }
    void operator += (length);//function declaration for overloading
};
 void length :: operator += (length d5){
 	feet += d5.feet;
 	inches += d5.inches;
 	if(inches >= 12){
 		inches -= 12;
 		feet++;
 	}
 	}
int main(){
	 length d1;
	 d1.get_data();
	 //length d1(22,9.5);

	 length d2(5,6.00);
	
	cout << "The distance 1 is " ; d1.show_data(); cout << endl;
	cout << "The distance 2 is " ; d2.show_data(); cout << endl;

	d2 += d1;
	cout << "The distance 2 is " ; d2.show_data(); cout << endl;

}