#include<iostream>
#include<vector>
using namespace std;
// void allSubsequences(vector<int> arr,vector<int> &seq,int index)
// {
//     if(index==arr.size()-1)
//     {
//         for(auto i: seq)
//             cout<<i<<" ";
//         cout<<endl;
//         return;
//     }
//     seq.push_back(arr[index]);
//     allSubsequences(arr,seq,index+1);
//     seq.pop_back();
//     allSubsequences(arr,seq,index+1);
// }

// int main()
// {
//     vector<int> seq;
//     vector<int> arr;
//     arr.push_back(1);
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     allSubsequences(arr,seq,0);
//     return 0;
// }

void print(int n)
{
    if(n>100)
    {
        return;
    }
    cout<<n<<" ";
    print(n+1);
}

int main()
{
    print(2);
}