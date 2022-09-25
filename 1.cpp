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

    for (int i = 1; i <= n; ++i)
    {
        cout << array[i-1] << ' ';

        if (i % 4 == 0)
        {
            cout << endl;
        }
    }

	return 0;
}
