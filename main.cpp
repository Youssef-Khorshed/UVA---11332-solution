#include<bits/stdc++.h>
using namespace std;
bool visited[100010] ={false};
map<int,vector<int>>vi;
int n,m,target = 5;
vector<vector<int>>arr(n+3,vector<int>(m+3));



void dfs(int node)
{
    visited[node] = true;

    for(int child : vi[node])
    {
        if(!visited[child])
        {
            dfs(child);
        }
    }

}



int gcd(int a  ,int  b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}

bool check(int r,int c)
{
    return r>=0 && c>=0 && r<=1 && c<=1;
}
int rec(int num)
{
 if(num<10){return num ;}
  return num%10+rec(num/10);
}
void print()
{

while(cin>>n && n!=0)
{
 while(n>=10){
    n = rec(n);
 }

cout<<n<<endl;
}
}


/*
3 3
1 2 3
4 5 6
7 8 9
*/




int main () {

 ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    print();




    return 0;
}

/*
3 3
 1 2 3
 4 5 6
 7 8 9
*/
