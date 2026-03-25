#include "TestString.h"
	
TestString::TestString()
{
	Size = 0;
	Capacity = 2;
	Data = new char[Capacity];
}

TestString::~TestString()
{
	delete[]Data;
	Data = nullptr;
}

void TestString::InputString(char* InString)
{	
	int StringLength = 0;
	for (char* i = InString; *i != '\0'; i++)
	{
		StringLength++;
	}
	delete[]Data;
	Data = new char[StringLength + 1];
	for (int i = 0; i < StringLength; i++)
	{
		Data[i] = InString[i];
		
	}
	Data[StringLength] = '\0';
	Size = StringLength;
}

void TestString::PushBack(char InputChar)
{
	Size++;
	
	if (Size - 1 > Capacity) {
		Capacity = Capacity * 2;
		char* NewData = new char[Capacity];
		
		for (int i = 0; i < Size - 1; i++)
		{
			NewData[i] = Data[i];
		}
		
		delete[]Data;

		Data = NewData;
	}
	
	
	Data[Size - 1] = InputChar;
	Data[Size] = '\0';
	

}

char* TestString::operator+(char* Target)
{	

	return nullptr;
}

const char* TestString::operator[](int index)
{
	return Data + index;
}


int TestString::GetCapacity()
{
	return 0;
}

int TestString::GetLength()
{	

	return Size;
}



