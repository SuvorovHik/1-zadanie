#include <iostream>

using namespace std;
int main()
{
    int n;

    cin >> n;

    int array[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    int min = INT32_MAX;
    int avg = 0;
    int posMin;

    for (int i = 0; i < n; ++i)
    {
        if (array[i] <= min)
        {
            min = array[i];
            posMin = i;
        }

        avg += array[i];

    }

    avg /= n;

    array[posMin] = avg;

    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << ' ';
    }

	return 0;
}
