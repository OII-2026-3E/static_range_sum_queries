#include <bits/stdc++.h>

using namespace std;

int main()
{
    int values, queries;
    cin >> values >> queries;
    vector<int> numbers(values, 0);

    for(int i = 0; i < values; i++)
    {
        int temp;
        cin >> temp;
        numbers[i] = temp;
    }

    vector<long long> psum(values, numbers[0]);
    for(int i = 1; i < values; i++)
    {
        psum[i] = psum[i - 1] + numbers[i];
    }

    for(int i = 0; i < queries; i++)
    {
        int a, b;
        cin >> a >> b;

        long long res = psum[b - 1];
        if(a != 1)
        {
            res -= psum[a - 2];
        }

        cout << res << endl;
    }

    return 0;
}
