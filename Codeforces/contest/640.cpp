
/*#include<bits/stdc++.h>
using namespace std;
using lli = long long int;
using ld = long double;
using ulli = unsigned long long int;
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(args...) do {cerr << #args << " : "; debug(args); } while(0)
#define all(v) ((v).begin()),((v).end())
#define pb emplace_back
#define mp make_pair
#define PI 3.14159265
#define mod 1000000007
void debug () {cerr << endl;}
template < typename T, typename ... hello>void debug( T arg, const hello &... rest) {cerr << arg << ' ';debug(rest...);}
int dx[8]= {1,0,-1,0,-1,-1,1,1};
int dy[8]= {0,1,0,-1,-1,1,-1,1};
bool isOk(string s){
	for(int i = 1;i<(int) s.size();i++){
		if(s[i] != '0'){
			return false;
		}
	}
	return true;
}
void solve(){
	string s;
	cin>>s;
	if(isOk(s)){
		cout<<1<<"\n"<<s;
	}else{
		vector<string> res;
		for(int i = 0;i<(int) s.size();i++){
			if(s[i] == '0'){
				continue;
			}
			string temp;
			for(int j = i;j<(int) s.size();j++){
				if(i == j){
					temp += s[i];
				}else{
					temp += '0';
				}
			}
			res.pb(temp);
		}
		cout<<res.size()<<"\n";
		for(int i = 0;i<(int) res.size();i++){
			cout<<res[i]<<" ";
		}
	}
	cout<<"\n";
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
		solve();
	}
}*/

/*#include<bits/stdc++.h>
#define l(i,a,n)for(int i=a;i<n;i++)
#define PB push_back
#define IN insert
#define MP make_pair
#define LW(v) sort(v.begin(),v.end());
#define HI(v) sort(v.begin(),v.end(),greater<long long>());
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,r=1,r1=0,r2=0,k=0,a=0,b=0,c=0,m,d=0,n,e,f,x=0,g,p=0,q=0,y=0,z=0;
    //vector<long long>v;
    vector<long long>u;
    set<long long>s;
    std::vector<int>::iterator it;
    string  s1,s2,s3,s4;
  cin>>t;
  while(t--)
  {
      vector<long long>v;
      cin>>n;
      a=n%10;
      n=n-a;
      b=n%100;
      n=n-b;
      c=n%1000;
      n=n-c;
if(a>0){v.PB(a);}
if(b>0){v.PB(b);}
if(c>0){v.PB(c);}
cout<<v.size()+1<<endl;
for(auto x:v)
{
    cout<<x<<" ";
    d=d+x;
}
cout<<n<<endl;
  }cout<<endl;
}*/
/*
START BY THE NAME OF ALMIGHTY ALLAH
THIS WONT BE ACCEPTED
STOP_GIVING_UP
*/
#include<bits/stdc++.h>
#define l(i,a,n)for(int i=a;i<n;i++)
#define PB push_back
#define IN insert
#define MP make_pair
#define LW(v) sort(v.begin(),v.end());
#define HI(v) sort(v.begin(),v.end(),greater<long long>());
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,r=1,r1=0,r2=0,k=0,a=0,b=0,c=0,m,d=0,n,e,f,x=0,g,p=0,q=0,y=0,z=0;

    string  s1,s2,s3,s4;
    cin>>t;
    while(t--)
    {
        vector<long long>v;
        cin>>n;
        if(n<=10)
        {
            cout<<1<<endl<<n<<endl;
        }
        else
        {
            a=n%10;
            n=n-a;
            b=n%100;
            n=n-b;
            c=n%1000;
            n=n-c;
            if(a>0)
            {
                v.PB(a);
            }
            if(b>0)
            {
                v.PB(b);
            }
            if(c>0)
            {
                v.PB(c);
            }
            if(n>0)
            {
                v.PB(n);
            }
            cout<<v.size()<<endl;
            for(auto x:v)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}
