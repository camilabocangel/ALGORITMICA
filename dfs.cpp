#include <iostream>
#include <vector>
using namespace std;

bool vis[10000];
vector<int> grafo[nodos]; //creando el grafo que va desde 0 a 9999 y cada uno de esos tiene un vector que esta vacio
//y que se llena cuando hacemos el push_back. Por ejemplo si mi nodo 10 tiene como amigo al 9 y 8 tendria 
//10 -> 9 -> 8

void dfs(int nodoInicial){
	stack<int> pilita;
	pilita.push(nodoInicial)
	while(!pilita.empty()) { //la pila no está vacia
	int nodoActual = pilita.top(); //obtener el primer elemento de la pila 
	pilita.pop(); //lo saco
	
	if (!vis[nodoActual]){ //sui no ha sido visitado entonces no con el negtivo se vuelve si y hago que sea visitado
		vis[nodoActual] = true; //marco como visitado al nodo actual 
	//empezar a visitar a sus amigos
	for(int i =0; i<grafo[nodoActual].size(); i++){
		int amigo = grafo[nodoActual][i]; //vecino o amigo
		if(!vis[amigo]){
			pilita.push(amigo); //si no ha sido visitado, a la pilita le vamos a poner el amigo
		}
	}
	}
	
}

int main(){
	int nodos, aristas; 
	cin>>nodos>>aristas;
	for(int i=0; i<aristas; i++){ //estoy leyendo cada una de las aristas, las 19 (de la foto de telegram)
		int nodoInicial, nodoFinal;
		cin>>nodoInicial>>nodoFinal;
		grafo[nodoInicial].push_back(nodoFinal);
	}
	//si el nodo S puede llegar al nodo T
	int S,T;
	cin>>S>>T
	dfs(S);
	if(vis[T]){ //en algun rato del recorrido he logrado visitar el 7? Si es que si, entonces pongo que si se ;podria conocer y que si se lo puede visitar
		cout<<"Si los podría conocer"<<endl;
	} else {
		cout<<"No lo podría conocer"<<endl;
	}
	return 0;
}