#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ,x;
    cin >> n >> x;
    vector<int> v(n); // khai báo vector v với n phần tử
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    unordered_map<int, int> mp; // khai báo hàm unordered_map trong thư viện map để lưu các key với tần suất xuất hiện của nó, n : 1 2 3 1 4, x : 4;
    int count = 0;
    for(int i = 0; i < v.size(); i++) {
        int y = x - v[i]; // tạo y mục đích để kiểm tra xem thằng y này đã có trong map chưa, có nghĩa là xem thử nếu y có trong map rồi thì có nghĩa là thằng v[i] lúc đó + y = x, còn nếu chưa có thì đưa y vào map, nếu có thì cũng đưa vào map để tiếp tục xét v[i] tiếp theo;
        if(mp.find(y) != mp.end()) {
            count += mp[y]; // mp[y] này là số lần xuất hiện của key đó, kiểu giá trị là int;
        }
        mp[v[i]]++; // còn thằng này là tăng số lần xuất hiện của key đó lên 1;
    }
    cout << count;
    return 0;
}