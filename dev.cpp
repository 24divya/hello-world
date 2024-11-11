#include <iostream>
#include <vector>
using namespace std;
vector<int> arrayprod(vector<int> &a)
{
    int m = a.size();
    vector<int> arr(m, 1);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i != j)
            {
                arr[i] *= a[j];
            }
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {2, 2, 2, 2, 2};
    vector<int> res = arrayprod(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}