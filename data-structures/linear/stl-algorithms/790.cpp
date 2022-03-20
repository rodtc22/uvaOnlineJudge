#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const		int 			N = 1e4+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

typedef pair<pair<int,char>,pair<int,char>> data;
typedef pair<ii,int> solve;

/*team,problem,time,stat
solved, time, team*/

void solver(){
	int tea,minu,ho,equi=0;
	char pro,ans;

	vector<data> a;
	char buffer[100];
	getchar();
	//va a ser como su homonino del getline()
	while(scanf("%[^\n]%*c",buffer)==1){
		sscanf(buffer,"%d %c %d:%d %c",&tea,&pro,&ho,&minu,&ans);
		minu += (ho*60);
		a.push_back({{tea,pro},{minu,ans}});
		equi = max(equi,tea);
	}
	sort(a.begin(),a.end());
	a.push_back({{49,'A'},{0,'A'}});
	// for(auto x:a) printf("%d %c %d %c\n",x.first.first,x.first.second,x.second.first,x.second.second);	
	// 	cout<<endl;

	vector<solve> b;
	vector<bool> equipo(equi+1,1);
	int solved = 0,total = 0;
	int ant = 0;
	int problem[50]={};

	for(data x:a){
		tea = x.first.first;
		pro = x.first.second;
		minu = x.second.first;
		ans = x.second.second;

		if(tea != ant && ant > 0){
			b.push_back({{-solved,total},ant});
			equipo[ant] = 0;
			memset(problem,0,sizeof problem);
			total = 0,solved = 0;
		}

		ant = tea;
		if(problem[pro-'A'] == -1) 	{continue;}
		if(ans == 'N') {problem[pro-'A']+=20; continue;}
		total += (minu+problem[pro-'A']);
		problem[pro-'A'] = -1;
		solved++;

		// printf("%d %c %d %c\n",x.first.first,x.first.second,x.second.first,x.second.second);	
	}

	for(int i= 1 ;i<= equi ;i++)
		if(equipo[i])
			b.push_back({{0,0},i});

	sort(ALL(b));

	printf("RANK TEAM PRO/SOLVED TIME\n");
	int pos = 1;
	int cont = 1;
	auto y = b[0];
	for(auto x : b){
		int nro =cont;
		if(cont > 1){
			if(y.first.first == x.first.first && x.first.second == y.first.second)
				nro = pos;
		}
		pos = max(pos,nro);
		if(x.first.first!=0)
			printf("%4d%5d%5d%11d\n",nro,x.second,-x.first.first,x.first.second);		
		else
			printf("%4d%5d\n",nro,x.second);		
		y = x;
		cont++;
	}
}

int main(){
	int cases ;
	scanf("%d",&cases);
	getchar();
	int i= 0;
	while(cases--){
		if(i++ >0) printf("\n");
		solver();
	}

	// for(auto d:b) cout<<d.first.first<<" "<<d.first.second<<" "<<d.second<<endl;

	return 0;
}