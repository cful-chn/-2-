#include <iostream>
using namespace std;

class person
{
public:
	person()
	{
		cout << "person��Ĭ�Ϲ��캯������" << endl;

	}

	person(int age)
	{
		cout << "person���вι��캯������" << endl;
		m_age = age;
	 }

	person(const person& p)
	{
		cout << "person�Ŀ������캯������" << endl;
		m_age = p.m_age;
	}

	~person()
	{
		cout << "Person������������" << endl;
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