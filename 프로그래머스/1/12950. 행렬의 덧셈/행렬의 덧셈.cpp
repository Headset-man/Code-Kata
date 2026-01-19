#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> 
solution(vector<vector<int>> arr1, 
         vector<vector<int>> arr2) { 
    vector<vector<int>> answer(arr1.size(), 
    vector<int>(arr1[0].size())); 
    
    for(size_t i = 0; i < arr1.size(); i++) {
    transform(arr1[i].begin(), arr1[i].end(), 
              arr2[i].begin(), answer[i].begin(), 
              [](int a, int b) {return a+b;});}
    return answer;
}