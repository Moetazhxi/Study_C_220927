#include <iostream>
using namespace std;

//（1）编写一个C++程序，求两数之和。
//int main()
//{
//	int a, b, c;
//	cin >> a >> b;
//	c = a + b;
//	cout << "c=" << c << endl;
//	return 0;
//}

// (2) 编写一个C++程序，求矩形的周长和面积。
int main()
{
	int a, b, C, S;
	cin >> a >> b;
	C = 2 * (a + b);
	S = a * b;
	cout << "周长C=" << C << "\n面积S=" << S << endl;
	return 0;
}
