#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b) {
	return a * b;
}
float thuong(int a, int b) {
	if (b == 0) {
		return new throw("Suc vat bi loi roi");
	}
	else {
		return (float)a / b;
	}
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int tich = tich(3, 5);
	int thuong = thuong(3, 0);
	cout << tich;
	cout << thuong;
	system("pause");
	return 0;
}