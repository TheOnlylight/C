#include<iostream>
#include<cstring>
using namespace std;

int father[5001];
int main(){
	char a;
	cin>>a;
	while(1){
		if(a=='#'){
			
		}
	}
}
int find(int x){
if(father[x]!=x)
father[x]=find(father[x]);
/*
x代表例题中的人，father[x]中所存的数代表这一集合中所有人都与一个人有亲戚关系
相当于例题中第一个集合所有的元素都与第一个元素有亲戚关系
搜索时只要找元素所指向的father[x]=x的元素(即父元素)
然后比较两个元素的父元素是否相同就可以判断其关系
*/
return father[x];
}
int merge[i](int x){
	
}
