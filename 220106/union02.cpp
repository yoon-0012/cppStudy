#include<iostream>
#include<cstring>

#define None 1
#define Integer 2
#define Float 3
#define String 4

union DataValue
{
	int v_int;
	float v_float;
	char* v_string;
};

struct DataNode
{
	void read_some_input()
	{
		char* p;
		char s[100];

		std::cout << "���ڳ� ���� �׸��� �Ǽ� �Է��� ��Ź�մϴ�. ";
		std::cin >> s;

		long l = strtol(s, &p, 10);
		if (*p == 0)
		{
			type = Integer;
			value.v_int = l;
			return;
		}

		float f = strtof(s, &p);
		if (*p == 0)
		{
			type = Float;
			value.v_float = f;
			return;
		}

		type = String;
		value.v_string = (char*)malloc(strlen(s) + 1);
		strcpy_s(value.v_string, strlen(s)+1, s);
	}

	void free_string()
	{
		if (String == type)
			free(value.v_string);
	}

	int type;
	DataValue value;
};

int main()
{
	DataNode inputData;
	inputData.read_some_input();

	switch (inputData.type)
	{
	case Integer:
		std::cout << "Integer : " << inputData.value.v_int << std::endl; break;
	case Float:
		std::cout << "Float : " << inputData.value.v_float << std::endl; break;
	case String:
		std::cout << "String : " << inputData.value.v_string << std::endl; break;
	}

	inputData.free_string();

	return 0;
}