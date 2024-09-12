#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isVowel(char ch)
{
	ch = tolower(ch);
	if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u')
	{
		return true;
	}
	else return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	getline(cin,s);
	int cnt=0;
	for(int i=0; i<s.size(); i++)
	{
		cnt+= isVowel(s[i]);
	}
	cout<<cnt<<endl;
	return 0;
}