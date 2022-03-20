#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		print(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		index(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		all(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

map<char,char> ma;

void init(){
	ma['E']='3'; ma['3']='E';
	ma['S']='2'; ma['2']='S';
	ma['Z']='5'; ma['5']='Z';
	ma['J']='L'; ma['L']='J';
	ma['A']='A'; ma['H']='H';
	ma['I']='I'; ma['M']='M';
	ma['O']='O'; ma['T']='T';
	ma['U']='U'; ma['V']='V';
	ma['W']='W'; ma['X']='X';
	ma['Y']='Y'; ma['8']='8';
	ma['1']='1';
}

void ans(int x,string s){
	cout<<s<<" --";
	if(x == 0) cout<<" is not a palindrome.\n";
	else if(x==1) cout<<" is a regular palindrome.\n";
	else if(x==2)  cout<<" is a mirrored string.\n";
	else cout<<" is a mirrored palindrome.\n";
	cout<<'\n';
}

int isPalin(string s){
	int n= s.size();
	for(int i= 0 ;i< (n>>1);i++)
		if(s[i]!=s[n-1-i])
			return 0;
	return 1;
}

int isMirro(string s){
	int n= s.size();
	for(int i= 0 ;i<=(n>>1);i++)
		if(!(ma.count(s[i])>0 and
					ma[s[i]]==s[n-i-1] and ma[s[n-i-1]]==s[i]))
			return 0;
	return 2;
}

int main(){
	init();
	string s;
	while(cin>>s){
		int op = isPalin(s)+isMirro(s);
		ans(op,s);
	}
	return 0;
}