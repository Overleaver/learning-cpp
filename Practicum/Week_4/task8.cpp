#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    unsigned currentDowntrend = 1, longestDowntrend = 1;
    unsigned currentSubseries, longestSubseries, prevDigit;
    bool firstCheck = true, negative;

    if (n < 0) {
        negative = true;
        n = -n;
    }

    unsigned reverseN = 0;
    bool startsWithZero = n % 10 == 0;
    while (n != 0) {
        (reverseN *= 10) += n % 10;
        n /= 10;
    }

    while (reverseN != 0) {
        unsigned currentDigit = reverseN % 10;
        reverseN /= 10;

        if (firstCheck) {
            firstCheck = false;
            prevDigit = currentDigit;
            currentSubseries = longestSubseries = currentDigit;
            continue;
        }

        if (negative ? (currentDigit > prevDigit) : (currentDigit < prevDigit)) {
            currentDowntrend++;
            (currentSubseries *= 10) += currentDigit;
        }   
        else {
            currentDowntrend = 1;
            currentSubseries = currentDigit;
        }

        if (currentDowntrend > longestDowntrend) {
            longestDowntrend = currentDowntrend;
            longestSubseries = currentSubseries;
        }

        prevDigit = currentDigit;
    }

    if (startsWithZero && !negative && longestDowntrend == 1) {
        longestSubseries = 0;
    }
 
    std::cout << "Longest downtrend:" << longestDowntrend << '\n';
    std::cout << "Longest decreasing subseries:" << (negative ? '-' : '\0') << longestSubseries << '\n';
    
    return 0;
}
