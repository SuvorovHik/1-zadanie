#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int array[10] = {0};

    while (n > 0)
    {
        array[n % 10]++;
        n /= 10;
    }

    int result = 0;
    for (int i : array)
    {
        if (i > 0)
        {
            ++result;
        }
    }

    cout << result;

	return 0;
}
