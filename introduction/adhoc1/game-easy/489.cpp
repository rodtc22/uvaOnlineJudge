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

int main(){
	int cases,cont = 1;
	string word,guess;
	while(cin>>cases ,cases!=-1){
		cin>>word>>guess;
		cout<<"Round "<< cases<<'\n';
		//tendremos un conjunto de bits almacenado en un entero
		int w = 0, g = 0; //word,guess
		int wrong = 0;
		int n = word.size(),m = guess.size();
		for(int i= 0 ;i< n ;i++)
			w = w | (1<<(word[i]-'a'));
		int cont = 0 ;
		for(int i= 0 ;i< m ;i++){
			if(!(w&(1<<(guess[i]-'a')))){
				if(!(wrong & (1<<(guess[i]-'a'))))cont++;
				wrong = wrong | (1<<(guess[i]-'a'));
			}else 
				g = g | (1<<(guess[i]-'a'));
			if(w==g and cont<7) break;	
		}
		if(cont<7){
			if(w==g) cout<<"You win.\n";
			else cout<<"You chickened out.\n";
		}else{
			cout<<"You lose.\n";
		}
	 }
	return 0;
}