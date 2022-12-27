using namespace std;
#include <string>
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    int i = 0;
    int j = arr.size() - 1;
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int k = 0;

    while (i < j)
    {
        if (arr[i] == arr[i + 1] || arr[j] == arr[j - 1])
        {
            break;
        }
        else
        {
            if (arr[i] + arr[j] == s)
            {
                ans[k].push_back(arr[i]);
                ans[k].push_back(arr[j]);
                k++;
                i++;
                j--;
            }
            else if (arr[i] + arr[j] > s)
            {
                ans[k].push_back(arr[i]);
                ans[k].push_back(arr[j]);
                k++;
                j--;
            }
            else
            {
            ans[k].push_back(arr[i]);
            ans[k].push_back(arr[j]);
            k++;
                i++;
            }
        }
    }
    return ans;
}

