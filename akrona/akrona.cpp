#include <iostream>
using namespace std;

void task96();
void task97();
int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int task(bool arr[], int n, int k = 1) {

    int c = 0;
    if (k <= n) {
        for (int i = 1; i <= n; i++) {
            if ((i != k) && !arr[i - 1]) {
                arr[i - 1] = true;
                c += task(arr, n, k + 1);
                arr[i - 1] = false;
            }
        }
    }
    else {
        c = 1;
    }

    return c;
}

int main() {
    setlocale(0, "");
    task96();
    task97();
}

void task96() {
    unsigned int n;
    cout << "задача шарики\n введите n";
    cin >> n;
    bool* arr = new bool[n];

    for (int i = 0; i < n; i++) {
        arr[i] = false;
    }
    cout << "ответ равен " << factorial(n) - task(arr, n);
}

void task97() {
    cout << "\n\nзадача спинерbl\nвведите A, B, C\n";
    int a, b, c, s = 0, l = 0;
    cin >> a >> b >> c;
    while (s <= c) {
        l++;
        s = a + b * l;
    }
    l--;
    if (l < 1) {
        cout << "нет лопастей";
    }
    else {
        cout << l;
    }
}