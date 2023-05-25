// Problem Link: https://www.spoj.com/problems/AGGRCOW/
#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> dis, int C, int mi)
{
    int cnt = 1;
    int last = dis[0];
    for (int i = 1; i < dis.size(); i++)
    {
        if (dis[i] - last >= mi)
        {
            cnt++;
            last = dis[i];
        }
        if (cnt == C)
        {
            return true;
        }
    }
    return false;
}
int solve()
{
    int N, C;
    cin >> N >> C;
    vector<int> dis;
    int mi = INT32_MAX, ma = 0;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        dis.push_back(temp);
        mi = min(mi, temp);
        ma = max(ma, temp);
    }
    sort(dis.begin(), dis.end());
    int low = mi, high = ma - mi;
    int res = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isValid(dis, C, mid))
        {
            res = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
}