#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {19, 12, 23, 8, 16};
    int n = 5;
    vector<int> v(5, 0);
    int x = 0;
    // for negative and positive numbers//creating extra vector and giving cgeckmark with 1
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int midx = -1;

        for (int j = 0; j < n; j++)
        {
            if (v[j] == 1)
                continue;
            else
            {
                if (arr[j] < min)
                {
                    min = arr[j];
                    midx = j;
                }
            }
        }

        arr[midx] = x;

        v[midx] = 1;
        x++;
    }
    // for positive numbers //negative checkmark
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int midx = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] <= 0)
                continue;
            else
            {
                if (arr[j] < min)
                {
                    min = arr[j];
                    midx = j;
                }
            }
        }

        arr[midx] = -x;

        x++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = -arr[i];
        cout << arr[i] << " ";
    }
}
