### Complexity Reference Table

| If $n$ is... | Recommended Big O Complexity |
| :--- | :--- |
| **$\leq [10 \dots 11]$** | $O(n!)$ or $O(n^6)$ |
| **$< [15 \dots 18]$** | $O(2^n \times n^2)$ |
| **$< 100$** | $O(n^4)$ |
| **$< 400$** | $O(n^3)$ |
| **$< 2000$** | $O(n^2 \times \log n)$ |
| **$< 10^4$** | $O(n^2)$ |
| **$< 10^6$** | **$O(n \log n)$** |
| **$< 10^8$** | $O(n)$ or $O(\log n)$ |


A small $n$ allows you to use a "heavy" or "slow" complexity.

Think of it like a budget.

You have a "Time Budget" of roughly $10^8$ operations.

$n$ is the size of your input, and the Big O complexity is the "cost" per item.

The "Complexity Budget" RuleIf $n$ is tiny (e.g., 10): You have a massive budget! You can afford a very "expensive" algorithm like $O(n!)$ or $O(2^n)$ and still finish under the 1-second limit.

If $n$ is huge (e.g., $10^7$): You are broke! You can only afford a very "cheap" algorithm like $O(n)$ or $O(\log n)$. Anything more expensive (like $O(n^2)$) will "bankrupt" your time limit.
