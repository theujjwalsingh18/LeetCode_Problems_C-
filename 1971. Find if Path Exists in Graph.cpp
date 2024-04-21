class Solution {
public:
    unordered_map<int, vector<int>> mp;
    bool check(int src, int dest, vector<bool>& visited) {
        if (src == dest) {
            return true;
        }
        if (visited[src] == true) {
            return false;
        }
        visited[src]=true;
        for (auto &item : mp[src]) {
            if (check(item, dest, visited) == true) {
                return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source,int destination) {
        for (auto &item : edges) {
            int u = item[0];
            int v = item[1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        vector<bool> visited(n, false);
        return check(source, destination, visited);
    }
};