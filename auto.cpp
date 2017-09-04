#include<bits/stdc++.h>
using namespace std;
int main()
{
	string me,key;
	cout<<"Enter message : ";
	getline(cin,me);
	cout<<"Enter key : ";
	getline(cin,key);
	string tkey=key+me.substr(0,me.length()-key.length());
	cout<<tkey<<endl;
	string cipher;
	for(int i=0;i<me.length();i++)
	{
		int c=me[i];
		if(isalpha(me[i]))
			c=(me[i]-'a'+tkey[i]-'a')%26+'a';
		
		cipher+=(char)c;
	}
	cout<<"Encrypted :"<< cipher<<endl;
	string plain;
	for(int i=0;i<me.length();i++)
	{
		int c=cipher[i];
		if(isalpha(me[i])){
		 c=(+cipher[i]-key[i]+260)%26+'a';
		
		key+=(char)c;}
		plain+=(char)c;
		
		
	}
	cout<<"Decrypted :"<< plain<<endl;
}

