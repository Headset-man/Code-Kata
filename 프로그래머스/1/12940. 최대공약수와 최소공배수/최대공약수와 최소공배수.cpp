#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int gcd_val = gcd(n, m);
    int lcm_val = n * m / gcd_val;
    
    answer.push_back(gcd_val);
    answer.push_back(lcm_val);
    
    return answer;
}