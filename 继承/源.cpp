#include<iostream>
using namespace std;

class Tier{
public:

	virtual void sprechen()
	{
		cout << "Tier sprechen" << endl;

	}
};

class Hund:public Tier 
{
	void sprechen()
	{
		cout << "Hund sprechen" << endl;
	}
};

void machen(Tier&tier)
{
	tier.sprechen();
	
}

void test01()
{
	Hund hund;
	machen(hund);
}



int main()
{
	test01();
	system("pause");
	return 0;
}