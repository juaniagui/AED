#include <iostream>
#include <cassert>
//#define NDEBUG

int main(){
	assert(-1-1 == -2);//Int
	assert(true==true);//Bool
	assert ('a'=='a');//Char
	assert (1.2+1.2==2.4);//Double
	assert (2*2==4);//unsigned int
	assert ("Juan" == "Juan");//String
	
}

