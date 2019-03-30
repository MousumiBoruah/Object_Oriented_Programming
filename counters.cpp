#include<iostream>
using namespace std;
class counter{
private:
	int c,d;
public:
	counter(int a,int b) : c(a) ,d(b)
	{  }
	void show_data(){
		cout << c << "&" << d <<endl;
	}
	~counter()
	{  cout << "I AM A DESTRUCTOR" <<endl;
	 }
};
int main(){
	counter m(9,10);
	counter n(m);
	counter o = m;
	m.show_data();
	n.show_data();
	o.show_data();
}