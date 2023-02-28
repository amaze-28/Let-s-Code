
// PROBLEM LINK - https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
// ***GeeksForGeeks - BFS of graph***

// Given a directed graph. The task is to do Breadth First Traversal 
// of this graph starting from 0.
// Note: One can move from node u to node v only if there's an edge 
// from u to v and find the BFS traversal of the graph starting from 
// the 0th vertex, from left to right according to the graph. 
// Also, you should only take nodes directly or indirectly connected 
// from Node 0 in consideration.

// Time Complexity -> O(N + E) , N is time taken for visiting N nodes 
// and E is for travelling through adjacent nodes overall

// Space Complexity -> O(N + E) + O(N) + O(N), N+E for adjacency list, 
// N for queue and rest N for visited array


class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V, 0);
        queue<int> q;
        q.push(0);
        vis[0]=1;
        vector<int> bfs;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            bfs.push_back(cur);
            for(auto i: adj[cur]){
                if(!vis[i])q.push(i);
                vis[i] = 1;
            }
        }
        return bfs;
    }
};
