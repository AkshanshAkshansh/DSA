#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int>bfs_solution(int v, vector<int>adjlist[]){
        int vis[v] = {0};
        int vis[0] = 1;
        vector<int>bfs_ls;
        queue<int>q;
        q.push(0);
        while(!q.size()){
            int node = q.front();
            q.pop();
            bfs_ls.push_back(node);
            
            for(auto it:adjlist[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs_ls;
    }
};
int main()
{
    //  c++ Program for undirected graph
    //  for Directed graph just comment the line  "*";
    // Given v vertices and e edges
    int v, e, i;
    cin>>v>>e;
    // Given that V -> Vv..... and so on
    int V,Vv;
    vector<int> adjlist[v];
    for(i = 0;i<e;i++){
        cin>>V>>Vv;
        adjlist[V].push_back(V);
        adjlist[Vv].push_back(Vv);
    }
    // creating object
    solution obj;
    // copying into ans vector
    vector<int> ans = obj.dfs_solution(V, adjlist);
    for(i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
