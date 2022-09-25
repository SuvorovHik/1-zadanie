#include <iostream>
#include <cmath>

using namespace std;
int main() {

    const int n = 7;

    double array[n+1];

    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    double result = 0;
    for (int i = 0; i < n; ++i)
    {
        result += pow(-1, i) * array[i] * array[n-i-1];
    }

    cout << result;

    return 0;
}
