class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sum = triangle[0][0];
        for (int i = 1; i < triangle.size(); i++) {
            if (triangle[i].size() > 1) {
                sum += min(triangle[i][0],triangle[i][1]);
            }
        }
        return sum;
    }
};