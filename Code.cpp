#include <iostream>
using namespace std;

// Hàm cộng hai số
int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b;

    // Nhập số a
    cout << "Nhập số a: ";
    cin >> a;

    // Nhập số b
    cout << "Nhập số b: ";
    cin >> b;

    // Hiển thị kết quả cộng
    cout << "Tổng của a và b là: " << add(a, b) << endl;

    return 0;
}
