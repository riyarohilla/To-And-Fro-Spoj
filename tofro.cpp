#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code here
	int col;
	cin>>col;
	
	
	while(col)
	{
		char str[199];
		cin>>str;
		int row=strlen(str)/col;
		char m[row][col];
		int k=0;
		for(int i=0;i<row;i++)
		{
			if(i%2==0)
			{
				for(int j=0;j<col;j++)
				m[i][j]=str[k++];
			}
			else
			{
				for(int j=col-1;j>=0;j--)
				m[i][j]=str[k++];
			}
		}
		for(int i=0;i<col;i++)
		{
			for(int j=0;j<row;j++)
			{
				cout<<m[j][i];
			}
		
		}
			cout<<endl;
			cin>>col;
	}

	return 0;
}
