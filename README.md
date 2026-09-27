# Competitive Programming and Algorithmic Solutions

A comprehensive archive of competitive programming solutions, advanced data structures, and contest implementations developed by **Mahmoud Mohamed Megahed** during participation in ACPC / ECPC contest rounds and Codeforces practice.

---

## 🏆 Verified Online Credentials

- **Codeforces Profile:** [mahmoud_megahed](https://codeforces.com/profile/mahmoud_megahed)
- **Total Verified Accepted (OK) Submissions:** 259 submissions (215 unique problems solved).
- **Full Catalog:** Browse the complete table of solved problems with direct contest links and submission IDs in [Codeforces-Catalog.md](./Codeforces-Catalog.md).

---

## 📂 Repository Structure

```
Competitive-Programming/
├── Codeforces-Catalog.md        # Full catalog of 215 unique solved Codeforces problems with links
├── Competitive-Template.cpp     # Fast I/O, modular arithmetic & competitive programming macros
├── Data-Structures/
│   ├── AVL-Tree.cpp             # Self-balancing Binary Search Tree (Rotations, Insertions, Height balancing)
│   ├── Binary-Heap.cpp          # Min/Max Priority Queue implementation with heapify operations
│   └── Trie-Tree.cpp            # Prefix tree for high-speed string lookup and autocomplete
├── Graphs/
│   ├── Dijkstra.cpp             # Single-source shortest path using adjacency lists & priority queues
│   ├── BFS-Shortest-Path.cpp    # Breadth-First Search with full path reconstruction
│   └── Problem-900.cpp          # Graph connectivity and traversal routines
├── Backtracking/
│   └── N-Queens.cpp             # Classical N-Queens constraint satisfaction problem
├── Contests/
│   └── ACPC-Contest-2/          # Official ACPC practice contest solutions
│       ├── c.cpp
│       ├── d.cpp
│       ├── f.cpp
│       ├── h.cpp
│       └── i.cpp
├── Number-Theory-and-Math/
│   ├── Primes-1-to-N.cpp        # Prime factorization and Sieve of Eratosthenes
│   ├── Lucky-Numbers.cpp        # Digit property checking and base conversion
│   ├── Fibonacci.cpp            # Recurrence relation modeling
│   ├── Digits.cpp               # Numerical manipulation algorithms
│   └── Palindrome.cpp           # Numerical and string symmetry validation
└── Practice-Sheets/
    ├── Sheet3-Arrays-Strings.cpp# Linear data structure manipulations
    ├── Homework-07-Answer.cpp   # Advanced structural programming exercises
    ├── Homework-11-Answer.cpp   # Recursive algorithms
    └── AskMe-Console-System.cpp # Object-oriented terminal Q&A system
```

---

## ⚡ Data Structures & Algorithmic Complexity

| Structure / Algorithm | File | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| **AVL Tree** | `Data-Structures/AVL-Tree.cpp` | O(log N) Search, Insert, Delete | O(N) |
| **Binary Heap** | `Data-Structures/Binary-Heap.cpp` | O(log N) Push/Pop, O(1) Top | O(N) |
| **Trie (Prefix Tree)** | `Data-Structures/Trie-Tree.cpp` | O(L) where L is string length | O(Alphabet_Size * L * N) |
| **Dijkstra Algorithm** | `Graphs/Dijkstra.cpp` | O((V + E) log V) | O(V + E) |
| **BFS Path Reconstruction** | `Graphs/BFS-Shortest-Path.cpp` | O(V + E) | O(V) |
| **N-Queens Solver** | `Backtracking/N-Queens.cpp` | O(N!) | O(N) |
| **Sieve of Eratosthenes** | `Number-Theory-and-Math/Primes-1-to-N.cpp` | O(N log(log N)) | O(N) |

---

## 🛠️ Practical Engineering Application

The rigorous discipline developed through competitive programming directly informs backend engineering:
- Graph traversal algorithms form the core of dependency resolution containers, routing proxies, and distributed tracing.
- Tree and Trie structures power prefix indexing, search query autocomplete, and database B-Tree operations.
- Deep intuition for algorithmic space-time trade-offs prevents catastrophic N+1 query patterns, excessive allocations, and latency bottlenecks under production load.

---

## 👤 Author

**Mahmoud Mohamed Megahed**
- Fullstack .NET Developer | Competitive Programmer
- Portfolio: [portfolio-mahmoudmegahed.vercel.app](https://portfolio-mahmoudmegahed.vercel.app/)
- LinkedIn: [linkedin.com/in/mahmoud---megahed](https://www.linkedin.com/in/mahmoud---megahed/)
- Codeforces: [codeforces.com/profile/mahmoud_megahed](https://codeforces.com/profile/mahmoud_megahed)

## 📄 License
This repository is open-source under the MIT License.
