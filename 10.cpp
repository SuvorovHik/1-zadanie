#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    double array[n];
    for (int i = 0; i < n; ++i)
	{
        cin >> array[i];
    }


    double bArray[n];
    for (int i = 0; i < n; ++i)
	{
        cin >> bArray[i];
    }

    double result = 1;

    for (int i = 0; i < n; ++i)
    {
        result *= (array[i] + bArray[n-i-1]);
    }

    cout << result;

	return 0;
}
