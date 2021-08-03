#include<bits/stdc++.h>
using namespace std;

int n;


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




int main () {

 ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    print();




    return 0;
}


