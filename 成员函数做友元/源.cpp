#include <iostream>
using namespace std;
#include<string>;

class Building;
class Goodgay
{
public:
	Goodgay();

	void vist1();
	void vist2();

	Building* building;
};

class Building
{
	friend void Goodgay::vist1();
public:
	Building();
public:
	string keting;
private:
	string woshi;
};

Building::Building()
{
	keting = "����";
	woshi = "����";
}

Goodgay::Goodgay()
{
	building = new Building;
}

void Goodgay::vist1()
{
	cout<< "vist1���ڷ���:" << building->keting << endl;
	cout << "vist1���ڷ���:" << building->woshi << endl;
}
void Goodgay::vist2()
{
	cout << "vist2���ڷ���:" << building->keting << endl;
}
void test()
{
	Goodgay gg;
	gg.vist1();
	gg.vist2();
}

int main() {

	test();

	system("pause");
	return 0;
}