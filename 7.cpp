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

    int resultArr[1000] = {0};

    int num;
    cin >> num;

    for (int i = 0; i < n; ++i)
    {
        for (int j = num-1; j = 0; --j)
        {
            if (array[j] > 0 && j+array[i] <= num && array)
            {
                resultArr[array[i]] = array[i];
            }
        }

        if (array[i] <= num && resultArr[array[i]] == 0)
        {
            resultArr[array[i]] = array[i];
        }

        if (resultArr[num] != 0) {
            break;
        }
    }

    while (num != 0)
    {
        cout << resultArr[num] << ' ';
        num -= resultArr[num];
    }

	return 0;
}
