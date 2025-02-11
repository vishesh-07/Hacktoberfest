#include<bits/stdc++.h>
using namespace std;
int INF=1e9+7;
void graphInput(vector<vector<int>>&graph,int vertex){
	cout<<"Enter the matrix\n (-1 for Infinity)\n";
	for(int i=0;i<vertex;i++){
		for(int j=0;j<vertex;j++){
			cin>>graph[i][j];
		}
	}
}
void multiStage(vector<vector<int>>&graph,vector<int>&distance,vector<int>&path,int vertex){
	distance[vertex-1]=0;
	for(int i=vertex-2;i>=0;i--){
		distance[i]=INF;
		for(int j=i;j<vertex;j++){
			if(graph[i][j]==-1){
				continue;
			}
			distance[i]=min(distance[i],graph[i][j]+distance[j]);
		}
	}
}
int main(){
	int vertex;
	cout<<"Enter Number of Vertex\n";
	cin>>vertex;
	vector<vector<int>>graph(vertex,vector<int>(vertex,INF));
	graphInput(graph,vertex);
	vector<int>distance(vertex);
	vector<int>path(vertex,0);
	multiStage(graph,distance,path,vertex);
	cout<<"Minimum distance from "<<1<<" to "<<vertex<<" is "<<distance[0]<<"\n";
	return 0;
}
