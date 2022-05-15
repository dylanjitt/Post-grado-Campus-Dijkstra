#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 

//Crea tu propio ejemplo!!
int PostGradoCalleCato=0;
int PostGradoHernandoSiles=0;
int PostGradoOrmachea=0;
int PostGradoCostanerita=0;

int CalleCato17Obrajes=0;
int HernandoSiles17Obrajes=0;
int OrmacheaCostanera=0;
int CostaneritaToCostanera=0;

int Obrajes17PlazaHumboldt=0;
int Costanera17Obrajes=0;
int CostaneraPlazaHumboldt=0;
int CostaneraAmorDeDios=0;
int PlazaHumboldtUPB=0;
int AmorDeDiosUPB=0;


#define V 10

int minDistance(int dist[], bool sptSet[])
{
   
    int min = INT_MAX, min_index;
    for (int i = 0; i < V; i++)
        if (sptSet[i] == false && dist[i] <= min)
            min = dist[i], min_index = i;
    return min_index;
}

void printPath(int parent[], int j)
{
    if (parent[j] == -1)
        return;
    printPath(parent, parent[j]);
    cout << j << " ";
}

int printSolution(int dist[], int n, int parent[]){
    int src = 0;
    
    cout << "Vertice\t Distancia\tPath";
    for (int i = 1; i < V; i++) {
        printf("\n%d -> %d \t\t %d\t\t%d ", src, i, dist[i],
               src);
        printPath(parent, i);
    }
    cout << endl;
    return 0;
}
 

void dijkstra(int graph[V][V], int src)
{
   
    int dist[V];
    bool sptSet[V] = { false };
    int parent[V] = { -1 };
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v]
                && dist[u] + graph[u][v] < dist[v]) {
                parent[v] = u;
                dist[v] = dist[u] + graph[u][v];
            }
    }
    printSolution(dist, V, parent);
}

void printMenu() {
    cout<<"====================================================="<<endl;
    cout<<"                                                     "<<endl;
    cout<<"                                                     "<<endl;
    cout<<"           Post Grado - Campus Dijkstra!!!           "<<endl;
    cout<<"                                                     "<<endl;
    cout<<"                                                     "<<endl;
    cout<<"====================================================="<<endl;
    cout<<"1. El camino mas rapido (default)"<<endl;
    cout<<"2. La costanerita esta bloqueda!!"<<endl;
    cout<<"3. Trancadera en la 17 de obrajes"<<endl;
    cout<<"4. La Hora Pico"<<endl;
    cout<<"5. Crea Tu propio Ejemplo"<<endl;
    cout<<"X. Salir del programa"<<endl;
    cout<<"====================================================="<<endl;
}

void ejemplo1() {
    cout<<"Ejemplo 1: el camino mas rapido!"<<endl;
    int graph[V][V] = { { 0, 1, 1, 3, 5, 0, 0, 0, 0, 0},
                        { 1, 0, 0, 0, 0, 5, 0, 0, 0, 0},
                        { 1, 0, 0, 0, 0,12, 0, 0, 0, 0},
                        { 3, 0, 0, 0, 0, 0, 3, 0, 0, 0},
                        { 5, 0, 0, 0, 0, 0, 2, 0, 0, 0},
                        { 0, 5,12, 0, 0, 0, 2, 8, 0, 0},
                        { 0, 0, 0, 3, 2, 2, 0, 0, 3, 0},
                        { 0, 0, 0, 0, 0, 8, 0, 0, 0,23},
                        { 0, 0, 0, 0, 0, 0, 3, 0, 0,17},
                        { 0, 0, 0, 0, 0, 0, 0,23,17, 0}};
    dijkstra(graph, 0);
    
}

void ejemplo2() {
    cout<<"Ejemplo 2: La costanerita esta bloqueada!!"<<endl;
                        // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9                       
    int grafo2[V][V] = {{ 0, 1, 1, 3, 0, 0, 0, 0, 0, 0},//0
                        { 1, 0, 0, 0, 0, 5, 0, 0, 0, 0},//1
                        { 1, 0, 0, 0, 0,12, 0, 0, 0, 0},//2
                        { 3, 0, 0, 0, 0, 0, 3, 0, 0, 0},//3
                        { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0},//4
                        { 0, 5, 12,0, 0, 0, 2, 8, 0, 0},//5
                        { 0, 0, 0, 3, 2, 2, 0, 0, 3, 0},//6
                        { 0, 0, 0, 0, 0, 8, 0, 0, 0,23},//7
                        { 0, 0, 0, 0, 0, 0, 3, 0, 0,17},//8
                        { 0, 0, 0, 0, 0, 0, 0, 23,17,0} };//9
    dijkstra(grafo2, 0);
}
void ejemplo3() {
    cout<<"Ejemplo 3: Trancadera en la 17 de obrajes"<<endl;
                        // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    int grafo3[V][V] = {{ 0, 1, 1, 3, 5, 0, 0, 0, 0, 0},
                        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        { 3, 0, 0, 0, 0, 0, 3, 0, 0, 0},
                        { 5, 0, 0, 0, 0, 0, 2, 0, 0, 0},
                        { 0, 0, 0, 0, 0, 0,10,20, 0, 0},
                        { 0, 0, 0, 3, 2,10, 0, 0, 3, 0},//*
                        { 0, 0, 0, 0, 0,20, 0, 0, 0,23},
                        { 0, 0, 0, 0, 0, 0, 3, 0, 0,17},
                        { 0, 0, 0, 0, 0, 0, 0, 23,17,0} };
    dijkstra(grafo3, 0);
    
}
void ejemplo4() {
    cout<<"Ejemplo 4: La Hora Pico"<<endl;
    int grafo4[V][V] = { { 0, 1, 1, 3, 5, 0, 0, 0, 0, 0},
                        { 1, 0, 0, 0, 0,15, 0, 0, 0, 0},
                        { 1, 0, 0, 0, 0,20, 0, 0, 0, 0},
                        { 3, 0, 0, 0, 0, 0,20, 0, 0, 0},
                        { 5, 0, 0, 0, 0, 0,15, 0, 0, 0},
                        { 0,15,20, 0, 0, 0,10,20, 0, 0},
                        { 0, 0, 0,20,15,10, 0, 0,10, 0},
                        { 0, 0, 0, 0, 0,20, 0, 0, 0,35},
                        { 0, 0, 0, 0, 0, 0,10, 0, 0,30},
                        { 0, 0, 0, 0, 0, 0, 0,35,30, 0}};
    dijkstra(grafo4, 0);
}
void ejemploPropio() {
    cout<<"Imprimiendo el propio Ejemplo"<<endl;
    int graph[V][V] = { { 0,PostGradoCalleCato, PostGradoHernandoSiles, PostGradoOrmachea, PostGradoCostanerita, 0, 0, 0, 0, 0},
                        { PostGradoCalleCato,0,0, 0, 0, CalleCato17Obrajes, 0, 0, 0, 0},
                        { PostGradoHernandoSiles, 0, 0, 0, 0,HernandoSiles17Obrajes, 0, 0, 0, 0},
                        { PostGradoOrmachea, 0, 0, 0, 0, 0, OrmacheaCostanera, 0, 0, 0},
                        { PostGradoCostanerita, 0, 0, 0, 0, 0, CostaneritaToCostanera, 0, 0, 0},
                        { 0, CalleCato17Obrajes,HernandoSiles17Obrajes, 0, 0, 0, Costanera17Obrajes, Obrajes17PlazaHumboldt, 0, 0},
                        { 0, 0, 0, OrmacheaCostanera, CostaneritaToCostanera, Costanera17Obrajes, 0, CostaneraPlazaHumboldt, CostaneraAmorDeDios, 0},
                        { 0, 0, 0, 0, 0, Obrajes17PlazaHumboldt, CostaneraPlazaHumboldt, 0, 0,PlazaHumboldtUPB},
                        { 0, 0, 0, 0, 0, 0, CostaneraAmorDeDios, 0, 0,AmorDeDiosUPB},
                        { 0, 0, 0, 0, 0, 0, 0,PlazaHumboldtUPB,AmorDeDiosUPB, 0}};
    dijkstra(graph, 0);
}
void salir() {
    cout<<"Gracias por utilizar el algoritmo Post Grado-Campus Dijkstra, hasta la proxima :D"<<endl;
}

int main() {
    input;
    //output;
    int option; 
    cin>>option;
    printMenu();
    do{
        switch(option) {
        case 1:
            ejemplo1();
            break;
        case 2:
            ejemplo2();
            break;
        case 3:
            ejemplo3();
            break;
        case 4:
            ejemplo4();
            break;
        case 5:
            ejemploPropio();
            break;
        default:
            cout<<"Inserte una opcion en in.txt"<<endl;
        }
        cout<<"====================================================="<<endl;
        //printMenu();
    }while(cin>>option && option);
    salir();

}
