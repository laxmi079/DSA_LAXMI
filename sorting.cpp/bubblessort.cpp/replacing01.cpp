#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {19, 12, 23, 8, 16};
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    vector<int> v(0, n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == 1)
                continue;
            else
            {
                if (arr[j] < min)
                {
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx]=1; 
        x++;
    }
    for (int i = 0; i < 5; i++)
    {

        cout << arr[i]<<" ";
    }
}
