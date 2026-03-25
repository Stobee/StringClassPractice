#pragma once
class TestString
{
public:
	TestString();
	~TestString();
	
	
	void InputString(const char*InString);
	void PushBack(char InputChar);

	int GetLength();

	char* operator+(char* Target);
	const char* operator[](int index);

	
	int GetCapacity();
	


protected:
	char* Data;
	size_t Size;
	size_t Capacity;

};

