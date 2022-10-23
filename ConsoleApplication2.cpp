#include <iostream>
using namespace std;
int main() {
	int n,a,b;
	cin >> n;
	b = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		b += a;
	}
	cout << float(b) / float(n);
}
