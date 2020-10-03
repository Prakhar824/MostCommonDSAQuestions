#include <bits/stdc++.h>
using namespace std;

void add(vector<int> edges[], int u,int v){
  edges[u].push_back(v);
  edges[v].push_back(u);
}

void printGraph(vector<int> edges[],int n){
  for(int i=0;i<n;i++){
    cout<<"Adjencency list of "<<i;
    for(auto x : edges[i])
    cout<<" ->"<<x;
    cout<<endl;
  }
}
void bfs(vector<int> edges[],int n,int source){
  bool visited[n]= {false};
  queue<int> q;
  q.push(source);
  visited[source]=true;

  while(!q.empty()){
    int node=q.front();
    q.pop();
    cout<<" "<<node;

    for(auto i : edges[node]){
      if(visited[i]!=true){
        q.push(i);
        visited[i]=true;
      }
    }
  }
}



int main(){
  int n=7;
  vector<int> edges[n];
  add(edges, 1, 2);
  add(edges, 1, 3);
  add(edges, 2, 4);
  add(edges, 2, 5);
  add(edges, 3, 5);
  add(edges, 4, 5);
  add(edges, 4, 6);
  add(edges, 5, 6);
  // printGraph(edges,n);
  bfs(edges,n,2);
  return 0;
}
