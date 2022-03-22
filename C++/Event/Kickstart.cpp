#include <bits/stdc++.h>
using namespace std;

vector<int> GetHIndexScore(vector<int> c) {
  vector<int> h_index;
  
  return h_index;
}

int main() {
  int t;
  cin >> t;
  for (int x = 1; x <= t; x++) {
    int paper_count;
    cin >> paper_count;
    vector<int> citations(paper_count);
    for (int i = 0; i < paper_count; i++) {
      cin >> citations[i];
    }
    vector<int> answer = GetHIndexScore(citations);
    cout << "Case #" << x << ": ";
    for (int i = 0; i < answer.size(); i++) {
      cout << answer[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
