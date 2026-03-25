#include <iostream>
#include <string>
#include "TestString.h"


using namespace std;


int main()
{
	TestString MyArray;
	MyArray.PushBack('a');
	MyArray.PushBack('p');
	MyArray.PushBack('p');
	MyArray.PushBack('l');
	MyArray.PushBack('e');

	for (int i = 0; i < MyArray.GetSize(); i++)
	{
		cout << MyArray[i] << ', ';
	}
	

	
	return 0;
}