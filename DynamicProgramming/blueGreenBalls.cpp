//AnkitCode99 here....
//every ups and downs matter!
 
#include<bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
#define deb(x) cout<<#x<<" - "<<x<<'\n'
 
using namespace std;
 
const ll sz=1e5+5;
const ll szz=1e6+6;
const ll mod=1e9+7;

/*
ball type
1 - blue
0 - green
*/
int k,l;
vector<pair<int,int>> a,b;

int dist(int x1,int y1,int x2,int y2){
    return abs((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
int dp[1001][1001][2];
int solve(int blue, int green, bool ballType){
    dp[1][0][1] = 0;
    dp[1][1][0] = dist(a[1].first,a[1].second,b[1].first,b[1].second);
    for (int i = 0; i < blue+1; i++)
    {
        for (int j = 0; j < green +1; j++)
        {
                if(i==1 && j==1 || i==0 && j==1 )
                {
                    continue;
                }
                if(i>0)
                {
                    dp[i][j][1] = min(dp[i-1][j][1] + dist(a[i].first,a[i].second,a[i-1].first,a[i-1].second),dp[i-1][j][0] + dist(a[i].first,a[i].second,b[j].first,b[j].second));
                }
                if(j>0)
                {
                    dp[i][j][0] = min(dp[i][j-1][0] + dist(b[j].first,b[j].second,b[j-1].first,b[j-1].second),dp[i][j-1][1] + dist(a[i].first,a[i].second,b[j].first,b[j].second));
                }
            
        }
    }

    return dp[blue][green][1];
}


    //  for (int i = blue; i >= 0; i--)
    // {
    //     for (int j = green; j >=0; j--)
    //     {
    //         for (int bt = 0; bt <= 1; bt++) 
    //         {
    //            cout<<dp[i][j][bt]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }
int main(){
    IOS;
 
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
 
    clock_t startTime=clock();

    
    cin>>k>>l;
    a.resize(k+1);
    b.resize(l+1);
    for(int i=1;i<=k;i++){
        cin>>a[i].first>>a[i].second;
    }
    for(int i=1;i<=l;i++){
        cin>>b[i].first>>b[i].second;
    }

    memset(dp,1e9,sizeof dp);
    cout<<solve(k,l,1);
    
    cerr << endl <<setprecision(20)<< double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;
 
}//Goodbye...















// //AnkitCode99 here....
// //every ups and downs matter!
 
// #include<bits/stdc++.h>
// #define endl "\n"
// #define IOS ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr)
// typedef long long int ll;
// #define rep(i,a,b) for(ll i=a;i<b;i++)
// #define pb push_back
// #define deb(x) cout<<#x<<" - "<<x<<'\n'
 
// using namespace std;
 
// const ll sz=1e5+5;
// const ll szz=1e6+6;
// const ll mod=1e9+7;

// /*
// ball type
// 1 - blue
// 0 - green
// */
// int k,l;
// vector<pair<int,int>> a,b;

// int dist(int x1,int y1,int x2,int y2){
//     return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
// }
// int dp[1001][1001][2];
// int solve(int blue, int green, bool ballType){
    
//     if(blue==k and green==l)
//         return 0;

//     if(blue==k and green<l)
//         return (int)1e9;

//     if(dp[blue][green][ballType]!=-1)
//         return dp[blue][green][ballType];

//     int currX,currY;
//     if(ballType==1){
//         currX = a[blue].first;
//         currY = a[blue].second;
//     }else{
//         currX = b[green].first;
//         currY = b[green].second;
//     }

//     int bluePick = solve(blue+1,green,1) + 
//                     dist(currX,currY,a[blue+1].first,a[blue+1].second);
//     int greenPick = (int)1e9;
//     if(green+1<=l)
//         greenPick = solve(blue,green+1,0) + 
//                         dist(currX,currY,b[green+1].first, b[green+1].second);

//     // cout<<blue<<"  "<<green<<"  "<<ballType<<endl;
//     // cout<<min(bluePick,greenPick)<<endl;
//     return dp[blue][green][ballType] = min(bluePick,greenPick);
// }

// int main(){
//     IOS;
 
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // #endif
 
//     clock_t startTime=clock();

    
//     cin>>k>>l;
//     a.resize(k+1);
//     b.resize(l+1);
//     for(int i=1;i<=k;i++){
//         cin>>a[i].first>>a[i].second;
//     }
//     for(int i=1;i<=l;i++){
//         cin>>b[i].first>>b[i].second;
//     }

//     memset(dp,-1,sizeof dp);
//     cout<<solve(1,0,1);
    
//     cerr << endl <<setprecision(20)<< double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;
 
// }//Goodbye...