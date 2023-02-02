#include <bits/stdc++.h>
using namespace std;
class solution{
    private:
    void dfs(int node, vector<int> adjlist, vector<int> &ls, int vis[]){
        vis[node] = 1;
        ls.push_back(node);
        for(auto it : adjlist[node]){
            if(!vis[it]){
                dfs(it, adjlist, ls, vis)
            }
        }
    }
    public:
    vector<int> dfs_solution(int v, vector<int>adjlist){
        int vis[v] = {0};
        vector<int> ls;
        int start = 0;
        dfs(start, adjlist, ls, vis);
        return ls;
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
    // creating objects
    solution obj;
    // copying into ans vector
    vector<int> ans = obj.dfs_solution(V, adjlist);
    for(i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
