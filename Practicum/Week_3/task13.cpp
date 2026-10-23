#include <iostream>

int main() {
    unsigned n;
    do {
        std::cout << "Enter n (n >= 3): ";
        std::cin >> n;
    } while (n < 3);

    int oldNum = 0, bd = 0, sbd = 0;
    for (unsigned i = 0; i < n; ++i) {
        int num;
        std::cin >> num;

        if (i == 0) {
            oldNum = num;
            continue;
        }

        int diff = num - oldNum;
        oldNum = num;
        diff = (diff < 0) ? -diff : diff;
        
        if (diff > bd) {
            int temp = bd;
            bd = diff;
            sbd = temp;
        }
    }

    if (bd == sbd) {
        std::cout << "No second distinct difference.\n";
    }
    else {
        std::cout << sbd << '\n';
    }

    return 0;
}