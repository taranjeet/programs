#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%4==1)
			printf("ALICE\n");
		else
			printf("BOB\n");
	}
	return 0;
}