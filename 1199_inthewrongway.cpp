#include<iostream>
#include<cstring>
using namespace std;

int father[5001];
int main(){
	char a[5001];
	string name[5001];
	int index=1;
	while(1){
		cin>>char[index]>>string[index];
		if(char[index]=="$"){
			break;
		}
		index++;
	}
	for(int i=1;i<=index;i++){
		if (char[i]=="#")
			father[i]=i;
		else if (char[i]=="+")
			int q=i-1;
			while(i){
				if(char[q]=='#')
					break;
				q--;
			}
			father[i]=q;
	}
	
}
