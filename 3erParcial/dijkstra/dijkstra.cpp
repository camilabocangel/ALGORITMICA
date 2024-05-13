#include<bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout) 
using namespace std;
pair<int, int> arista; //lista de adyacencia para el grafo (peso, nodo)
vector<pair<int>> grafo[10]; //nuestro grafo es un par de enteros
//ahora es una lista de pares ordenados
// el primer valor representa el peso y el segundo valor el nodo 
//Ej: del N1-N2 con peso 5 -> grafo[1].push_back(<5,2>)
typeder pair<int, int>pii;
const in INF = numeric_limits<int>::max(); //quiero su valor maximo 
VOID DIJKSTRA (int start, vector<vector<pii>>& adj, vector<int>&dist){
    //para que sea dinamico, creo el 
    //vector aqui y tambien abajo
    //creamos la cola, va a tener un vector de pares ordenados de mayor a menor:
    priority_queue<pii, vector<pii>, greater<pii>>pq;
    
} 

//meto el primer elemeno. estas ultimas dos lineas son mi cola inicial
while (!pq.empty()){
    int curren_node = pq.top(), second; 
    int curren_distance
}
pq.pop
//cuanto me ha costado llegar . si la que saco es mas grande no me sirve 
if
//si es que es mas pequenio voy a visitar a los nodos 
for 
//mi nueva distancia va a ser la actual mas el peso 
int 
// relajacion 
//
int main(){
    input;
    int nroNodos, nroAristas; 
    cin>>nroNodos>>nroAristas;
    vector<int>dist[nroNodos, INF];
    for (int i=0; i<nroAristas; i++){
        int nodoInicio, nodoFinal, peso; 
        cin>>nodoInicio>>nodoFinal>>peso;//cada vez que leo una arista leo esto
        grafo[nodoInicio].push_back(make_pair(peso, nodoFinal)); //es como crear una arista que 
        //a la izq quiero que tenga el peso y a la derecha el nodo padre y hago push back que se va al nodo 0 (0 en el caso del ejemplo)    
    }
    for(int i=0; i<nroNodos; i++){
        cout<<"["<<i<<"]"
        for(int j=0; j<grafo[i].size; j++){
            cout<<"("<<grafo[i][j].first<<","<<grafo[i][j].second<<")";
        }
        cout<<endl;
    }
}
