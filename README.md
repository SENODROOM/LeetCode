# LeetCode Solutions Repository

A comprehensive collection of LeetCode algorithm and data structure problem solutions organized by programming language using Git submodules.

## 📚 Overview

This repository serves as a centralized hub for LeetCode problem solutions implemented in multiple programming languages. The solutions are organized using Git submodules, allowing for clean separation of code by language while maintaining a unified project structure.

## 🗂️ Repository Structure

The repository is organized using Git submodules to separate solutions by programming language:

```
LeetCode/
├── .vscode/              # VS Code workspace settings
├── C++/                  # C++ solutions (Git submodule)
├── JavaScript/           # JavaScript solutions (Git submodule)
└── .gitmodules          # Git submodules configuration
```

### Language-Specific Submodules

- **C++** (`LeetCode-in-Cplusplus`): C++ implementations of LeetCode problems
- **JavaScript** (`LeetCode-in-JavaScript`): JavaScript implementations of LeetCode problems

## 🎯 Purpose

This repository aims to:

- Provide well-structured solutions to LeetCode problems
- Demonstrate problem-solving approaches across different programming languages
- Serve as a learning resource for algorithm and data structure concepts
- Track personal progress in competitive programming and interview preparation
- Facilitate code comparison between different language implementations

## 🚀 Getting Started

### Prerequisites

- Git installed on your system
- A GitHub account (for contributing)
- Familiarity with at least one of the supported programming languages

### Cloning the Repository

Since this repository uses Git submodules, you need to clone it with the `--recurse-submodules` flag:

```bash
# Clone with all submodules
git clone --recurse-submodules https://github.com/SENODROOM/LeetCode.git

# Or if you've already cloned without submodules
git clone https://github.com/SENODROOM/LeetCode.git
cd LeetCode
git submodule update --init --recursive
```

### Updating Submodules

To pull the latest changes from all submodules:

```bash
# Update all submodules to their latest commits
git submodule update --remote --merge

# Or update a specific submodule
git submodule update --remote C++
```

## 📖 How to Use This Repository

### For Learning

1. **Browse by Language**: Navigate to the language-specific submodule you're interested in
2. **Study Solutions**: Review implementations and understand different approaches
3. **Compare Implementations**: Compare how the same problem is solved in different languages
4. **Practice**: Try solving problems yourself before looking at solutions

### For Contributing

1. Fork the repository
2. Clone your fork with submodules
3. Make changes in the appropriate language submodule
4. Commit and push your changes
5. Create a pull request

## 🛠️ Development Setup

### VS Code Setup

The repository includes a `.vscode` directory with recommended settings for development. To use it:

1. Open the repository in VS Code
2. Install recommended extensions (if prompted)
3. The workspace settings will be automatically applied

### Language-Specific Setup

#### C++
- Compiler: C++11 or later recommended
- IDE: Visual Studio Code, CLion, or any C++ IDE

#### JavaScript
- Runtime: Node.js (latest LTS version recommended)
- Editor: Visual Studio Code with ESLint extension

## 📊 Problem Categories

LeetCode problems typically fall into these categories:

- **Arrays & Strings**: Manipulation, searching, sorting
- **Linked Lists**: Traversal, reversal, cycle detection
- **Trees & Graphs**: DFS, BFS, traversals
- **Dynamic Programming**: Memoization, tabulation
- **Backtracking**: Permutations, combinations
- **Sorting & Searching**: Binary search, merge sort, quick sort
- **Hash Tables**: Maps, sets, frequency counting
- **Two Pointers**: Sliding window, fast & slow pointers
- **Stack & Queue**: Monotonic stack, deque
- **Bit Manipulation**: XOR, bitwise operations
- **Math & Geometry**: Number theory, computational geometry

## 🎓 Resources

### Official LeetCode Resources
- [LeetCode Website](https://leetcode.com)
- [LeetCode Discuss](https://leetcode.com/discuss/)
- [LeetCode Premium](https://leetcode.com/subscribe/)

### Additional Learning Resources
- [LeetCode Patterns](https://seanprashad.com/leetcode-patterns/)
- [NeetCode](https://neetcode.io/)
- [Algorithm Visualizations](https://visualgo.net/)

### Recommended Study Plans
- **Beginner**: LeetCode's "Top Interview Questions - Easy"
- **Intermediate**: LeetCode 75, Blind 75
- **Advanced**: LeetCode's "Top Interview Questions - Hard"

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

### Adding Solutions

1. **Choose a Problem**: Pick an unsolved problem or improve an existing solution
2. **Write Quality Code**: 
   - Include comments explaining the approach
   - Follow language-specific style guidelines
   - Optimize for both time and space complexity
3. **Test Thoroughly**: Ensure your solution passes all test cases
4. **Document**: Add problem description, approach, and complexity analysis

### Contribution Guidelines

- **Code Quality**: Write clean, readable, and well-documented code
- **Naming Conventions**: Use descriptive variable and function names
- **Comments**: Explain complex logic and algorithms
- **Complexity Analysis**: Include time and space complexity in comments
- **Testing**: Verify solutions with multiple test cases

### Pull Request Process

1. Fork and clone the repository
2. Create a feature branch (`git checkout -b feature/add-solution-xxx`)
3. Make your changes in the appropriate submodule
4. Commit with clear messages (`git commit -m "Add solution for Problem XXX in Language"`)
5. Push to your fork (`git push origin feature/add-solution-xxx`)
6. Open a Pull Request with description of changes

## 📝 Solution Template

When adding a new solution, consider using this template:

```
/*
 * Problem: [Problem Number] - [Problem Title]
 * Difficulty: [Easy/Medium/Hard]
 * Link: https://leetcode.com/problems/problem-name/
 * 
 * Approach:
 * [Describe your approach and algorithm]
 * 
 * Time Complexity: O(?)
 * Space Complexity: O(?)
 */

// Your solution code here
```

## 🏆 Progress Tracking

You can track your progress by:
- Starring the repository
- Creating issues for problems you want to solve
- Using GitHub Projects to organize your study plan
- Committing regularly to maintain a contribution streak

## ⚙️ Git Submodules Guide

### What are Git Submodules?

Git submodules allow you to keep a Git repository as a subdirectory of another Git repository. This lets you clone another repository into your project and keep your commits separate.

### Common Submodule Commands

```bash
# Add a new submodule
git submodule add <repository-url> <path>

# Initialize submodules after cloning
git submodule init
git submodule update

# Update all submodules to latest commits
git submodule update --remote

# Remove a submodule
git submodule deinit <path>
git rm <path>
```

## 📄 License

This repository is open source and available for educational purposes. Please check individual submodules for their specific licenses.

## 🙏 Acknowledgments

- **LeetCode**: For providing an excellent platform for coding practice
- **Open Source Community**: For sharing solutions and learning resources
- **Contributors**: Everyone who has contributed to improving this repository

## 📞 Contact & Support

- **Issues**: Report bugs or request features via [GitHub Issues](https://github.com/SENODROOM/LeetCode/issues)
- **Discussions**: Join discussions about problem-solving approaches
- **Profile**: [SENODROOM on GitHub](https://github.com/SENODROOM)

## 🎯 Goals

- [ ] Solve 100+ Easy problems
- [ ] Solve 100+ Medium problems
- [ ] Solve 50+ Hard problems
- [ ] Add solutions in additional languages (Python, Java, etc.)
- [ ] Include detailed explanations for all solutions
- [ ] Create video walkthroughs for complex problems
- [ ] Build a companion website with solution search

## 📈 Statistics

- **Total Problems**: Growing collection
- **Languages Supported**: C++, JavaScript (expanding)
- **Active Development**: Regular updates and improvements

---

**Happy Coding! 💻🚀**

*"The only way to learn a new programming language is by writing programs in it." - Dennis Ritchie*

---

### Quick Links

- [Contribute](CONTRIBUTING.md)
- [Report Bug](https://github.com/SENODROOM/LeetCode/issues/new?template=bug_report.md)
- [Request Feature](https://github.com/SENODROOM/LeetCode/issues/new?template=feature_request.md)

### Tags

`leetcode` `algorithms` `data-structures` `coding-interview` `cpp` `javascript` `problem-solving` `competitive-programming` `interview-preparation` `git-submodules`