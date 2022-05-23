#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int n, sum1, sum2;
	cout << "Vedite znachenie x" << endl;
	cin >> n;




	if (1 < n < 15)
	{
		int k = 1;
		sum1 = n + k + 1 / pow(k, 5);
		cout << "result" << sum1 << endl;
	}
	else
	{
		int j = 1;
		sum2 = 10 * j * (2 + 1 / j);
		cout << "result" << sum2 << endl;
	}

}


