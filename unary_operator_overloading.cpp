#include<iostream>
using namespace std;
class counter{
private:
	int count;
public:
	counter() : count(0)
	{  }
	counter(int c) : count(c)
	{  }
	int get_data(){
		return count;
	}
	//for prefix
	counter operator ++(){
		return counter(++count);//counter temp;temp.count = count;return temp;
	}
	//for postfix
	counter operator ++(int){
		return counter(count++);
	}
};
int main(){
	counter c1,c2;
	cout << "count=" << c1.get_data() << endl;
	cout << "count=" << c2.get_data() << endl;
	++c1;
	c2 = ++c1;
	cout << "count=" << c1.get_data() << endl;
	cout << "count=" << c2.get_data() << endl;
	c1++;
	cout << "count=" << c1.get_data() << endl;
	c2 = c1++;
	cout << "count=" << c1.get_data() << endl;
	cout << "count=" << c2.get_data() << endl;
}