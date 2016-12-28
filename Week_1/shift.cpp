#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cout<<"enter shift for cipher: ";
	cin>>a;
	cout<<"enter text: ";
	string st;
	cin>>st;
	for(int i=0;i<st.length();i++)
		st[i]=(st[i]+a-'a')%26+'a';
	cout<<"After encryption : " <<st<<endl;
	for(int i=0;i<st.length();i++)
		st[i]=(st[i]-a+26-'a')%26+'a';
	cout<<"After decryption : " <<st;
	cout<<endl;
	return 0;
}
