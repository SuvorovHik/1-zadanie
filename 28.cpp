#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int array[n+1];

    int num;
    cin >> num;

    array[0] = num;
    for (int i = 1; i <= n; ++i)
    {
        array[i] = array[i/2] + array[i-1];
    }

    for (int i : array)
    {
        cout << i << ' ';
    }

	return 0;
}
