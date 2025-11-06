#include <iostream>
using namespace std;

int binary_adder(int x,int y) {
    int direct_sum = x + y;
    int result = 0;
    int posicion = 1;
    int carry = 0;

    while (direct_sum != 0) {
        int current_num = (direct_sum % 10) + carry;
        carry = 0;

        if (current_num == 1) {
            result = result + posicion;
        } else if (current_num == 2) {
            carry = 1;
        } else if (current_num == 3) {
            result = result + posicion;
            carry = 1;
        }

        direct_sum = direct_sum / 10;
        posicion = posicion * 10;
    }

    return (carry ? result + posicion : result);
}

int main() {
    int x,y;

    cout << endl;
    cout << "\t     - Binary adder -" << endl;
    cout << "- Please enter the first number in binary: ";
    cin >> x;
    cout << "- Now enter the second one: ";
    cin >> y;
    cout << "\n";

    int result = binary_adder(x,y);

    cout << "- The result of adding " << x << " and " << y << " equals '" << result << "' in binary!" << "\n\n";

}
