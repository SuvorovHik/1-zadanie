#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    double array[n*2];
    for (int i = 0; i < n*2; ++i)
    {
        cin >> array[i];
    }

    double min = 9999999999999999999;
    double max = -9999999999999999999;

    for (int i = 0; i < n; ++i)
    {
        if (array[i] + array[n*2-i-1] > max)
        {
            max = array[i] + array[n*2-i-1];
        }
        if (array[i] * array[n+i] < min)
        {
            min = array[i] * array[n+i];
        }
    }

    cout << "max - " << max << " min - " << min;

	return 0;
}
