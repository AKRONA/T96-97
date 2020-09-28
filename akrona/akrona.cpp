#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void task96();
void task97();

int main() {
    setlocale(0, "");
    task96();
    task97();
}

void task96() {
    unsigned int n;
    cout << "задача 96\n введите четырехзначное число\n";
    cin >> n;
    srand(time(0)); //рандом зависящий от времени
    int r = rand()%10000;
    cout << "рандомное число равно =";
    if (r<10) {
        cout << "000";
    }
    else if(r<100){
        cout << "00";
    }
    else if (r < 1000) {
        cout << "0";
    }
    cout << r << endl;
    int l = 1, p = 0, m = 0, buf = 4;
    while (r>0 && n>0) {
        if (r % 10 == n % 10) {
            p++;
        }
        else {
            m++;
        }
        n = n / 10;
        r = r / 10;
        buf--;
    }
    cout << "плюсы " << p << "   минусы " << m << endl;
}

void task97() {

}