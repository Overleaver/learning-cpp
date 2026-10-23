#include <iostream>

int main() {
    int count = 0, sum = 0, min = INT_MAX, max = INT_MIN, avg;
    
    int a = 0;
    while (true) {
        std::cin >> a;
        if (a == 0) {
            break;
        }

        ++count;
        sum += a;
        min = a < min ? a : min;
        max = a > max ? a : max;
    }

    if (count == 0) {
        std::cout << "No data.\n";
    }
    else {
        avg = sum / count;
        
        std::cout << "Count: " << count << '\n';
        std::cout << "Sum: " << sum << '\n';
        std::cout << "Min: " << min << '\n';
        std::cout << "Max: " << max << '\n';
        std::cout << "Average: " << avg << '\n';
    }
    
    return 0;
}