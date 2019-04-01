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
    bool operator < (length);//function declaration for overloading
};
    bool length ::  operator < (length d5){
 	float x = feet + inches/12;//first is direct obtained & 2nd is obtained through . operator
 	float y = d5.feet + d5.inches/12;
 	return (x < y) ? true : false;
 }
int main(){
	 length d1;
	 d1.get_data();
	 //length d1(22,9.5);

	 length d2(5,6.00);

	 cout << "distance_1 =";d1.show_data();
	 cout << "\ndistance_2 =";d2.show_data();
	 
	 if(d1 < d2)
	 	cout << "distance_1 is less than distance_2"<< endl;
	 else
	    cout << "distance_2 is less than distance_1"<< endl;

}