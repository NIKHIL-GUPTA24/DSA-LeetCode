#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int> > adj(numCourses);
        vector<int>indegree (numCourses, 0);

        for(auto &p : prerequisites){
            int course = p[0];
            int pre = p[1];

            adj[pre].push_back(course);
            indegree[course]++;
        }
        vector<int> ans;
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto neighbour: adj[node]){
                indegree[neighbour] --;
                if(indegree[neighbour] == 0){
                    q.push(neighbour);
                }
            }
        }
        if(ans.size() == numCourses){
            return ans;
        }
        return{};
        
    }
};