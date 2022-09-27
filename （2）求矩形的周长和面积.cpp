#include <iostream>
using namespace std;

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
