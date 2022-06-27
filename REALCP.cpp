/*NAME REDUCTION*/
/*PROBLEM CODE:NAME1*/
/*
Input
3--->no of testcases
tom marvoloriddle ---->parents name
2---->n followed by child names
lord
voldemort
cheap up
1
heapcup
bruce wayne
2
bat
man
Output
YES
YES
NO*/

#include<bits/stdc++.h>
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define irep(i,a,b) for(ll i=b-1;i>=a;i--)
#define PB push_back
#define F first 
#define S second
#define endl "\n"
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
const int power=1e9+7;
int sub_string(string s1,string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
void solve()
{
	ll count[26]{0};
  string a,b;
  cin>>a>>b;
  string con_name=a+b;
  rep(i,0,con_name.length())
  {
      count[con_name[i]-97]++;
  }
  ll n;cin>>n;
  bool flag=true;
  string child_name="";
  rep(i,0,n){
     string s;
	 cin>>s;
	 rep(i,0,s.length())
	 {
     if(count[s[i]-97]>0)
        count[s[i]-97]--;
	  else
	  {
		flag=false;
	  }
	  }
  }
if(flag)
cout<<"YES\n";
else
cout<<"NO\n";
}
int main()
{
	fastIO();
	/*#ifndef ONLINE_JUDGE
	       freopen("D:\\Competitive Coding\\realcp\\input.txt","r",stdin);
		   freopen("D:\\Competitive Coding\\realcp\\output.txt","w",stdout);
	#endif*/
	ll t=1;
	cin>>t;
	while(t--)
    solve();
	return 0;
}

