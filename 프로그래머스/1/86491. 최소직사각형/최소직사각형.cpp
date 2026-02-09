#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_w = 0;
    int max_h = 0;
    
    for (auto card : sizes) {
        int w = card[0];
        int h = card[1];
        
        int longer = max(w,h);
        int shorter = min(w,h);
        
        max_w = max(max_w, longer);
        max_h = max(max_h, shorter);
    }
    
    return max_w * max_h;
}