#include <iostream>

using namespace std;

int hieu(int a, int b) 
	{
		return a - b;
	} 

int tong(int a, int b) {
	return a + b;
}

int tich(int a, int b) {
	return a * b;
}
float thuong(int a, int b) {
	if (b == 0) {
		return new throw("Vui long nhap lai b!!!");
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
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Tong la: " << tong(a, b) << endl;
	cout << hieu;

	system("pause");
	return 0;
}