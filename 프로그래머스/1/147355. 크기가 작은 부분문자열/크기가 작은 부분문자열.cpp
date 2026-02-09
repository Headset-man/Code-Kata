#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) 
{
    int answer = 0;
    int len_p = p.size();
    long long num_p = stoll(p);
    
    for (int i = 0; i <= t.size() - len_p; i++) {
        string sub = t.substr(i, len_p);
        long long num_sub = stoll(sub);
        
        if (num_sub <= num_p)
        {
            answer++;
        }
    }
    return answer;
}