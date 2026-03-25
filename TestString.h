#pragma once
class TestString
{
public:
	TestString();
	~TestString();
	
	
	void InputString(char* InString);
	void PushBack(char InputChar);

	int GetLenth(char* String);

	char* operator+(char* Target);
	const char* operator[](int index);

	int GetSize();
	int GetCapacity();
	


protected:
	char* Data;
	size_t Size;
	size_t Capacity;

};

