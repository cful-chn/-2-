#include <iostream>
using namespace std;

class jisuanqi
{
public:
	virtual int jieguo()
	{
		return 0;
	}

	int	Num1;
	int	Num2;
};

class jia :public jisuanqi
{
	int jieguo()
	{		
		return Num1+Num2 ;
	}
};

class jian :public jisuanqi
{
	int jieguo()
	{
		return Num1 - Num2;
	}
};

class cheng :public jisuanqi
{
	int jieguo()
	{
		return Num1 * Num2;
	}
};

class chu :public jisuanqi
{
	int jieguo()
	{
		return Num1 / Num2;
	}
};

void test()
{

}

class jia :public jisuanqi
{
	int jieguo()
	{
		return Num1 + Num2;
	}
};

int main()
{
	system("pause");
	return 0;
}