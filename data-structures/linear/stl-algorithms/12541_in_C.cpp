#include <bits/stdc++.h>
using namespace std;

//-------------------------------------------------------------------
#define		PRINT(x)		{for(auto d:x) cout<<d<<" ";cout<<endl;}
#define		INDEX(n)		{for(int i= 1 ;i<=n ;i++) cout<<i<<" ";cout<<endl;}
#define		ALL(x)			x.begin(),x.end() 
typedef		long long 		ll;
typedef		pair<int,int>	ii;
const 		int  			oo =1e9;
const		int 			N = 5e5+4;
const		int 			M = 1e9+7;
//-------------------------------------------------------------------

typedef pair<int,string> is;
typedef pair<ii,is> people;

int main(){

	int n; scanf("%d",&n);
	vector<people>ar(n);
	char buffer[30]; //sera suficiente con 30 caracteres reservados
	
	getchar(); // es para leer el buffer como getline

	//scanf("%s",buffer); 		lee hasta que encuentra un espacio o salto de linea
	//scanf("%[^\n]",buffer);	lee la linea completa, pero sigue dejando caracter \n, y no sirve
	//scanf("%[^\n]%*c",buffer);lee la linea completa, y %*c lee el caracter \n, pero lo hace perder aproposito
	
	//strlen(cad)   -> equivalente cad.size() , pero O(n) de complejidad
	for(int i= 0 ;i< n;i++){
		scanf("%[^\n]%*c",buffer);

		char name[15];
		int &dia = ar[i].second.first;
		int &mes  = ar[i].first.second;
		int &anio = ar[i].first.first;
		sscanf(buffer,"%s %d %d %d",name,&dia,&mes,&anio);
		ar[i].second.second = name;

	}
	sort(ar.rbegin(),ar.rend());
	
	char a[15],b[15];
	strcpy(a,ar[0].second.second.c_str());
	strcpy(b,ar[n-1].second.second.c_str());

	printf("%s\n%s\n",a,b);
	return 0;
}