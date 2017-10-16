#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int d[1<<19][19], extra[19][19], a[19],x,y,c,answer=0,n,m,k;
int main()
{
	cin>>n>>m>>k;
	for (int i=1; i<=n; i++)
	{
		cin>>a[i];
		d[1<<(1-i)][i]=a[i];
	}
	for (int i=1; i<=k; i++)
	{
		cin>>x>>y>>c;
		extra[x][y]=c;
	}
	for (int mask=1; mask<=(1<<n); mask++)
	{
		for (int i=1; i<=n; i++)
		{
			for (int j=1; j<=n; j++)
			{
				if ((mask&(1<<(i-1)))==0 && (mask&(1<<(j-1))>0))
				{
					
					d[mask+(1<<(i-1))][i]=max(d[mask+(1<<(i-1))][i],d[mask][j]+a[i]+extra[j][i]);
				}
			}
		}
	}
	for (int mask=1; mask<=(1<<n); mask++)
		{
			for (int i=1; i<=n; i++)
			{
				if (__builtin_popcount(mask)==m)
				{
					answer=max(answer,d[mask][i]);
				}
			}
		}
		cout<<answer;
	return 0;
}
