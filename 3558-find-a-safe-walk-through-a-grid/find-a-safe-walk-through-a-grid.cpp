class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n =grid.size(), m=grid[0].size();
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        vector<vector<int>> best(n, vector<int>(m, -1));

        queue<pair<int, int>> q;

        int start = health - grid[0][0];

        if (start <= 0)
            return false;

        best[0][0] = start;
        q.push({0, 0});

        while (!q.empty()) {

            auto [x, y] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {

                int X = x + dx[k];
                int Y = y + dy[k];

                if (X < 0 || X >= n || Y < 0 || Y >= m)
                    continue;

                int newHealth = best[x][y] - grid[X][Y];

                if (newHealth <= 0)
                    continue;

                if (newHealth > best[X][Y]) {

                    best[X][Y] = newHealth;
                    q.push({X, Y});
                }
            }
        }

        return best[n - 1][m - 1] > 0;
    }
};