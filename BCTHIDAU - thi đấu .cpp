/*

BCTHIDAU - Thi đấu
Trong cuộc thi ACM, các đội thi đấu với nhau. Thứ hạng của mỗi đội phụ thuộc vào: số lượng bài giải được và số điểm bị phạt (điểm phạt phụ thuộc vào thời gian và số lần nộp bài trước khi bài đó được giải đúng). Điểm phạt bằng thời gian nộp bài đúng cộng với 20 phút cho mỗi lần nộp sai. Nếu một bài không giải được thì những lần nộp sai bài đó không bị tính điểm phạt. Như vậy nếu đội giải đúng vào lần nộp thứ 2, sau 20 phút thì điểm phạt sẽ là 40 điểm. Đội thắng là đội giải được nhiều nhất, nếu có nhiều đội có số bài giải giống nhau thì đội bị phạt ít hơn sẽ giành chiến thắng.

Input: Cuộc thi ACM lần này chỉ có 4 bài.

Dòng 1: số n tương ứng với số đội thi

Dòng 2 đến dòng n+1: Mỗi dòng ghi

<Tên> <p1SuB> <p1Time> <p2SuB> <p2Time>….<p4Time>

Thành phần đầu tiên là tên đội, không chứa dấu cách. Sau đó là thông tin về đội đó: p1Sub số lần đội nộp lời giải cho bài 1, p1Time là thời điểm đội nộp đúng, nếu đội không giải đúng được bài 1 thì p1Time=0, tương tự với 3 bài còn lại.

Output: Ghi tên đội thắng, số bài giải được, số điểm phạt

Ví dụ cho Input và Output:

INPUT

OUTPUT

 

4

Stars 2 20 5 0 4 190 3 220

Rockets 5 180 1 0 2 0 3 100

Penguins 1 15 3 120 1 300 4 0

Marsupials 9 0 3 100 2 220 3 80

Penguins 3 475

 


*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

struct thisinh{
    string name;
    int   p1sub;
    int   p1time;
    int   p2sub;
    int   p2time;
    int p3sub ;
    int p3time;
    int p4sub;
    int p4time;
};
struct hinhthuc{
    int solan;
    int time;

};

int main(){

    int n ;
    cin>>  n;
    vector<thisinh> ds;
    for(int i=0;i<n;i++){
        thisinh tmp;
        cin>>tmp.name;
        cin>>tmp.p1sub>>tmp.p1time;
        cin>>tmp.p2sub>>tmp.p2time;
        cin>>tmp.p3sub>>tmp.p3time;
        cin>>tmp.p4sub>>tmp.p4time;
        ds.push_back(tmp);
    }
    vector<hinhthuc> ds2(n);
    for(int  i=0;i<n;i++){
        int dem =0; int thoigian =0;
        if(ds[i].p1sub>0 && ds[i].p1time !=0 ) ++dem;
        if(ds[i].p2sub>0 && ds[i].p2time !=0 ) ++dem;
        if(ds[i].p3sub>0 && ds[i].p3time !=0 ) ++dem;
        if(ds[i].p4sub>0 && ds[i].p4time !=0 ) ++dem;
        ds2[i].solan=dem;
        if(ds[i].p1sub>0 && ds[i].p1time !=0 ) thoigian+=(ds[i].p1sub-1)*20;
        if(ds[i].p2sub>0 && ds[i].p2time !=0 ) thoigian+=(ds[i].p2sub-1)*20;
        if(ds[i].p3sub>0 && ds[i].p3time !=0 ) thoigian+=(ds[i].p3sub-1)*20;
        if(ds[i].p4sub>0 && ds[i].p4time !=0 ) thoigian+=(ds[i].p4sub-1)*20;
        thoigian +=ds[i].p1time+ds[i].p2time+ds[i].p3time+ds[i].p4time;
        ds2[i].time=thoigian;
    }

    string name="";
    hinhthuc max ;
    name=ds[0].name;
    max.solan=ds2[0].solan;
    max.time=ds2[0].time;
    for(int i=1;i<n;i++){
        if(ds2[i].solan> max.solan){
            name=ds[i].name;
            max.solan=ds2[i].solan;
            max.time=ds2[i].time;

        }
        else if(ds2[i].solan==max.solan){
            //soi sanh thoi gina phajt 
            if(ds2[i].time< max.time){
                 name=ds[i].name;
            max.solan=ds2[i].solan;
            max.time=ds2[i].time;

            }
        }
    }


    cout<<name<<' '<<max.solan<<' '<<max.time;




}