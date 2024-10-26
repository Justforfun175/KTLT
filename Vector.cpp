#include <bits/stdc++.h>
using namespace std;

void themvector(vector<int> &a, int &x) {
    a.push_back(x); // đưa giá trị vào cuối vector a.
}
void sxtangdan(vector<int> &a) {
    sort(a.begin(), a.end()); // sắp xếp các giá trị trong vector a tăng dần.
}
void daonguoc(vector<int> &a) {
    reverse(a.begin(), a.end()); // đảo ngược vector lại.Ví dụ vector a ={1,2,3} thành vector a={3,2,1}.
}
void kichso(vector<int> &a) {
    cout << a.size() << " "; // in ra số lượng các phần tử trong vector a.
}
void invector(vector<int> &a) {
    for(unsigned int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
}
void sxgiamdan(vector<int> &a) {
    sort(a.begin(), a.end(), greater<int>()); // sắp xếp các giá trị trong vector a giảm dần.
}

int main() {
    int q, x, count = 0;
    vector<int> a;
    cin >> q;
    while (q--) {
        char q1;
        cin >> q1;
        switch (q1) {
            case 'a':
            cin >> x;
            themvector(a, x);
            break;
            case 'b':
            sxtangdan(a);
            break;
            case 'c':
            daonguoc(a);
            break;
            case 'd':
            count++;
            kichso(a);
            break;
            case 'e':
            count++;
            invector(a);
            break;
            case 'f':
            sxgiamdan(a);
            break;
        }
    }
    if (count == 0) cout << -1;
    return 0;
}
