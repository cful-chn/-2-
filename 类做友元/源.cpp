#include<iostream>
using namespace std;

class Building
{
	friend class goodgay;
public:
	Building();
public:
	string keting;
private:
	string woshi;
};
class goodgay
{
public:
	goodgay();
	void visit();

	Building* building;
};
goodgay::goodgay()
{
	building = new Building ;
}
void goodgay::visit()
{
	cout << "���ڷ���" << building->keting << endl;
	cout << "���ڷ���" << building->woshi << endl;
	
	
}

Building::Building()
{
	keting = "����";
	woshi = "����";
}

void test01()
{
	goodgay gg;
	gg.visit();
}
int main() {

	test01();

	system("pause");
	return 0;
}