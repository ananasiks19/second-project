#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть ступінь b: ";
    cin >> b;

    double result = pow(a, b);
    cout << "Результат: " << result << endl;

    return 0;
}
