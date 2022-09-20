#include<bits/stdc++.h> 
using namespace std;
template <typename T>

// Generic class for all data types
class graph{

    public:

        unordered_map<T, list<T>> adj;

        void addEdge(int u, int v, bool direction){

            // directed graph direction == 1
            // undirected graph direcion == 0

            adj[u].push_back(v);

            if(direction == 0){

                adj[v].push_back(u);
            }

        }

        void printAdjList(){

            for(auto i : adj){

                cout << i.first <<"-> ";

                for(auto j : i.second){

                    cout << j <<", ";
                }

                cout << endl;
            }
        }

};

int main(){
   
   int n;
   cout <<"Enter the number of nodes" << endl;
   cin >> n;

   int m;
   cout <<"Enter the number of edge" << endl;
   cin >> m;

   graph<int> g;

   for(int i = 0; i < m; i++){

      int u,v;
      cout <<"Enter the edges"<< endl;
      cin >> u >> v;

      bool direction;
      cout <<"Enter the direction" << endl;
      cin>> direction;
      
      g.addEdge(u, v, direction);

   }

   g.printAdjList();

}