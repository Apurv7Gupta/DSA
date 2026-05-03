# 🧠 1. When to think “STACK”

Think stack when you see:

### 🔁 A. “Last thing matters most”

- “most recent character / element”
- “undo last step”
- “backtracking behavior in a linear scan”

👉 Example:

- adjacent duplicates removal
- valid parentheses
- simplify path
- decode strings

---

### 🔥 B. “Adjacent interaction”

If elements only affect **their neighbor or last seen element**, not the whole array:

- canceling pairs
- merging neighbors
- comparing with previous state

👉 Clue words:

- “adjacent”
- “consecutive”
- “remove pairs”
- “cancel out”

---

### 🧨 C. “Chain reaction after removal”

This is the biggest giveaway:

> removing something changes what becomes adjacent

That almost always = stack.

---

# 🧠 2. When to think “TWO POINTERS”

Use when:

### ↔️ A. You’re shrinking/expanding from ends

- palindrome check
- reverse operations
- sorted array problems

### ⚖️ B. You maintain a window

- “subarray with condition”
- “longest/shortest substring”

Clue words:

- “subarray”
- “substring”
- “contiguous”
- “longest/shortest”

---

# 🧠 3. When to think “HASH / SET”

Use when:

### 🔍 A. You only need to know existence

- duplicates
- frequency checks
- “seen before?”

Clue words:

- “duplicate”
- “unique”
- “first time”
- “count occurrences”

---

# 🧠 4. When to think “GREEDY”

Use when:

### 🎯 A. Local best choice is safe globally

- “minimize/maximize steps”
- “remove as many as possible”
- “optimal arrangement”

Clue words:

- “maximum/minimum”
- “best choice at each step”
- “optimal strategy”

---

# 🧠 5. When to think “DP”

Use when:

### 🧩 A. Overlapping subproblems exist

- choices depend on previous choices
- multiple ways to reach same state

Clue words:

- “ways to”
- “count number of”
- “minimum cost”
- “optimal sequence”

# ⚡ Mental shortcut summary

| Pattern      | Trigger                                         |
| ------------ | ----------------------------------------------- |
| Stack        | last element matters / cancellation / adjacency |
| Two pointers | ends or window                                  |
| Set/Map      | existence / frequency                           |
| Greedy       | best local choice                               |
| DP           | overlapping choices                             |
