#include <iostream>
#include <cstdlib>
#include<iomanip>
#include <ctime>
using namespace std;

void task96();
void task97();
int task97_count = 0;

int main() {
    setlocale(0, "");
    srand(time(0));
    //task96();
    task97();
}

void task96() {
    unsigned int n;
    cout << "задача 96\n";
    int p = 0, m = 0;
    while (p != 4) {
        cout << "\nвведите четырехзначное число\n";
        cin >> n;
        int r = rand() % 10000;
        cout << "рандомное число = " << setfill('0') << setw(4) << r << endl;
        p = 0, m = 0;
        while (r > 0 && n > 0) {
            if (r % 10 == n % 10) {
                p++;
            }
            else {
                m++;
            }
            n = n / 10;
            r = r / 10;
        }
        cout << "плюсы " << p << "   минусы " << m << endl;
    }
    cout << "\n\nпобеда!!!\n\n";
}


void task97_func(int n, int from, int to, int free)
{
    if (n > 0)
    {
        task97_func(n - 1, from, free, to);
        task97_count++;
        cout << from << " => " << to <<"\n";
        task97_func(n - 1, free, to, from);
    }
}

void task97() {
    cout << "\nвведите n\n";
    int n;
    cin >> n;
    cout << "n=" << n<<endl;
    task97_func(n, 1, 3, 2);
    cout << "общее число перемещений " << task97_count<<endl;
}