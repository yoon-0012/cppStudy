#include<cstdlib>
#include<cstring>
#include<iostream>

class MyString
{
public:
	char* mData;
	size_t mLength;

	const char* GetData()const { return mData; }	
};

int main()
{
	const char* mString = "new 연산자와 malloc() 함수의 차이";
	unsigned short len = strlen(mString) + 1;

	MyString* s2 = new MyString();
	s2->mData = new char[len];
	memcpy(s2->mData, mString, len);
	printf("s2 포인터 : 0x%p, s2->mData 포인터 : 0x%p\n문자 : %s\n",
		s2, s2->GetData(), s2->GetData());

	delete[]s2->mData;
	delete s2;

	//malloc
	size_t n = sizeof(MyString);
	std::cout << n << std::endl;

	MyString* s3 = (MyString*)malloc(n);
	s3->mData = (char*)malloc(len);
	memcpy(s3->mData, mString, len);

	printf("s3 포인터 : 0x%p, s3->mData 포인터 : 0x%p\n문자 : %s\n",
		s3, s3->GetData(), s3->GetData());

	free(s3->mData);
	free(s3);

	return 0;
}