#include<iostream>
#include "counterType.h"
using namespace std;
int main(){

	counterType c;
	cout<<"Default value"<<endl;
	c.print();

	c.set_counter(10);
	cout<<"User set value"<<endl;
	c.print();

	c.set_counter(-10);
	cout<<"Setting negative value"<<endl;
	c.print();

	(void)system("pause"); // Cast to void to suppress the warning
	return 0;

}