#include "TestString.h"
	
TestString::TestString()
{
	Data = new char[1];
	Data[0] = '\0';
	Length = 0;
	Capacity = 0;
}
TestString::TestString(const char* InString)
{
	Length = CountLength(InString);
	Data = new char[Length + 1];
	CopyString(InString);
}

// 자기 형태를 복사하는 생성자
TestString::TestString(const TestString& Other)
{
	Length = Other.GetLength();
	Data = new char[Other.GetLength() + 1];
	CopyString(Other.Data);
}

TestString::~TestString()
{
	delete[]Data;
	Data = nullptr;
}









int TestString::GetCapacity()
{
	return 0;
}

inline size_t TestString::GetLength() const
{	

	return Length;
}



