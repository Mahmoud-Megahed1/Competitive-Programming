# Competitive Programming and Algorithmic Solutions

A comprehensive, production-grade archive of competitive programming solutions, advanced algorithmic patterns, and data structure implementations developed by **Mahmoud Mohamed Megahed** during participation in ACPC / ECPC contest rounds and Codeforces training.

---

## 🏆 Verified Online Credentials & Performance

- **Codeforces Handle:** [mahmoud_megahed](https://codeforces.com/profile/mahmoud_megahed)
- **Total Solved Problems:** **215 unique problems** across 259 verified `Accepted` submissions.
- **Problem Rating Range:** **800 to 2000** (spanning Div 4 up to Div 1/2 hard problemsets).
- **Full Problem Catalog:** Browse the exhaustive, searchable table of all 215 solved problems with direct contest links and submission IDs in [Codeforces-Catalog.md](./Codeforces-Catalog.md).

---

## 📊 Algorithmic Topic Breakdown

Based on official Codeforces submission metadata, solved problems span the following core categories:

| Domain / Tag | Solved Count | Max Rating Solved | Core Problem Archetypes |
| :--- | :---: | :---: | :--- |
| **Implementation & Simulation** | 127 | 1500 | State simulation, coordinate transforms, string parsing |
| **Math & Number Theory** | 60 | **2000** | Modular arithmetic, fast power, Euler totient, digital roots |
| **Greedy Strategies** | 49 | 1500 | Invariant maintenance, interval scheduling, exchange arguments |
| **Brute Force & Complete Search** | 41 | 1600 | Pruned search, backtracking, state space validation |
| **Binary Search & Sortings** | 29 | 1600 | Monotonic predicate search, custom lower/upper bounds, two pointers |
| **Strings & Text Processing** | 28 | 1400 | Subsequence matching, frequency counting, anagram validation |
| **Constructive Algorithms** | 26 | 1600 | Grid invariants, parity constructions, deterministic games |
| **Graphs, Trees & Shortest Paths** | 18 | **1700** | BFS path reconstruction, Dijkstra, Tree DFS, Valid BFS verification |
| **Dynamic Programming (DP)** | 10 | 1400 | 0/1 Knapsack, subset reachability, memoized transformations |
| **Data Structures & Priority Queues** | 9 | 1600 | Custom AVL trees, binary heaps, Trie, heap consistency restoration |
| **Bit Manipulation & Bitmasks** | 9 | 1200 | Bitwise state compression, submask iteration, XOR properties |
| **Disjoint Set Union (DSU)** | 5 | **1700** | Path compression, union by rank/size, cycle detection |
| **Combinatorics** | 6 | 1500 | $nCr \pmod{10^9+7}$, permutations, inclusion-exclusion |
| **Interactive Problems** | 1 | 1500 | Binary search queries with stream flushing (`cout.flush()`) |

---

## 🌟 Milestone Problem Highlights (Rating 1400 – 2000)

A curated selection of high-rating problems solved and verified on Codeforces:

| Problem Code | Problem Name | Rating | Tags | Solved Submission | Core Technique Demonstrated |
| :--- | :--- | :---: | :--- | :--- | :--- |
| **CF 216E** | Martian Luck | **2000** | `math`, `number theory` | [Submission #274432213](https://codeforces.com/contest/216/submission/274432213) | Digital roots, prefix sums modulo $(b-1)$ |
| **CF 1873H**| Mad City | **1700** | `graphs`, `dfs`, `dsu`, `trees` | [Submission #285359835](https://codeforces.com/contest/1873/submission/285359835) | Cycle detection, entry node distance comparison |
| **CF 1037D**| Valid BFS? | **1700** | `graphs`, `trees`, `shortest paths` | [Submission #279245279](https://codeforces.com/contest/1037/submission/279245279) | Adjacency reordering by sequence & BFS validation |
| **CF 216B** | Forming Teams | **1700** | `dfs`, `graphs`, `bipartite` | [Submission #279279152](https://codeforces.com/contest/216/submission/279279152) | 2-coloring, odd-cycle detection, parity constraints |
| **CF 1971F**| Circle Perimeter | **1600** | `binary search`, `geometry` | [Submission #315896057](https://codeforces.com/contest/1971/submission/315896057) | Two-pointer / binary search over Euclidean boundaries |
| **CF 681C** | Heap Operations | **1600** | `data structures`, `greedy` | [Submission #304566470](https://codeforces.com/contest/681/submission/304566470) | Priority queue state consistency & operation insertion |
| **CF 580C** | Kefa and Park | **1500** | `dfs`, `graphs`, `trees` | [Submission #284463365](https://codeforces.com/contest/580/submission/284463365) | Tree DFS with path-accumulated state propagation |
| **CF 1999F**| Expected Median | **1500** | `combinatorics`, `math` | [Submission #274864144](https://codeforces.com/contest/1999/submission/274864144) | Precomputed fast combinatorics $nCr \pmod{10^9+7}$ |
| **CF 1999G1**| Ruler (Easy Version) | **1500** | `binary search`, `interactive` | [Submission #274867464](https://codeforces.com/contest/1999/submission/274867464) | Ternary / interactive binary search with query flushing |
| **CF 816B** | Karen and Coffee | **1400** | `data structures`, `prefix sums` | [Submission #293123675](https://codeforces.com/contest/816/submission/293123675) | Difference array $O(1)$ range updates & 2-pass prefix sums |
| **CF 520B** | Two Buttons | **1400** | `graphs`, `bfs`, `greedy` | [Submission #278529121](https://codeforces.com/contest/520/submission/278529121) | Reverse greedy state reduction / BFS shortest path |

---

## 📂 Repository Structure

```
Competitive-Programming/
├── Codeforces-Catalog.md                   # Full catalog of 215 unique solved problems with direct links
├── Competitive-Template.cpp                # Fast I/O, modular arithmetic & competitive programming macros
├── Data-Structures/
│   ├── AVL-Tree.cpp                        # Self-balancing BST (Rotations, Insertions, Height balancing)
│   ├── Binary-Heap.cpp                     # Min/Max Priority Queue with heapify operations
│   ├── Trie-Tree.cpp                       # Prefix tree for high-speed string lookup and autocomplete
│   └── Disjoint-Set-Union.cpp              # DSU with Path Compression and Union by Size/Rank
├── Graphs/
│   ├── Dijkstra.cpp                        # Single-source shortest path using adjacency lists & priority queues
│   ├── BFS-Shortest-Path.cpp               # Breadth-First Search with full path reconstruction
│   └── Problem-900.cpp                     # Graph connectivity and traversal routines
├── Trees-and-Advanced-Graphs/
│   └── Tree-DFS-and-Cycle-Detection.cpp    # Subtree sizes, path constraints (Kefa & Park), bipartite checking
├── Search-Techniques/
│   └── Binary-Search-Patterns.cpp          # Monotonic predicate binary search, custom lower/upper bounds, two pointers
├── Dynamic-Programming/
│   └── 01-Knapsack-and-Subset-Sum.cpp      # 0/1 Knapsack (1D space optimization), Subset Sum reachability, LCS
├── Prefix-Sums-and-Difference-Arrays/
│   └── Difference-Array.cpp                # O(1) interval range updates & prefix sum reconstruction (Karen & Coffee)
├── Bit-Manipulation/
│   └── Bitmask-Techniques.cpp              # Bitwise flags, subset generation, submask iteration O(3^N)
├── Number-Theory-and-Math/
│   ├── Modular-Arithmetic.cpp              # Fast power O(log N), modular inverse, fast nCr % MOD
│   ├── Modular-Arithmetic-Reference.pdf    # Comprehensive modular arithmetic theoretical guide
│   ├── Primes-1-to-N.cpp                   # Sieve of Eratosthenes & prime factorization
│   ├── Lucky-Numbers.cpp                   # Digit property checking and base conversion
│   ├── Fibonacci.cpp                       # Recurrence relation modeling
│   ├── Digits.cpp                          # Numerical manipulation algorithms
│   └── Palindrome.cpp                      # Numerical and string symmetry validation
├── Backtracking/
│   └── N-Queens.cpp                        # Classical N-Queens constraint satisfaction problem
├── Contests/
│   └── ACPC-Contest-2/                     # Official ACPC contest solutions
│       ├── c.cpp
│       ├── d.cpp
│       ├── f.cpp
│       ├── h.cpp
│       └── i.cpp
└── Practice-Sheets/
    ├── Sheet3-Arrays-Strings.cpp           # Linear data structure manipulations
    ├── Homework-07-Answer.cpp              # Advanced structural programming exercises
    ├── Homework-11-Answer.cpp              # Recursive algorithms
    └── AskMe-Console-System.cpp            # Object-oriented terminal Q&A system
```

---

## ⚡ Algorithmic Complexity Cheat Sheet

| Structure / Algorithm | File | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| **AVL Tree** | `Data-Structures/AVL-Tree.cpp` | $O(\log N)$ Search, Insert, Delete | $O(N)$ |
| **Binary Heap** | `Data-Structures/Binary-Heap.cpp` | $O(\log N)$ Push/Pop, $O(1)$ Top | $O(N)$ |
| **Trie (Prefix Tree)** | `Data-Structures/Trie-Tree.cpp` | $O(L)$ where $L$ is string length | $O(\Sigma \cdot L \cdot N)$ |
| **Disjoint Set Union (DSU)**| `Data-Structures/Disjoint-Set-Union.cpp` | $O(\alpha(N))$ amortized per op | $O(N)$ |
| **Dijkstra Algorithm** | `Graphs/Dijkstra.cpp` | $O((V + E) \log V)$ | $O(V + E)$ |
| **BFS Path Reconstruction** | `Graphs/BFS-Shortest-Path.cpp` | $O(V + E)$ | $O(V)$ |
| **Tree DFS & Subtree Size** | `Trees-and-Advanced-Graphs/Tree-DFS...` | $O(V)$ | $O(V)$ |
| **Bipartite 2-Coloring** | `Trees-and-Advanced-Graphs/Tree-DFS...` | $O(V + E)$ | $O(V)$ |
| **Binary Search on Answer** | `Search-Techniques/Binary-Search...` | $O(\log(\text{Range}) \cdot \text{Cost})$ | $O(1)$ |
| **Difference Array** | `Prefix-Sums.../Difference-Array.cpp` | $O(1)$ Update, $O(N)$ Reconstruct | $O(N)$ |
| **0/1 Knapsack (1D Space)**| `Dynamic-Programming/01-Knapsack...` | $O(N \cdot W)$ | $O(W)$ |
| **Fast Exponentiation** | `Number-Theory-and-Math/Modular-Arithmetic.cpp` | $O(\log \text{EXP})$ | $O(1)$ |
| **Fast Modular $nCr$** | `Number-Theory-and-Math/Modular-Arithmetic.cpp` | $O(1)$ query ($O(N)$ precomputed) | $O(N)$ |
| **N-Queens Solver** | `Backtracking/N-Queens.cpp` | $O(N!)$ | $O(N)$ |
| **Sieve of Eratosthenes** | `Number-Theory-and-Math/Primes-1-to-N.cpp` | $O(N \log(\log N))$ | $O(N)$ |

---

## 🛠️ Practical Engineering Synergy

The rigorous algorithmic discipline developed through competitive programming directly powers backend software engineering:
- **Graph Traversal & DAGs:** Powers dependency injection container resolution, task scheduling pipelines, and distributed tracing.
- **Prefix Sums & Difference Arrays:** Informs high-throughput financial ledger aggregation and real-time metrics time-windowing.
- **Tree & Trie Structures:** Powers prefix indexing, database B-Tree operations, routing tables, and autocomplete caches.
- **Space-Time Intuition:** Eliminates catastrophic $N+1$ query cascades, optimizes memory allocations, and prevents memory leaks under sustained load.

---

## 👤 Author

**Mahmoud Mohamed Megahed**
- Fullstack .NET Developer | Competitive Programmer
- Portfolio: [portfolio-mahmoudmegahed.vercel.app](https://portfolio-mahmoudmegahed.vercel.app/)
- LinkedIn: [linkedin.com/in/mahmoud---megahed](https://www.linkedin.com/in/mahmoud---megahed/)
- Codeforces: [codeforces.com/profile/mahmoud_megahed](https://codeforces.com/profile/mahmoud_megahed)

## 📄 License
This repository is open-source under the MIT License.
