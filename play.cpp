#include<bits/stdc++.h>
using namespace std;

int main()
{
	string me,key;
	cout<<"Enter message : ";
	cin>>me;
	//string str=me;
	//remove_if(str.begin(), str.end(), isspace);
	//me.erase(remove_if(me.begin(), me.end(), isspace), me.end());
	cout<<"Enter key : ";
	cin>>key;
	char table[5][5]={0};
	char fi='a';
	int k=0;
	int h[26]={0};
	int x=0,y=0;
	for(char c:key)
	{
		if(!h[c-'a'])
		{
			if(c=='i') h['j'-'a']=1;
			if(c=='j') h['i'-'a']=1;
			h[c-'a']=1;
			table[x][y++]=c;
			if(y>=5){y=0;x++;}
		}
	}

	
		while(1)
		{
			if(!h[fi-'a'])
			{
				//cout<<x<<y<<endl;
				h[fi-'a']=1;
				if(fi=='i') h['j'-'a']=1;
				if(fi=='j') h['i'-'a']=1;
				table[x][y++]=fi;
				if(y>=5){y=0;x++;}
				
			}
			fi++;
			//cout<<fi;
			if(x==5) break;
		}
		
	

	for(int i=0;i<5;i++) {
	for(int j=0;j<5;j++) 
		cout<<table[i][j];
	cout<<endl;
	}
	
//////////////////////////////////////////////////////////////////////

	vector<string> lis,lisc,lisd;
	for(int i=0;i<me.length();i++)
	{
		string temp;
				
		temp+=me[i++];
		if(i>=me.length()) temp+='x';
		else if(me[i]!=temp[0]) temp+=me[i];
		else { temp+='x'; i--;}
		lis.push_back(temp);
			
	}
	//for(string a :lis) cout<<a<<" ";
//////////////////////////////////////////////////////////////////////
	for(string a:lis)
	{
		int x1=0,y1=0,x2=0,y2=0;
		string lisb;
		for(int i=0;i<5;i++) 
		for(int j=0;j<5;j++) 
			{
				if(table[i][j]==a[0])x1=i,y1=j ;
				if(table[i][j]==a[1])x2=i,y2=j ;
			}
		if(x1==x2) {
			lisb+=table[x1][(y1+1)%5];
			lisb+=table[x1][(y2+1)%5];	
		}
		else if(y1==y2) {
			lisb+=table[(x1+1)%5][y1];
			lisb+=table[(x2+1)%5][y2];	
		}
		else{
			lisb+=table[x1][y2];
			lisb+=table[x2][y1];	
		}
		lisc.push_back(lisb);
		
	}
	for(string a :lisc) cout<<a<<" ";
	cout<<endl;
//////////////////////////////////////////////////////////////////////
	for(string a:lisc)
	{
		int x1=0,y1=0,x2=0,y2=0;
		string lisb;
		for(int i=0;i<5;i++) 
		for(int j=0;j<5;j++) 
			{
				if(table[i][j]==a[0])x1=i,y1=j ;
				if(table[i][j]==a[1])x2=i,y2=j ;
			}
		if(x1==x2) {
			lisb+=table[x1][(y1-1+5)%5];
			lisb+=table[x1][(y2-1+5)%5];	
		}
		else if(y1==y2) {
			lisb+=table[(x1-1+5)%5][y1];
			lisb+=table[(x2-1+5)%5][y2];	
		}
		else{
			lisb+=table[x1][y2];
			lisb+=table[x2][y1];	
		}
		lisd.push_back(lisb);
		
	}
	for(string a :lisd) cout<<a<<" ";
	cout<<endl;
///////////////////////////////////////////////////////////////////
}

