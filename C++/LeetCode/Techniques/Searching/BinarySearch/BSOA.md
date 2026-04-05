# Binary Search On Answer

## How to spot a BSOA problem

When you see:

“minimum possible maximum”

“maximize minimum”

“split into k groups”

“capacity / speed / time”

Your brain should instantly go:

“This is probably a boundary problem.”

You need a function like:

```f(x) = true/false```

that behaves like:

```FFFFFTTTTT   or   TTTTTFFFFF```

If you don’t see that, stop. It’s not BSOA.

## Approach

You're not “searching an answer.”

You’re finding the boundary where something flips.

1) Identify the decision question

Turn the problem into:

“If I pick value x, can I do it?”

Examples:

`Koko → “Can she finish in x hours?”`

`Ship → “Can I ship with capacity x?”`

2) Lock search space (this is where people mess up)

Don’t guess randomly. Use logic:

`Minimum possible answer`

`Maximum possible answer`

Examples:

Koko → [1, max(pile)]
Ship → [max(weight), sum(weight)]

If your bounds are wrong, everything breaks.

3) Build the check function (core skill)

This is the only hard part.

You're simulating constraints:

`bool can(x)`

Typical patterns:

Greedy accumulation

Counting splits/groups

Time simulation

4) Binary search the boundary

Template:

```cpp
while (l <= r) {
    mid = (l + r) / 2;
    if (can(mid)) {
        ans = mid;
        r = mid - 1; // try smaller
    } else {
        l = mid + 1;
    }
}
```

This finds minimum valid x.



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
