class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > vec(n, vector<int>(n, 0));
		int num = 1;
		int rm = 0, rn = 0;
		int layer = 0;
		int total = n * n - 1; 
		vec[0][0] = 1;
		while (num <= total) {
			if (rm == layer && rn < n - layer - 1) {  // right
				vec[rm][rn++] = num++;
			}
			else if (rn == (n - layer - 1) && rm < (n - layer - 1)) {  // down
				vec[rm++][rn] = num++;
			}
			else if (rm == (n - layer-1) && rn > layer) {  // left
				vec[rm][rn--] = num++; 
			}
			else if (rm > layer && rn == layer) {  // up
				vec[rm--][rn] = num++;
			}
			if (rm == layer + 1 && rn == layer) {  // if layer's num end，layer plus 1 
				layer++;
			}
		}
		vec[rm][rn] = num;  // set last number
		return vec;
    }
    
};