#include<bits/stdc++.h>
using namespace std;
 
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void print(T t, V... v) {_print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
void google(int t) {cout << "Case #" << t << ": ";}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
 
#define int             long long
#define all(x)          (x).begin(),(x).end()
#define pb              push_back
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define rep(i,a,b)      for(int i=a;i<b;i++)
#define ff              first
#define ss              second
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<String>
#define mii             map<int,int>
#define umii            unordered_map<int,int>
#define pqi             priority_queue<int>
#define pqd             priority_queue<int,vi,greater<int> >
#define mod             1000000007
#define inf             1e18
#define en              "\n"
#define sp              " "
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define ps(x,y)         fixed<<setprecision(y)<<x
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());


// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

# define int long long

int32_t main()  
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    // int n;
    // vector<int> q;
    // q.push_back(3);
    // c
    // q.pop();


    int n, xi, yi, zi;
    cin>>n;
    int arr[n][3];
    int x = 0, y = 0, z = 0;

    for(int i = 0 ; i < n ; i++) {
        cin >> xi >> yi >> zi;
        x+=xi;
        y+=yi;
        z+=zi;
    }

    if(x==0 && y==0 && z==0)
        cout<<"YES";
    else cout<<"NO";

    return 0;
}