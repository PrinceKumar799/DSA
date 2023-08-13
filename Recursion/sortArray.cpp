#include <iostream>
#include <vector>
using namespace std;
vector<int> insertAT(vector<int> &V, int val)
{
    int len = V.size();
    if ((len == 0) || (V[len - 1] <= val))
    {
        V.push_back(val);
        return V;
    }

    int last = V[len - 1];
    V.pop_back();
    insertAT(V, val);
    V.push_back(last);
    return V;
}
vector<int> sort(vector<int> &arr)
{
    if (arr.size() == 1)
        return arr;

    int last = arr[arr.size() - 1];
    arr.pop_back();
    vector<int> temp = sort(arr);
    vector<int> sorted = insertAT(temp, last);
    return sorted;
}
int main()
{
    vector<int> arr = {3, 2, 5, 4, 6};
    vector<int> ans = sort(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " " << endl;
    }
    return 0;
}