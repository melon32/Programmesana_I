
#include <bits/stdc++.h>
using namespace std;

bool checkValidity(int a, int b, int c)
{

	if (a + b <= c || a + c <= b || b + c <= a)
		return false;
	else
		return true;
}


int main()
{
	int a, b, c;
	cout << "Ievadiet malu garumus" << endl;
	cout << "mala a : " << endl;
	cin >> a;
	cout << "mala b: " << endl;
	cin >> b;
	cout << "mala c: " << endl;
	cin >> c;
	if (checkValidity(a, b, c))
		cout << "Valid";
	else
		cout << "Invalid";
}
