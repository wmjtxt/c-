#include <iostream>
#define n 5
using namespace std;

struct stu{
    int id;
    int score;
}buf[n],h[n];


int fun(stu a[n], stu b[n]){
    int i, j, ms = 0, cnt = 0;
    //for(i = 0; i < n; i++) cout << a[i].id << " " << a[i].score << endl;
    for(i = 0; i < n; i++){
        if(ms < a[i].score) ms = a[i].score;
    }
    for(i = 0, j = 0; i < n; i++){
        if(a[i].score == ms){
            cnt++;
            b[j++] = a[i];
        }
    }
    return cnt;
}

int main()
{
    int i, num;
    for(i = 0; i < n; i++) cin >> buf[i].id >> buf[i].score;
    num = fun(buf, h);
    cout << num << endl;
    for(i = 0; i < num; i++) cout << h[i].id << " " << h[i].score << endl;
    return 0;
}
