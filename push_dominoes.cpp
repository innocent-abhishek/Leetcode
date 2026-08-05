class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.length();

        vector<int> rightside(n);
        vector<int> leftside(n);

        
        for (int i = 0; i < n; i++) {
            if (dominoes[i] == 'R') {
                rightside[i] = i;
            }
            else if (dominoes[i] == '.') {
                rightside[i] = (i > 0) ? rightside[i - 1] : -1;
            }
            else { 
                rightside[i] = -1;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (dominoes[i] == 'L') {
                leftside[i] = i;
            }
            else if (dominoes[i] == '.') {
                leftside[i] = (i < n - 1) ? leftside[i + 1] : -1;
            }
            else { 
                leftside[i] = -1;
            }
        }

        string result = dominoes;

        for (int i = 0; i < n; i++) {

            
            if (dominoes[i] != '.')
                continue;

            if (rightside[i] == -1 && leftside[i] == -1) {
                result[i] = '.';
            }
            else if (rightside[i] == -1) {
                result[i] = 'L';
            }
            else if (leftside[i] == -1) {
                result[i] = 'R';
            }
            else {
                int rightDist = i - rightside[i];
                int leftDist = leftside[i] - i;

                if (rightDist == leftDist)
                    result[i] = '.';
                else if (rightDist < leftDist)
                    result[i] = 'R';
                else
                    result[i] = 'L';
            }
        }

        return result;
    }
};