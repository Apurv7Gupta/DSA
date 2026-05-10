```cpp
class Solution {
public:
    int countPrimes(int n) {

        if(n<=2)                                // edge case
            return 0;

        vector<bool> Prime(n, true);            // mark every element as prime

        Prime[0] = Prime[1] = false;            // 0 & 1 are not prime

        for(int i = 2; i * i < n; ++i){         // Loop through numbers starting from 2 & check only smallest non primes


            if(Prime[i]){                          // if a number is still marked as prime

                for(int j = i * i; j < n; j += i){ // Then mark all multiples of that number as non-prime
                    Prime[j] = false;
                }

            }

        }

        // finally count the number of primes

        int count = 0;

        for(bool p : Prime){
            if(p)
                ++count;
        }

        return count;


    }
};
```
