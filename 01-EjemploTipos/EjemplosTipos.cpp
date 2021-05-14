
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
	
	//int 
	assert(2 == 2);
	assert(2 + 2 == 4);
	assert(2 - 2 == 0);
	assert(2 * 2 == 4);
	assert(2 / 2 == 1);
	assert(2 != 3);
	assert(2 <= 3);
	assert(2 >= 1);

	//unisigned int 
	assert(-2 == -2);
	assert(-2 + -2 == -4);
	assert(2- - -2 == 0);
	assert(-2 * -2 == 4);
	assert(-2 / -2 == 1);
	assert(-2 != 3);
	assert(-2 <= 3);
	assert(2 >= -1);

	//double
	assert(2.5 == 2.5);
	assert(2.5 + 2.5 == 5);
	assert(2.5 - 2.5 == 0);
	assert(2.5 * 2.5 == 6.25);
	assert(2.5 / 2.5 == 1);
	assert(2.5 != 3);
	assert(2.5 <= 3);
	assert(2.5 >= 1);

	//bool
	assert(true == !false);
	assert((true and true)==true);
	assert((true and false) == false);
	assert((true || false) == true);

	//string
	assert("tres" == "tres");
	assert("tres" != "dos");
	assert("tres"s + "tres"s == "trestres");
	assert("dos" <= "tres");
	assert("tres" >= "dos");
	//assert("tres"s.lenght() == 4);

	//char
	assert('a' == 'a');
	assert('a' != 'b');
	assert('a' <= 'b');
	assert('b' <= 'a');
	assert('a' +1 == 'b');
	assert(char(255)+1==0);

}
