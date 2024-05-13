#include<bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout) 
using namespace std;
//FORMA RECURSIVA
int coins[3] = {2, 3, 5};
int f(int n){
    if(n==0){
        return 1;
    }
    if (n<0){
        return 0;
    }
    int ans =0; 
    for (int i=0; i<3; i++){
        ans += f(n - coins[i]);
    }
    return ans;
}
int main(){
    int n = 15; 
    cout<<(n)<<endl;
}
