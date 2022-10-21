#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	i = 1;
	while (i <= N)
	{
		S += (sin(cos(i)))/(1 + cos(i) * cos(i));
		i++;
	}
	cout << S << endl;
		S = 0;
	i = 1;
	do {
		{
			if (N == 0)
			{
				S = 0;
			}
		}
		S += (sin(cos(i))) / (1 + cos(i) * cos(i));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = 1; i <= N; i++)
	{
		S += (sin(cos(i))) / (1 + cos(i) * cos(i));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= 1; i--)
	{
		S += (sin(cos(i))) / (1 + cos(i) * cos(i));
	}
	cout << S << endl;
	return 0;
}