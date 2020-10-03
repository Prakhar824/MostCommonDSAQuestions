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

int main(){
  int n=5;
  vector<int> edges[n];
  add(edges, 0, 1);
  add(edges, 0, 4);
  add(edges, 1, 2);
  add(edges, 1, 3);
  add(edges, 1, 4);
  add(edges, 2, 3);
  add(edges, 3, 4);
  printGraph(edges,n);
  return 0;
}
