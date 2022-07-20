/*
https://www.spoj.com/PTIT/problems/P191PROC/
P191PROC - Problem C - Tin nhắn
Valentine sắp đến, Tờ không muốn vẫn cô đơn 1 mình giống như các năm trước. Vì vậy Tờ quyết định tỏ tình với crush. Tuy nhiên, Tờ không muốn ba mẹ hay những người khác có thể đọc lén lời nhắn của Tờ. Anh quyết định tạo một cách mã hóa mới để chỉ anh và crush có cách dịch. Cách mã hóa của Tờ như sau:

Mỗi câu được Tờ viết trên 1 dòng là 1 chuỗi ký tự với chữ cái đầu tiên được viết hoa, các chữ cái còn lại viết thường, các từ cách nhau đúng 1 dấu cách. Để mã hóa mỗi chuỗi ký tự này, Tờ di chuyển chữ cái đầu tiên về cuối, dịch trái các chữ cái còn lại sao cho vẫn giữ nguyên vị trí dấu cách. Để thêm đặc biệt, Tờ muốn them vào cuối mỗi chuối 2 ký tự “ee” – tên viết tắt của crush. Và để cho giống một câu như bình thường, Tờ muốn chữ cái đầu viết hoa, còn lại thì viết thường. (Xem ví dụ để hiểu rõ hơn cách mã hóa).

Hãy giúp Tờ mã hóa lời tỏ tình của Tờ với crush nhé!

Input
Dòng đầu tiên chứa số nguyên T (0 < T < 1000) là số bộ test.
T dòng tiếp theo, mỗi dòng là 1 xâu ký tự S (bao gồm chữ cái viết hoa, viết thường và dấu cách) mà Tờ muốn mã hóa. (0 < |S| < 10000).

Output
Với mỗi bộ test, in ra trên 1 dòng xâu đã được mã hóa.

Example
Input:
6
I m still there everywhere
I m the dust in the wind
I m the star in the northern sky
I never stayed anywhere
I m the wind in the trees
Would you wait for me forever

Output:
M s tillt heree verywhereiee
M t hed usti nt hew indiee
M t hes tari nt hen ortherns kyiee
N evers tayeda nywhereiee
M t hew indi nt het reesiee
Ouldy ouw aitf orm ef oreverwee
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void chuan(string &s){
    s[0]=toupper(s[0]);
    cout<<s[0];
    for(int i=1;i<s.length();i++){
        s[i]=tolower(s[i]);
        cout<<s[i];
    }

}
void fake(string &s){
    // s[0]=toupper(s[0]);
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }

}

string s, t ;
void move(string &s){
    char c=s[0];
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '&& s[i+1]!=' ') s[i]=s[i+1];
        if(s[i]!=' '&& s[i+1]==' ') s[i]=s[i+2];
    }
    s[s.length()-1]=c;
    string ee ="ee";
    s+=ee;
}
void solve(){
    getline(cin, s);
    fake(s);
    move(s);
    chuan(s);


}


int main() {
    int t ;
    cin>> t ;
    cin.ignore();
    while(t--){
        solve();
        cout<<endl;

    }


}