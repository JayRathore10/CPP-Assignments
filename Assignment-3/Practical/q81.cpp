#include<iostream>
using namespace std;

class Parent{
public:
	void surname(){
		cout<<"surname"<<endl;
	}
};

class child1 : public Parent{
public:
	void name(){
		cout<<"Child 1"<<" ";
	}
};

class child2 : public Parent{
public:
	void name(){
		cout<<"Child 2"<<" ";
	}
};

int main(){
	child1 c1;
	child2 c2;

	c1.name();
	c1.surname();

	c2.name();
	c2.surname();
	return 0;
}
