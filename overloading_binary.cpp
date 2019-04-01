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
    length operator + (length);//function declaration for overloading
};
 length length ::  operator + (length d5){
 	float f = feet + d5.feet;//first is direct obtained & 2nd is obtained through . operator
 	float i = inches + d5.inches;
 	if(i >= 12.0){
 		i -= 12;
 		f++;
 	}
 	return length(f,i);
 }
int main(){
	 length d1,d3,d4;
	 d1.get_data();
	 //length d1(22,9.5);

	 length d2(5,6.00);
	 d3 = d1 + d2;

	 d4 = d1 + d2 + d3 + d4;

	cout << "The distance 1 is " ; d1.show_data(); cout << endl;
	cout << "The distance 2 is " ; d2.show_data(); cout << endl;
	cout << "The distance 3 is " ;d3.show_data() ; cout<< endl;
	cout << "The distance 4 is " ; d4.show_data(); cout << endl;

}