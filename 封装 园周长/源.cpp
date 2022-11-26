#include<iostream>
#include<string>
using namespace std;

const double PI = 3.14;
class yuan
{
public:

	int r;//°ë¾¶

	double zhouchang()
	{
		return 2 * PI * r;
	}
};


class xuesheng {
public:
	string name;
	int xuehao;
	void xianshi() {
		cout << name << xuehao << endl;
	}

};
int main() {

	yuan cc;
	cc.r = 5;
	cout << cc.zhouchang() << endl;

	xuesheng xiaoming;
	xiaoming.name = "xiaoming";
	xiaoming.xuehao = 154;
	xiaoming.xianshi();



	system("pause");
	return 0;
}