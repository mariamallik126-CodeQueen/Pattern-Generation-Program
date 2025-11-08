# 🎨 Geometric Pattern Generator

[![C++](https://img.shields.io/badge/C++-11%2B-blue.svg)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey.svg)](https://github.com/)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

A comprehensive and interactive C++ console application that generates stunning geometric patterns using advanced nested loops and conditional logic. Perfect for learning C++ fundamentals or creating beautiful ASCII art!

---

## 📋 Table of Contents

- [Features](#-features)
- [Pattern Showcase](#-pattern-showcase)
- [Installation](#-installation)
- [Usage Guide](#-usage-guide)
- [Pattern Types](#-pattern-types)
- [Technical Details](#-technical-details)
- [Code Structure](#-code-structure)
- [Learning Outcomes](#-learning-outcomes)
- [Troubleshooting](#-troubleshooting)
- [Contributing](#-contributing)
- [License](#-license)

---

## ✨ Features

### 🎯 Core Functionality
- **10 Unique Pattern Types** - Diverse collection of geometric designs
- **Robust Input Validation** - Smart validation prevents invalid inputs
- **Dynamic Pattern Sizing** - Flexible sizes from 5 to 50 units
- **Interactive Menu System** - User-friendly navigation interface
- **Cross-Platform Support** - Runs on Windows, Linux, and macOS
- **Error Handling** - Graceful handling of invalid inputs
- **Clean Output** - Professional formatting with proper spacing

### 🛡️ Input Validation Features
- Type checking (ensures numeric input)
- Range validation (enforces min/max boundaries)
- Buffer clearing (prevents input stream corruption)
- User-friendly error messages
- Retry mechanism for invalid inputs

### 🎪 User Experience
- Clear, organized menu system
- Screen clearing between operations
- Pause functionality for viewing patterns
- Immediate visual feedback
- Easy exit option

---

## 🎭 Pattern Showcase

### 1️⃣ Right Triangle
```
* 
* * 
* * * 
* * * * 
* * * * * 
```

### 2️⃣ Left Triangle
```
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
```

### 3️⃣ Pyramid
```
    *
   ***
  *****
 *******
*********
```

### 4️⃣ Inverted Pyramid
```
*********
 *******
  *****
   ***
    *
```

### 5️⃣ Diamond
```
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

### 6️⃣ Hollow Square
```
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
```

### 7️⃣ Number Pyramid
```
    1
   121
  12321
 1234321
123454321
```

### 8️⃣ Floyd's Triangle
```
  1 
  2   3 
  4   5   6 
  7   8   9  10 
 11  12  13  14  15 
```

### 9️⃣ Butterfly Pattern
```
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
```

### 🔟 Hollow Diamond
```
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
```

---

## 💻 Pattern Types

| # | Pattern Name | Difficulty | Uses |
|---|--------------|------------|------|
| 1 | Right Triangle | ⭐ Easy | Basic nested loops |
| 2 | Left Triangle | ⭐ Easy | Loops with leading spaces |
| 3 | Pyramid | ⭐⭐ Medium | Centered alignment, spacing |
| 4 | Inverted Pyramid | ⭐⭐ Medium | Reverse iteration |
| 5 | Diamond | ⭐⭐⭐ Hard | Dual-phase generation |
| 6 | Hollow Square | ⭐⭐ Medium | Conditional rendering |
| 7 | Number Pyramid | ⭐⭐⭐ Hard | Number sequencing, symmetry |
| 8 | Floyd's Triangle | ⭐⭐ Medium | Sequential counting |
| 9 | Butterfly | ⭐⭐⭐⭐ Expert | Complex spacing logic |
| 10 | Hollow Diamond | ⭐⭐⭐⭐ Expert | Advanced conditionals |

---

## 🚀 Installation

## 📥 Installation

### Prerequisites

You need a C++ compiler installed on your system. Choose one based on your platform:

#### 🪟 Windows
- **MinGW-w64** (Recommended for beginners)
  - Download: [MinGW-w64](https://sourceforge.net/projects/mingw-w64/)
  - Easy setup with installer
  
- **Microsoft Visual C++ (MSVC)**
  - Download: [Visual Studio Community](https://visualstudio.microsoft.com/)
  - Includes full IDE
  
- **Clang**
  - Download: [LLVM](https://releases.llvm.org/)

#### 🐧 Linux
```bash
# Ubuntu/Debian
sudo apt-get update
sudo apt-get install g++

# Fedora
sudo dnf install gcc-c++

# Arch
sudo pacman -S gcc
```

#### 🍎 macOS
```bash
# Install Xcode Command Line Tools
xcode-select --install

# Or install via Homebrew
brew install gcc
```

### 📦 Download & Setup

1. **Clone or Download** this repository
   ```bash
   git clone <repository-url>
   cd pattern-generator
   ```

2. **Verify Files**
   - `pattern_generator.cpp` - Main source code
   - `compile.bat` - Windows compilation script
   - `run.bat` - Windows launcher
   - `README.md` - This file

---

## 🔨 Compilation

### Method 1: Using Batch Scripts (Windows - Easiest)

Simply double-click `compile.bat` to automatically compile with any available compiler.

### Method 2: Manual Compilation

#### Using g++ (Cross-platform)
```bash
g++ -o pattern_generator pattern_generator.cpp
```

#### Using g++ with optimizations
```bash
g++ -O2 -std=c++11 -o pattern_generator pattern_generator.cpp
```

#### Using MSVC (Windows)
```bash
cl /EHsc pattern_generator.cpp
```

#### Using Clang++
```bash
clang++ -o pattern_generator pattern_generator.cpp
```

### Method 3: Using VS Code (Recommended for Development)

1. Open folder in VS Code
2. Install C/C++ extension
3. Press `Ctrl+Shift+B` to build
4. Select your compiler

---

## 🎮 Usage Guide

### Quick Start

#### Windows:
1. **Compile**: Double-click `compile.bat`
2. **Run**: Double-click `run.bat`

#### Linux/macOS:
```bash
# Compile
g++ -o pattern_generator pattern_generator.cpp

# Run
./pattern_generator
```

### Step-by-Step Usage

1. **Launch the Program**
   ```bash
   ./pattern_generator      # Linux/Mac
   pattern_generator.exe    # Windows
   ```

2. **Main Menu Appears**
   ```
   =======================================
              PATTERN MENU
   =======================================
   1.  Right Triangle
   2.  Left Triangle
   ... (more options)
   11. Exit
   =======================================
   ```

3. **Select a Pattern**
   - Enter a number (1-10) for the pattern
   - Or enter 11 to exit

4. **Choose Pattern Size**
   - Enter a size between 5 and 50
   - Larger sizes create bigger patterns

5. **View Your Pattern**
   - The pattern displays on screen
   - Press Enter to return to menu

6. **Try More Patterns**
   - Select another pattern or exit (option 11)

### 💡 Pro Tips

- Start with size 5-10 for quick previews
- Try size 20-30 for impressive patterns
- Use size 40-50 for large, detailed designs
- Screenshot your favorite patterns!

---

## 🔧 Technical Details

### 🧩 Core Components

#### Input Validation System
- ✅ Type checking (ensures numeric input)
- ✅ Range validation (enforces min/max boundaries)
- ✅ Buffer clearing (prevents input stream corruption)
- ✅ User-friendly error messages with retry logic
- ✅ Handles edge cases (negative numbers, non-numeric input)

#### Nested Loop Architecture
- **Outer Loops**: Control row iteration
- **Inner Loops**: Control column/character placement
- **Multiple Loop Types**: For, while, and nested combinations
- **Optimization**: Efficient iteration for large patterns

#### Conditional Logic
- Pattern-specific conditions (hollow shapes, borders)
- Dynamic spacing calculations
- Edge detection algorithms for hollow patterns
- Symmetry handling for mirrored designs

#### Dynamic Sizing Engine
- User-defined pattern dimensions (5-50 units)
- Scalable algorithms maintaining proportions
- Memory-efficient rendering
- Real-time pattern generation

---

## 📚 Code Structure

### File Organization

```
pattern_generator/
├── pattern_generator.cpp    # Main source code (370+ lines)
├── compile.bat              # Auto-compilation script (Windows)
├── run.bat                  # Program launcher (Windows)
└── README.md                # Documentation
```

### Function Reference

| Function | Purpose | Parameters |
|----------|---------|------------|
| `main()` | Program entry point | None |
| `displayMenu()` | Shows pattern selection menu | None |
| `getValidatedInput()` | Validates user input | min, max (int) |
| `clearScreen()` | Clears console (cross-platform) | None |
| `pauseScreen()` | Waits for user input | None |
| `generateRightTriangle()` | Creates right triangle | size (int) |
| `generateLeftTriangle()` | Creates left triangle | size (int) |
| `generatePyramid()` | Creates centered pyramid | size (int) |
| `generateInvertedPyramid()` | Creates inverted pyramid | size (int) |
| `generateDiamond()` | Creates diamond shape | size (int) |
| `generateHollowSquare()` | Creates hollow square | size (int) |
| `generateNumberPyramid()` | Creates number pyramid | size (int) |
| `generateFloydTriangle()` | Creates Floyd's triangle | size (int) |
| `generateButterfly()` | Creates butterfly pattern | size (int) |
| `generateHollowDiamond()` | Creates hollow diamond | size (int) |

### Algorithm Complexity

| Pattern | Time Complexity | Space Complexity |
|---------|----------------|------------------|
| Right Triangle | O(n²) | O(1) |
| Left Triangle | O(n²) | O(1) |
| Pyramid | O(n²) | O(1) |
| Inverted Pyramid | O(n²) | O(1) |
| Diamond | O(n²) | O(1) |
| Hollow Square | O(n²) | O(1) |
| Number Pyramid | O(n²) | O(1) |
| Floyd's Triangle | O(n²) | O(1) |
| Butterfly | O(n²) | O(1) |
| Hollow Diamond | O(n²) | O(1) |

*Where n is the pattern size*

---

## 🎓 Learning Outcomes

This project teaches essential C++ programming concepts:

### Fundamental Concepts
- ✅ **Control Flow**: Mastering if-else and switch statements
- ✅ **Nested Loops**: Understanding multi-level iteration
- ✅ **Functions**: Creating modular, reusable code
- ✅ **Input/Output**: Console I/O operations
- ✅ **Data Types**: Working with integers and strings

### Intermediate Concepts
- ✅ **Input Validation**: Building robust user input handling
- ✅ **Error Handling**: Managing edge cases and errors
- ✅ **Algorithm Design**: Developing pattern generation logic
- ✅ **Code Organization**: Structuring larger programs
- ✅ **Cross-Platform Code**: Writing portable applications

### Advanced Concepts
- ✅ **Optimization**: Efficient loop structures
- ✅ **Pattern Recognition**: Identifying and implementing patterns
- ✅ **Mathematical Logic**: Applying formulas to code
- ✅ **User Experience**: Creating intuitive interfaces
- ✅ **Documentation**: Writing clear code comments

### Skills Developed
- 🧠 **Problem Solving**: Breaking complex problems into steps
- 🎯 **Attention to Detail**: Precise spacing and alignment
- 🔍 **Debugging**: Finding and fixing logic errors
- 📐 **Spatial Reasoning**: Visualizing 2D patterns
- 💻 **Clean Coding**: Writing readable, maintainable code

---

## 🔍 Troubleshooting

### Common Issues & Solutions

#### Issue: "Compiler not found"
**Solution:**
```bash
# Check if compiler is installed
g++ --version        # For g++
cl                   # For MSVC
clang++ --version    # For Clang

# If not installed, refer to Installation section
```

#### Issue: "Permission denied" (Linux/macOS)
**Solution:**
```bash
chmod +x pattern_generator
./pattern_generator
```

#### Issue: Pattern looks misaligned
**Solution:**
- Use a monospace font in your terminal
- Recommended fonts: Consolas, Courier New, Monaco
- Adjust terminal window size if needed

#### Issue: Program crashes on input
**Solution:**
- Ensure you're entering numeric values
- Stay within the specified range (1-11 for menu, 5-50 for size)
- The program has validation, but corrupted input streams may need terminal restart

#### Issue: Compilation errors
**Solution:**
```bash
# Ensure C++11 or later
g++ -std=c++11 -o pattern_generator pattern_generator.cpp

# Check for syntax errors
g++ -Wall -Wextra pattern_generator.cpp
```

#### Issue: Screen not clearing properly
**Solution:**
- Windows: Use Command Prompt or PowerShell
- Linux/macOS: Most terminals supported
- Alternative: Comment out `clearScreen()` calls if problematic

---

## 📋 Requirements

### System Requirements
- **OS**: Windows 7+, Linux (any modern distro), macOS 10.9+
- **RAM**: 50 MB minimum
- **Disk Space**: 5 MB
- **Display**: 80x24 character terminal or larger

### Software Requirements
- **C++ Compiler**: 
  - GCC 4.8+ (g++)
  - Clang 3.3+
  - MSVC 2015+
- **C++ Standard**: C++11 or later
- **Libraries**: Standard C++ libraries only
  - `<iostream>` - Input/output operations
  - `<iomanip>` - Output formatting
  - `<string>` - String handling
  - `<limits>` - Numeric limits

### Development Tools (Optional)
- **IDE/Editor**: VS Code, Visual Studio, CLion, Code::Blocks
- **Debugger**: GDB, LLDB, Visual Studio Debugger
- **Version Control**: Git

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

### Ways to Contribute
1. 🐛 Report bugs or issues
2. 💡 Suggest new pattern designs
3. 📝 Improve documentation
4. 🔧 Optimize existing code
5. ✨ Add new features

### Adding New Patterns
To add a new pattern:

1. Create a new function in `pattern_generator.cpp`:
   ```cpp
   void generateYourPattern(int size) {
       // Your pattern logic here
   }
   ```

2. Add menu option in `displayMenu()`:
   ```cpp
   cout << "11. Your Pattern Name" << endl;
   ```

3. Add case in `main()` switch statement:
   ```cpp
   case 11:
       generateYourPattern(size);
       break;
   ```

4. Update README with pattern example

### Code Style Guidelines
- Use meaningful variable names
- Comment complex logic
- Follow existing indentation (4 spaces)
- Keep functions under 50 lines when possible
- Test with various input sizes

---

## 📄 License

This project is licensed under the **MIT License** - free for educational and commercial use.

### MIT License Summary
- ✅ Commercial use allowed
- ✅ Modification allowed
- ✅ Distribution allowed
- ✅ Private use allowed
- ⚠️ No warranty provided

---

## 👨‍💻 Author & Credits

**Created by:** Programming Education Initiative
**Purpose:** Demonstrate C++ fundamentals through practical application
**Date:** November 2025
**Version:** 1.0.0

### Acknowledgments
- Inspired by classic ASCII art and pattern generation algorithms
- Built for educational purposes and coding practice
- Special thanks to the C++ community for best practices

---

## 📞 Contact & Support

**Found a bug?** Open an issue on GitHub
**Have questions?** Check the troubleshooting section
**Want to contribute?** See contributing guidelines above

---

## 🌟 Star History

If you find this project helpful, please consider giving it a star! ⭐

---

## 📊 Project Stats

- **Lines of Code**: 370+
- **Functions**: 15
- **Patterns**: 10
- **Input Validation**: Comprehensive
- **Platform Support**: Windows, Linux, macOS

---

<div align="center">

**Made with ❤️ and C++**

*Happy Pattern Generating!* 🎨✨

</div>
