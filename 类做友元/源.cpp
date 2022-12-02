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
	cout << "正在访问" << building->keting << endl;
	cout << "正在访问" << building->woshi << endl;
	
	
}

Building::Building()
{
	keting = "客厅";
	woshi = "卧室";
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