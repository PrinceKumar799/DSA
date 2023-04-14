#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        vector<vector<string>> entries;
        map<string,int> m; 
        cin>>n;
        for(int i=0;i<3;i++)
        {
            vector<string> temp;
            for(int j=0;j<n;j++)
            {
                string str;
                cin>>str;
                temp.push_back(str);
                m[str]++;
            }
            entries.push_back(temp);
        }
        vector<int> vec;
        for(auto i: entries)
        {
            int points=0;
            for(auto j: i)
            {
                if(m[j]==1)
                {
                   points += 3; 
                }
                else if(m[j]==2)
                {
                    points += 1;
                }
            }
            vec.push_back(points);
        }
        for(int i=0;i<3;i++)
        {
            cout<<vec[i]<<" ";
        }

    }
    return 0;
    
}