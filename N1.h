#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int x, n, b, k = 1,sum1,sum2;
	cout << "Vedite znachenie x" << endl;
	cin >> x;
	cout << "Vedite znachenie n" << endl;
	cin >> n;
	cout << "Vedite znachenie b" << endl;
	cin >> b;


	if (x>4 && n>0)
	{
		sum1 = n + (1 + pow(k, 2) * x / k);
		cout << "result" <<sum1 <<endl;
	}
	else if (0<x<4 && b>0)
	{
		sum2 = x * sqrt(pow(b, 3));
		cout << "result" <<sum2 <<endl;
	}
	else
	{
		cout << "Primer raven 0" << endl;
	}

}
