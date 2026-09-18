# 🚀 Striver's A2Z DSA Sheet — Solutions

My curated solutions to [Striver's A2Z DSA Sheet](https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z) (474 problems), organized by the sheet's own learning progression.

> **Progress: 283 / 474** ✅

## 📊 Progress

| # | Topic | Problems | Status |
|---|-------|----------|--------|
| 01 | Learn the Basics | 31 | 🔄 In Progress |
| 02 | Learn Important Sorting Techniques | 6 | ✅ Done |
| 03 | Solve Problems on Arrays [Easy → Medium → Hard] | 40 | ✅ Done |
| 04 | Binary Search [1D, 2D Arrays, Search Space] | 32 | 🔄 In Progress |
| 05 | Strings [Basic and Medium] | 15 | ✅ Done |
| 06 | Learn LinkedList [Single LL, Double LL, Medium, Hard] | 31 | 🔄 In Progress |
| 07 | Recursion (PatternWise) | 25 | 🔄 In Progress |
| 08 | Bit Manipulation | 18 | 🔄 In Progress |
| 09 | Stack and Queues [Learning, Pre-In-Post-fix, Monotonic Stack, Implementation] | 30 | 🔄 In Progress |
| 10 | Sliding Window & Two Pointer | 12 | 🔄 In Progress |
| 11 | Heaps | 12 | 🔄 In Progress |
| 12 | Greedy Algorithms | 16 | ⬜ Not Started |
| 13 | Binary Trees | 39 | ✅ Done |
| 14 | Binary Search Trees | 16 | 🔄 In Progress |
| 15 | Graphs | 54 | 🔄 In Progress |
| 16 | Dynamic Programming | 56 | ⬜ Not Started |
| 17 | Tries | 7 | ⬜ Not Started |
| 18 | Strings (Hard Problems) | 9 | ⬜ Not Started |

**Legend:** ✅ Done · 🔄 In Progress · ⬜ Not Started

## 📁 Folder Structure

Mirrors Striver's A2Z sheet exactly — **Step → Lecture (sub-section) → solution file**.

```
DSA/
├── README.md
├── add.sh                              ← helper: creates + commits a solution file
│
├── 01-Learn-the-Basics/
│   ├── 01-Things-to-Know-in-CPP-Java-Python/
│   ├── 02-Build-up-Logical-Thinking/
│   ├── 03-Learn-STL-or-Collections/
│   ├── 04-Know-Basic-Maths/
│   ├── 05-Learn-Basic-Recursion/
│   └── 06-Learn-Basic-Hashing/
│
├── 02-Learn-Important-Sorting-Techniques/
│   ├── 01-Sorting-I/
│   └── 02-Sorting-II/
│
├── 03-Solve-Problems-on-Arrays/
│   ├── 01-Easy/
│   ├── 02-Medium/
│   └── 03-Hard/
│
├── 04-Binary-Search/
│   ├── 01-BS-on-1D-Arrays/
│   ├── 02-BS-on-Answers/
│   └── 03-BS-on-2D-Arrays/
│
├── 05-Strings/
│   ├── 01-Basic-and-Easy/
│   └── 02-Medium/
│
├── 06-Learn-LinkedList/
│   ├── 01-Learn-1D-LL/
│   ├── 02-Learn-Doubly-LL/
│   ├── 03-Medium-LL/
│   ├── 04-Medium-DLL/
│   └── 05-Hard-LL/
│
├── 07-Recursion/
│   ├── 01-Get-a-Strong-Hold/
│   ├── 02-Subsequences-Pattern/
│   └── 03-Trying-out-all-Combos/
│
├── 08-Bit-Manipulation/
│   ├── 01-Learn-Bit-Manipulation/
│   ├── 02-Interview-Problems/
│   └── 03-Advanced-Maths/
│
├── 09-Stack-and-Queues/
│   ├── 01-Learning/
│   ├── 02-Prefix-Infix-Postfix/
│   ├── 03-Monotonic-Stack-Queue/
│   └── 04-Implementation-Problems/
│
├── 10-Sliding-Window-and-Two-Pointer/
│   ├── 01-Medium-Problems/
│   └── 02-Hard-Problems/
│
├── 11-Heaps/
│   ├── 01-Learning/
│   ├── 02-Medium-Problems/
│   └── 03-Hard-Problems/
│
├── 12-Greedy/
│   ├── 01-Easy-Problems/
│   └── 02-Medium-Hard/
│
├── 13-Binary-Trees/
│   ├── 01-Traversals/
│   ├── 02-Medium-Problems/
│   └── 03-Hard-Problems/
│
├── 14-Binary-Search-Trees/
│   ├── 01-Concept/
│   └── 02-Practice-Problems/
│
├── 15-Graphs/
│   ├── 01-Learning/
│   ├── 02-BFS-DFS/
│   ├── 03-Topological-Sort/
│   ├── 04-Shortest-Path/
│   └── 05-MST-and-Disjoint-Set/
│
├── 16-Dynamic-Programming/
│   ├── 01-Introduction-to-DP/
│   ├── 02-1D-DP/
│   ├── 03-2D-3D-DP-and-Grids/
│   ├── 04-DP-on-Subsequences/
│   ├── 05-DP-on-Strings/
│   ├── 06-DP-on-Stocks/
│   ├── 07-DP-on-LIS/
│   ├── 08-MCM-and-Partition-DP/
│   └── 09-DP-on-Squares/
│
├── 17-Tries/
│   ├── 01-Theory/
│   └── 02-Problems/
│
└── 18-Strings/
    └── 01-Hard-Problems/
```

**Depth rule:** `<Step>/<Lecture>/<ProblemName>.ext`

When a problem has **more than one approach**, give it its own folder instead of a single file:

```
04-Binary-Search/01-BS-on-1D-Arrays/Kth-Missing-Positive-Number/
├── BruteForce.cpp
└── Optimal.cpp
```

## 🔄 My Workflow

### Adding a new solution

1. **Solve** the problem on LeetCode / GeeksforGeeks in the browser and get **Accepted**.
2. **Save it here** — copy the solution into the correct step **and lecture** folder and name it `ProblemName.ext`
   (e.g. `03-Solve-Problems-on-Arrays/01-Easy/TwoSum.cpp`).
3. **Annotate** — add a short header comment: pattern, approach, time & space complexity.
4. **Commit + push** (any one of these):
   - Terminal:
     ```bash
     cd ~/Desktop/Core/DSA
     git add .
     git commit -m "Arrays: Two Sum"
     git push
     ```
   - VS Code: `Ctrl+Shift+G` → type message → **Commit** → **Sync Changes**
   - Helper script:
     ```bash
     ./add.sh 03-Solve-Problems-on-Arrays/01-Easy TwoSum cpp   # 1st run: creates the file
     ./add.sh 03-Solve-Problems-on-Arrays/01-Easy TwoSum cpp   # 2nd run: commits & pushes
     ```
5. **Update the Progress table** above when a whole step is finished.

### Commit message format

```
<Step topic>: <Problem name>          →  Arrays: Two Sum
<Step topic>: <Problem name> (Hard)   →  Graphs: Word Ladder (Hard)
Multiple problems:                    →  Recursion: 5 problems (Subsequences)
```

### Solution file header

```cpp
/* Problem : Two Sum
 * Sheet   : Striver A2Z → 03-Solve-Problems-on-Arrays / 01-Easy
 * Links   : LeetCode / GfG
 * Pattern : Hashing
 * Approach: Store seen values in a map; check (target - current) before inserting.
 * Time    : O(n)   Space: O(n)
 */
```

## 🧩 How this repo is set up (two-repo model)

| Repo | Who writes it | Purpose |
|------|---------------|---------|
| **`DSA`** (this one) | Me, by hand | Clean, annotated, portfolio-ready |
| **Auto repo** (LeetHub) | LeetHub v2 extension | Safety net: every accepted submission is auto-committed |

- LeetHub v2 pushes accepted LeetCode **and** GfG submissions to its **own linked repo** — it never writes here.
- This repo is **hand-curated**: I choose what goes in, where it goes, and what notes it carries.
- Remote is connected over **HTTPS** with a Personal Access Token (not the account password):
  ```bash
  git remote -v
  # origin  https://github.com/umar-79-esc/DSA.git
  ```
- First push used `git push -u origin main`; afterwards plain `git push` is enough.

## 📝 Conventions

- **File names:** `ProblemName.ext` — PascalCase, no spaces, no prefixes (`TwoSum.cpp`, `SortColors.java`, `Kadane.cpp`).
- **Placement:** always `<Step>/<Lecture>/` — e.g. `07-Recursion/02-Subsequences-Pattern/`. Never drop files at a step root.
- **Multiple approaches for one problem?** Give it its own folder — `Kth-Missing-Positive-Number/BruteForce.cpp` + `Optimal.cpp`.
- **One file per problem**, one problem per commit where practical.
- **Notes live at the top of the file**, not in a separate doc — keeps everything in one place.
- **Empty folders** need a `.gitkeep` file, otherwise Git silently drops them.
- **Multiple languages** for the same problem? Keep both files side by side (`TwoSum.cpp`, `TwoSum.py`).

## 🔗 Connect

- 📘 **Sheet:** [Striver's A2Z DSA Sheet](https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z)
- 🟨 **LeetCode:** [leetcode.com/u/umar_khxn](https://leetcode.com/u/umar_khxn/)
- 🟩 **GeeksforGeeks:** [geeksforgeeks.org/profile/umark78bvf](https://www.geeksforgeeks.org/profile/umark78bvf)
- 💻 **GitHub:** [github.com/umar-79-esc](https://github.com/umar-79-esc)

---

*Started as a fresh repo, filled problem by problem. The commit history here is the real progress log.*
