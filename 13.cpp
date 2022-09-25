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

    int max = INT32_MIN;

    for (int i : array)
    {
        if (i > max)
        {
            max = i;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (array[i] != max)
        {
            array[i] = 0;
        }
        else
        {
            array[i] = 1;
        }
    }

    for (int i : array)
    {
        cout << i << ' ';
    }

	return 0;
}
