#include <iostream>
using namespace std;

class person
{
public:
	person()
	{
		cout << "person的默认构造函数调用" << endl;

	}

	person(int age)
	{
		cout << "person的有参构造函数调用" << endl;
		m_age = age;
	 }

	person(const person& p)
	{
		cout << "person的拷贝构造函数调用" << endl;
		m_age = p.m_age;
	}

	~person()
	{
		cout << "Person析构函数调用" << endl;
	}

	

	int m_age;
};


void test1()
{
	person p1;
	person p2(p1);
}


int main()
{
	test1();
	

	system("pause");
	return 0;

}