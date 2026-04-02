# Binary Search On Answer

```cpp

// k = bananasEaten/hour
// you have to find the minimum value of k that will alstart koko to eat all
// bananas within the time given Time per pile = ceil(pile / k)

/* BRUTE FORCE:

// start with k = 1
// keep increasing k until totalTime < h

int minEatingSpeed(vector<int> &piles, int hours)
{

    int maxPile = *max_element(piles.begin(), piles.end());
    for (int k = 1; k <= maxPile; k++)
    {
        int totalTime = 0;
        for (int i = 0; i < piles.size(); ++i)
        {
            totalTime += ceil((double)piles[i] / k);
        }
        if (totalTime <= hours)
            return k;
    }
    return -1;
}



*/

class Solution {
public:
   long long hoursNeeded(vector<int>& piles, int speed) { // Calculating hours needed separately
        long long hours = 0;

        for (int i = 0; i < piles.size(); ++i) {

            // time = work/speed

            hours += (piles[i] + speed - 1) / speed; // formula to manually do ceil(piles[i]/speed) so // its fast
        }
        return hours;
    }


    int minEatingSpeed(vector<int>& piles, int h) { // Standard binary search

        int start = 1;
        int end = *max_element(piles.begin(), piles.end()); // last valid answer
        int ans = end; // end is sure to be the answer

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (hoursNeeded(piles, mid) <= h) {

                ans = mid;
                end = mid - 1; // go left

            } else {

                start = mid + 1; // go right
            }
        }
            return ans;

    }
};

```
