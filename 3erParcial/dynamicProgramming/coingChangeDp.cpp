#include<bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout) 
using namespace std;
//FORMA dinamica
int coins[3] = {2, 3, 5};
int dp[10000]//1.creamos ese array
int f(int n){
    if(n==0){
        return 1;
    }
    if (n<0){
        return 0;
    }
//alguna vez hemos calculado el valor de f(m)? Para eso hacemos el paso 2 
    if(dp(n)==-1){ //2. todos los valores en ese array que hemos creado estan con -1
        int ans =0; 
        for (int i=0; i<3; i++){
        ans += f(n - coins[i]); //cuantas posibles soluciones hay si resto una moneda 
      }
      dp[n] = ans; //la respueseta la vas a guardar en 15
    }
    
    return dp[n];
}

//bottom up 
int dp2[4][1000]; //ya no es un array, es una matriz 
int f2(int n){
    dp2
    for (int i=0; i<=3; i++){
        dp2 // para la primera columna siempre habra solucion
        for (){ // 1--> 15
          dp2 //pone el valor de lo que esta arriba 
          if (j-coins[i-1]>=0){
            dp2[i][j] += dp2
          }
        }
    } 
       
}



int main(){
    int n = 15; 
    cout<<(n)<<endl;
}
