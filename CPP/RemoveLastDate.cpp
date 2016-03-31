#include <bits/stdc++.h>
using namespace std;
int main (int argc, char const* argv[])
{
	string s;
	while(getline(cin,s))
	{
		istringstream ss(s);
		string x,y,z;
		int a=0;
		while(ss>>x)
		{
			//cerr<<"Here "<<x<<'\n';
			if(a)y+=z;
			else a=1;
			z=x+" ";
		}
		for (int t= 0; t < y.size(); t += 1)
		{
			if(y[t]!='"'&&y[t]!='\'')cout<<y[t];
		}
		cout<<'\n';
	}
	return 0;
}
