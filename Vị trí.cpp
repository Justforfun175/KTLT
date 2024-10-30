#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q; // n là số lượng phần tử, q là số lượng truy vấn.
    cin >> n >> q;
    vector<int> v(n); // khai báo mảng vector v với n phần tử.
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> v1(q); // khai báo mảng vector v1 với q phần tử.
    for(int i = 0; i < q; i++) {
        cin >> v1[i];
    }
    vector<int> kq; // khai báo 1 mảng vector kq để lưu vị trí của các phần tử.
    for(unsigned int i = 0; i < v1.size(); i++) {
        auto diachi = lower_bound(v.begin(), v.end(), v1[i]); // Hàm lower_bound trong C++ tìm vị trí đầu tiên trong một dãy đã sắp xếp mà giá trị tại vị trí đó không nhỏ hơn giá trị cần tìm. Nó rất hữu ích khi bạn cần tìm vị trí của một phần tử hoặc chèn một phần tử vào đúng chỗ trong dãy mà vẫn duy trì thứ tự sắp xếp.
        if(diachi != v.end() && *diachi == v1[i]) { // *diachi này nó sẽ trỏ tới giá trị vị trí của diachi đang có.Cái diachi != v.end() kia nó coi thử thằng vị trí diachi kia nó có rỗng không nếu không là không có vị trí đó trong mảng vector v.
            int diachi1 = distance(v.begin(), diachi); // distance này nó tính vị trí bắt đầu từ vị trí begin tới vị trí mình chọn.
            kq.push_back(diachi1 + 1);
        }
        else kq.push_back(-1);
    }
    for(unsigned int i = 0; i < kq.size(); i++) {
        cout << kq[i] << endl;
    }
    return 0;
}
