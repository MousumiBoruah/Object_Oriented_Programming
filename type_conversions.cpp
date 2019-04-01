#include<iostream>
using namespace std;
class length{
private:
	const float MTF;
	int feet;
	float inches;
public:
	length() : feet(0),inches(0.0),MTF(3.28F)//0 argument constructor
	{  }
	length(float meters) : MTF(3.28F)//one argument constrictor
	{	
		float fltfeet = MTF * meters;//converting meter to feet
		feet = int(fltfeet);//type_conversion so that we can obatin the inches
		inches = 12 * (fltfeet - feet); 
	}
	length(int ft,float in) : feet(ft),inches(in),MTF(3.28F)//two argument constructor
	{  }
	void get_data(){
		cout << "Enter the feet" << endl;
		cin >> feet;
		cout << "Enter the inches" << endl;
		cin >> inches;
	}
    void show_data(){
    	cout << feet << "\'-" << inches << "\"" << endl;
    }
    operator float() {  //conversion operator to convert a user_defined to basic type
    	float fracfeet = inches/12;
    	fracfeet += static_cast<float>(feet);
    	return fracfeet/MTF;
     }
 };
 int main(){
 	float metres;
 	length d1 = 2.35F;//for basic to user_defined

 	d1.get_data();
 	cout << "distance_1 =";d1.show_data();

 	//metres = static_cast<float>(d1);//for user_Defined to basic(float)
 	metres = d1;

	cout << "\ndistance_1 in metres=" << metres << endl;

 	length d2(5,10.25);

 	metres = static_cast<float>(d2);//for user_Defined to basic(float)

 	cout <<"distance_2 in metres=" << metres << endl;

 }