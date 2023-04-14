#include <iostream>
#include <vector>
using namespace std;


    int main()
    {
        vector <int> vec={1,2,3,4,5,6};
        vector <int>::iterator it = vec.begin();
        int l;
         cout<<"\nEnter the times of rotation ";
            cin>>l;
         cout<<l<<"\nInital Array: ";
         for(auto i:vec)
         {
            cout<<i<<" "; 
         }
        for(int i=0;i<l; i++)
        {
            vec.push_back(vec[0]);
            vec.erase(vec.begin());
        }
        cout<<endl;
        cout<<l<<" Times rotated Array: ";
        for(auto i: vec)
        {
            cout<<i<<" ";
        }
        return 0;
    }