#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int array[n*2];

    for (int i = 0; i < n*2; ++i)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (array[i] < array[n+i])
        {
            swap(array[i], array[n+i]);
        }
    }

    for (int i : array)
    {
        cout << i << ' ';
    }

	return 0;
}
