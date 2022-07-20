/*


BCPENNY - Penny Game
Penny Game là một trò chơi đơn giản cho hai người chơi. Trò chơi này yêu cầu mỗi người chơi chọn một dãy duy nhất ba mặt đồng xu ví dụ như HEADS TAILS HEADS (HTH). Các đồng xu sẽ được tung liên tiếp cho cho đến khi xuất hiện một trong hai dãy đã được chọn lúc đầu. Người chơi nào chọn được dãy xuất hiện đầu tiên sẽ là người thắng cuộc.

Bạn hãy viết một chương trình đọc một chuỗi 40 giá trị tung đồng xu liên tiếp và xác định mỗi một chuỗi ba mặt đồng xu xuất hiện bao nhiêu lần. Hiển nhiên, ta sẽ có 8 chuỗi 3 mặt đồng xu lần lượt là: TTT, TTH, THT, THH, HTT, HTH, HHT và HHH. Các chuỗi này có thể xếp chồng lên nhau. Ví dụ ta có 40 xu liên tiếp ở mặt HEADS thì sẽ có 38 chuỗi HHH xuất hiện

Dữ liệu: Dòng đầu tiên ghi số 1 ≤ P ≤ 1000 là tổng số bộ test. Mỗi bộ test gồm 2 dòng:

Dòng đầu tiên chứa số N là thứ tự bộ test.
Dòng thứ hai là dãy 40 ký tự mô tả chuỗi giá trị tung đồng xu trong đó chỉ gồm hai ký tự là H và T. Không có bất cứ dấu cách nào trong các dòng dữ liệu vào.
Kết quả: Ghi ra màn hình một dòng cho mỗi bộ test trong số đầu tiên là thứ tự bộ test. Tiếp theo là 8 số cho biết số lần xuất hiện của mỗi chuỗi 3 đồng xu theo thứ tự ở trên. Mỗi số viết cách nhau một dấu cách. Sẽ có 9 dấu cách trong mỗi dòng kết quả.

Example
Input:
4

1

HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH

2

TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT

3

HHTTTHHTTTHTHHTHHTTHTTTHHHTHTTHTTHTTTHTH

4

HTHTHHHTHHHTHTHHHHTTTHTTTTTHHTTTTHTHHHHT

Output:
1 0 0 0 0 0 0 0 38

2 38 0 0 0 0 0 0 0

3 4 7 6 4 7 4 5 1

4 6 3 4 5 3 6 5 6
https://e16cn-ptit.blogspot.com/2018/01/bcpenny-penny-game.html?m=0

*/

#include <iostream>
#include <string>
using namespace std;
 
void count (int N, string s)
{
    string tmp = "";
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0;
    for (int i=0; i<s.length()-2; i++)
    {
        tmp = "";
        tmp = tmp + s[i] + s[i+1] + s[i+2];
        if (tmp == "TTT") s1++;
        else if (tmp == "TTH") s2++;
        else if (tmp == "THT") s3++;
        else if (tmp == "THH") s4++;
        else if (tmp == "HTT") s5++;
        else if (tmp == "HTH") s6++;
        else if (tmp == "HHT") s7++;
        else if (tmp == "HHH") s8++;
    }
    cout<<N<<" "<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<endl;
}
 
int main ()
{
    int P;
    cin>>P;
    int x;
    string S;
    for (int i=1; i<=P; i++)
    {
        cin>>x;
        cin>>S;
        count (x, S);
    }
} 

