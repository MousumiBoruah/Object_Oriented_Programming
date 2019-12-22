#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
class Shape {
	public:
		virtual void get_value(){}
		virtual void draw(){}

};
class Circle : public Shape{
	int x_cor, y_cor, rad;
	public:
		void get_value(){
			cout << "Enter the co-ordinates and radius:" << endl;
			cin >> x_cor >> y_cor >> rad;
		}
		void draw(){
			circle(x_cor, y_cor, rad);
		}

};

class Square : public Shape{
	int side, x_cor, y_cor;
	public:
	    void get_value(){
			cout<<"Enter the side and coordinate"<<endl;
			cin >> side >> x_cor >> y_cor;
	    }
	    void draw(){
			rectangle(x_cor,y_cor,x_cor+side,y_cor+side);
	    }


};

class Triangle : public Shape{
	int x1,x2,x3,y1,y2,y3;
	public:
	    void get_value(){
		cout<<"Enter coordinates"<<endl;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	    }
	    void draw(){
			line(x1, y1, x2, y2);
			line(x2,y2,x3,y3);
			line(x3,y3, x1, y1);
	    }


};
int main(){
	int gd= DETECT, gm;
	initgraph(&gd, &gm, "../BGI");
	Shape *array[3]; //Base pointer declared
	// Various shapes declared
	Triangle tr;
	Square sq;
	Circle cir;
	// stored in the array
	array[0] = &tr;
	array[1] = &sq;
	array[2] =  &cir;
	// storing values and drawing the shape
	cout << "Triangle" << endl;
	array[0] -> get_value();
	array[0] -> draw();
	cout << "Square" << endl;
	array[1] -> get_value();
	array[1] -> draw();
	cout << "Circle" << endl;
	array[2] -> get_value();
	array[2] -> draw();
	getch();
	closegraph();

}
