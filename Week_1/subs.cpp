#include<bits/stdc++.h>

using namespace std;
int find(char a,string key);
int main()
{
  string a;
  cout<<"Enter key : ";
  cin>>a;
  cout<<"Enter text : ";
  string st;
  getchar();
  getline(cin,st);
  for(int i=0;i<st.length();i++)
   	if(st[i]!=' ')
   		st[i]= a[st[i]-'a'];
  
  cout<<"After encryption : "<< st<<endl;
  
  for(int i=0;i<st.length();i++)
    if(st[i]!=' ')
    	st[i]= find(st[i],a)+'a';
  cout<<"After decryption : "<< st<<endl;
}

int find(char a,string key)
{
	for(int i=0;i<key.length();i++)
	{
		if(key[i]==a) return i;
	}
}
