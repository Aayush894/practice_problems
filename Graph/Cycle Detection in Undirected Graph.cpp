#include<unordered_map> 
#include<queue>
#include<vector>

bool Bfs(int src, unordered_map<int, vector<int>>& adj, unordered_map<int, int>& visited){
    unordered_map<int,int> parent ; 

    queue<int> q ; 
    q.push(src) ; 
    visited[src] = 1 ;
    parent[src] = -1 ; 
    while(!q.empty()){
        int size = q.size() ; 

        for(int i = 0 ; i < size; i++){
            int frontNode = q.front() ;
            q.pop() ; 

            for(auto neighbour: adj[frontNode]){
                if(visited[neighbour] == true && parent[frontNode] != neighbour){
                    return true ;
                }
                else if(!visited[neighbour]){
                    visited[neighbour] = 1;
                    parent[neighbour] = frontNode ; 
                    q.push(neighbour) ; 
                }
            }
        }
    }

    return false ;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, vector<int>> adj ; 
    
    for(auto edge: edges){
        adj[edge[0]].push_back(edge[1]) ; 
        adj[edge[1]].push_back(edge[0]) ; 
    }

    unordered_map<int, int> visited ; 
    for(auto node: adj){
        int src = node.first ; 

        if(!visited[src]){
            bool ans = Bfs(src, adj, visited) ; 
            if(ans == true){
                return "Yes" ;
            }
        }
    }

    return "No" ;
}
