#include <iostream>
#include <cstring>
#include <string>
using namespace std;
char c;
string s,name[50001];
int n,father[50001];
void init()
{
    for(int i=1;i<=50000;i++)
      father[i]=i;
}
int getfather(int x)
{
    if(father[x]==x)
      return x;
    else
      return father[x]=getfather(father[x]);
}
void merge(int x,int y)
{
    father[getfather(x)]=getfather(y);
}
int main()
{
    int i;
    init();
    cin>>c;
    while(c!='$')
    {
        if(c=='#')
        {
            cin>>s;
            for(i=1;i<=n;i++){
              if(name[i]==s)
                break;
            }
            if(i>n)
            {n++;name[n]=s;}
            int x1=i;
            cin>>c;
            while(c=='+')
            {
                cin>>s;
                for(i=1;i<=n;i++){
                  if(name[i]==s)
                    break;
                }
                if(i>n)
                {n++;name[n]=s;}
                int x2=i;
                merge(x2,x1);
                cin>>c;
            }
        }
        if(c=='?')
        {
            cin>>s;
            cout<<s<<' ';
            for(i=1;i<=n;i++){
              if(name[i]==s)
                break;
            }
            cout<<name[getfather(i)]<<endl;
            cin>>c;
        }
    }
}
