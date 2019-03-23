#include<iostream>
using namespace std;
class human{
private:
	int age;
	char name[50];
public:
	void get_data();
	void set_data();
};
void human :: get_data(){
	cout << "WHAT IS YOUR NAME?" << endl;
	cin >> name;
	cout << "WHAT IS YOUR AGE?" << endl;
	cin >> age;
}
void human :: set_data(){
	cout << "MY NAME IS " << name << endl;
	cout << "I am " << age << " years old" << endl;
}
int main(){
	human h;
	h.get_data();
	h.set_data();
}