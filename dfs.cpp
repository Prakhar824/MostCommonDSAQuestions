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

void dfs(bool visited[],vector<int> edges[],int v){

  visited[v]=true;
  cout<<v<<" ";
  for(auto i: edges[v]){
    if(visited[i]!=true){
      dfs(visited,edges,i);
    }
  }
}

void dfsImplement(vector<int> edges[],int n,int v){
  bool visited[n]={false};
  dfs(visited,edges,v);
}

int main(){
  int n=4;
  vector<int> edges[n];
  add(edges, 0, 1);
  add(edges, 0, 2);
  add(edges, 1, 2);
  add(edges, 2, 0);
  add(edges, 2, 3);
  add(edges, 3, 3);
  dfsImplement(edges,n,2);
  // add(edges, 3, 4);
  // printGraph(edges,n);
  return 0;
}
