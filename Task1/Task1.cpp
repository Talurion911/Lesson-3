#include <iostream> 

using namespace std;

bool checkPrimeNumber(int);


int main() {

    setlocale(LC_ALL, "");
    int n;
    cout << "Введите целочисленное положительное значение: ";
    cin >> n;

    if (checkPrimeNumber(n))
        cout << n << " — это простое число.";
    else
        cout << n << " — это значение не является простым числом.";
    return 0;

}



bool checkPrimeNumber(int n) {

    bool isPrimeNumber = true;



    // 0 и 1 не являются простыми числами 

    if (n == 0 || n == 1) {

        isPrimeNumber = false;

    }

    else {

        for (int i = 2; i <= n / 2; ++i) {

            if (n % i == 0) {

                isPrimeNumber = false;

                break;

            }

        }

    }

    return isPrimeNumber;

}