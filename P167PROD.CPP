/*
P167PROD - ROUND 7D - ABC
Cho đẳng thức a + b = c, trong 3 số này có 1 số bị mờ đi một chữ số (được thay bằng dấu ?), hãy tìm chữ số đó.

Input
Dòng đầu chứa một số nguyên không âm a;
Dòng thứ hai chứa một số nguyên không âm b;
Dòng thứ ba chứa một số nguyên không âm c;
Cả ba số đều không vượt quá 106.  Một trong ba số sẽ bị thay một vị trí bằng dấu ?. 

Output
Gồm một dòng chứa một số chữ số là kết quả tương ứng của bộ test trong dữ liệu vào.
Example
Input:

128

?2

200

 

Output:

7



*/
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   string ac[3];
   for(int i = 0; i < 3; i++) {
      cin >> ac[i];
   }
   int dd = -1;
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < ac[i].size(); j++) {
         if(ac[i][j] == '?') {
            dd = i;
            break;
         }
      }
      if(dd != -1) break;
      
   }
   
   if(dd == 0) {
      int bs = stoi(ac[1]);
      int cs = stoi(ac[2]);
      int dd1 = cs-bs;
      string tmp = to_string(dd1);
      for(int i = 0; i < ac[0].size(); i++) {
         if(ac[0][i] != tmp[i]) {
            cout << tmp[i];
            return 0;
         }
      }
   } else if(dd == 1) {
      int as = stoi(ac[0]);
      int cs = stoi(ac[2]);
      int dd1 = cs-as;
      string tmp = to_string(dd1);
      for(int i = 0; i < ac[1].size(); i++) {
         if(ac[1][i] != tmp[i]) {
            cout << tmp[i];
            return 0;
         }
      }
   } else {
      int as = stoi(ac[0]);
      int bs = stoi(ac[1]);
      int dd1 = as+bs;
      string tmp = to_string(dd1);
      for(int i = 0; i < ac[2].size(); i++) {
         if(ac[2][i] != tmp[i]) {
            cout << tmp[i];
            return 0;
         }
      }
   }
}