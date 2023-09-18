#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
    public:
    map<T,list<T>> adj;

    void addEdge(T u,T v,bool direction){
        //direction =0 -> undirected graph
        //direction =1 -> directed graph
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void printGraph(){
        for(auto i:adj){
            cout<<i.first<<"-> ";

            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};
int main()
{
    // graph g;
    // g.addEdge(0,1,0);
    // g.addEdge(0,4,0);
    // g.addEdge(1,2,0);
    // g.addEdge(1,3,0);
    // g.addEdge(2,3,0);
    // g.addEdge(3,4,0);

    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;
    
    graph<int> g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //creating an undirected graph
        g.addEdge(u,v,0);
    }


    g.printGraph();

    return 0;
}