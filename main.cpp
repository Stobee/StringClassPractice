#include <iostream>
#include <string>
#include "TestString.h"


using namespace std;


int main()
{
	TestString S1 = "Hello";
	TestString S2 = "World";

	TestString S3 = S1 + " " + S2;

	cout << S3.GetPointer() << endl;


	
		
	
	

	
	return 0;
}