class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int total = 0;
        int prev_value = 0;

        for (int i = s.length() - 1; i >= 0; i--) { // 오른쪽에서 왼쪽으로 처리
            int current_value = roman[s[i]];
            
            if (current_value < prev_value) { 
                total -= current_value; // 작은 값이 앞에 있으면 빼줌 (IV, IX 같은 경우)
            } else {
                total += current_value; // 그렇지 않으면 더해줌
            }
            
            prev_value = current_value; // 이전 값 업데이트
        }
        
        return total;
    }
};