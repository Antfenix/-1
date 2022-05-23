#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int x, m, e, sum1, sum2;
	double n;
	cout << "Vedite znachenie x" << endl;
	cin >> x;
	cout << "Vedite znachenie n" << endl;
	cin >> m;
	cout << "Vedite znachenie b" << endl;
	cin >> e;
	


	if (m > 5 && 0< x < 12)
	{
		sum1 = m * x - 1 * pow(e, x + 1);
		cout << "result" << sum1 << endl;
	}
	else if (x != 0&&m != n)
	{
		sum2 = m * x - 1 * 1 / x;
		cout << "result" << sum2 << endl;
	}
	else
	{
		cout << "Primer raven 0" << endl;
	}

}

