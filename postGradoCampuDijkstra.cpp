#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
#define INF 100000010 // 1e9 
using namespace std;
// Pair Dist, vertice // la distancia primero porque necesitamos ordenar de acuerdo a la distancia
vector<pair<int, int> > grafo[100000];
int visitados[100000]; 
int distancia[100000];

void dijkstra(int verticeInicial)
{
    // memset(distancia, INF, sizeof(distancia)); // -1 0 1
    for(int i = 0; i < 100000; i++)
        distancia[i] = INF;
    // Todos los nodos como no visitado
    memset(visitados, 0, sizeof(visitados));
   // cola de prioridad priority_queue <pair<int, int>, greater<> > cola;
   // va ordenar de mayor a menor 
    multiset<pair<int, int> > colaPrioridad; // log(n)sk
    distancia[verticeInicial] = 0;
    colaPrioridad.insert(make_pair(0, verticeInicial));
    while (!colaPrioridad.empty())
    {
        pair<int, int> verticeActual = *colaPrioridad.begin();
        colaPrioridad.erase(colaPrioridad.begin()); // pop()
        int vertice = verticeActual.second; // el nodo de donde se esta viniendo
        int peso = verticeActual.first; // distancia 
        if (!visitados[vertice])
        {
            visitados[vertice] = true;
            for (int i = 0; i < grafo[vertice].size(); i++)
            {
                int verticeVecino = grafo[vertice][i].second;
                int pesoVecino = grafo[vertice][i].first;
                //    inf  >                    0 + 60
                // Relajacion 
                if (distancia[verticeVecino]> distancia[vertice] + pesoVecino )
                {
                    distancia[verticeVecino] = distancia[vertice] + pesoVecino;
                    colaPrioridad.insert(make_pair(distancia[verticeVecino], verticeVecino));
                }
            }
        }
    }
}

int main(){
    
}