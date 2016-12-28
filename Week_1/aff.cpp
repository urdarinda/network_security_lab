#include<bits/stdc++.h>
int inverse(int);
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter a and b : ";
  cin>>a>>b;
  cout<<"Enter text : ";
  string st;
  cin>>st;
  for(int i=0;i<st.length();i++)
   	st[i]=( a* (st[i]-'a') + b ) %26 + 'a';
  
  cout<<"After encryption : "<< st<<endl;
  
  for(int i=0;i<st.length();i++)
    st[i]= inverse(a)*( st[i]-'a' -b +26) %26 +'a';
  cout<<st;
}

int inverse(int a)
{
	for(int i=0;i<100;i++)
	{
		if((a*i)%26==1) return i;
	}
}
