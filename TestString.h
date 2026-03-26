#pragma once
class TestString
{
public:
	TestString();
	TestString(const char* InString);
	TestString(const TestString& Other);
	~TestString();
	
	

	size_t GetLength()const;

	TestString operator+(const TestString& RHS) const
	{
		size_t NewLength = Length + RHS.GetLength() + 1; '\0';
		char* NewResult = new char[NewLength];

		//기존 있은거 가져오기
		for (int i = 0; i < Length; ++i)
		{
			NewResult[i] = Data[i];
		}

		//+더하기 뒤에 있는거 합치기
		int j = 0;
		for (int i = (int)Length; i < NewLength; ++i)
		{
			NewResult[i] = RHS.Data[j];
			j++;
		}

		NewResult[NewLength - 1] = '\0';


		return TestString(NewResult);
	}

	bool operator==(const TestString& Other)
	{
		if (Length != Other.GetLength())
		{
			return false;
		}
		
		for (int i = 0; i < Length; i++)
		{
			if (Data[i] != Other.Data[i])
			{
				return false;
			}
		}
		return true;
	}

	inline const char* GetPointer()
	{
		return Data;
	}


	
	int GetCapacity();
	
	

	
	


protected:
	char* Data;
	size_t Length = 0;
	size_t Capacity;

	size_t CountLength(const char* InString) const
	{
		int Count = 0;
		while (InString[Count] != '\0')
		{
			Count++;
		}

		return Count;
	}

	void SetCapcity()
	{
		if (Length - 1 > Capacity)
		{
			Capacity = Capacity * 2;
		}
	}

	void CopyString(const char* InString)
	{
		for (int i = 0; i < Length; i++)
		{
			Data[i] = InString[i];
		}
		Data[Length] = '\0';
	}
};

