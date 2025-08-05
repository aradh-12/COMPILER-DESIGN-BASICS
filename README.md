# COMPILER-DESIGN-BASICS


**COMPANY:** Codtech IT Solutions  
**NAME:** Aradhya Verma  
**INTERN ID:** CT04DZ475  
**DOMAIN:** C++ Programming  
**DURATION:** 4 Weeks  
**MENTOR:** Neela Santhosh  

A stack-based expression compiler built in C++ that parses and evaluates arithmetic expressions entered by the user. It supports proper operator precedence, nested parentheses, and robust error handling.

---

## 🚀 Overview

This command-line compiler interprets and evaluates arithmetic expressions using C++ STL stacks and string manipulation. It applies classical infix parsing techniques and handles edge cases such as divide-by-zero errors with modular logic and professional code structure.

Whether you're exploring compiler fundamentals or refining parsing techniques, this tool is a hands-on implementation of key concepts from compiler design.

---

## ✨ Key Features

- 🧮 **Arithmetic Evaluation** – Supports `+`, `-`, `*`, `/` operators  
- 🧩 **Parentheses Support** – Correctly processes nested expressions  
- ⛓️ **Operator Precedence** – Implements standard mathematical order of operations  
- ⚠️ **Error Handling** – Detects and throws runtime errors (e.g., divide by zero)  
- 📦 **Modular Design** – Uses reusable functions like `applyOperation()` and `evaluate()`  

---

## 🛠️ Technology Stack

**Language:**  
- C++

**Libraries Used:**  
- `iostream`  
- `string`  
- `stack`  
- `cctype`

**Tools Used:**  
- g++ (GNU Compiler Collection)  
- Terminal or Command Prompt  
- VS Code (Recommended)

---

## 📁 Project Structure

```
Task4_Compiler basic design/
├── main4.cpp         # Source code with menu-based logic  
├── calculator.cpp  # Finalized version with clean logic and structure
└── README.md        # Project documentation  
```

---

## ⚙️ Quick Start

### 🔧 Prerequisites

- C++ compiler (e.g., g++)
- Command line access

### ▶️ Compilation


```bash
g++ calculator.cpp -o expressionCompiler
```

### ▶️ Execution

```bash
./expressionCompiler
```

---

## 🧪 Sample Interaction

```
Enter an arithmetic expression: (3 + 5) * (2 - 4) / 2  
Result: -8

Enter an arithmetic expression: 10 / (5 - 5)  
Error: Divide by zero
```

---

## 🌍 Real-World Use Cases

- 📚 **Learning Tool** – Understand compiler components like tokenizing and evaluation
- 🔧 **Utility Scripts** – Embed lightweight expression calculators in CLI tools 
- 🧪 **Prototyping** – Prototype infix parsing or basic interpreters
- 📁 **Log Management** – Showcase fundamentals of compiler design principles
- 🧑‍💻 **Interview Prep** –  Demonstrate stack-based logic and parsing techniques
---

## 🧠 Architecture & Logic Flow

### 📌 Program Flow

1. Expression input taken via getline()
2. Tokens parsed and sent to operand/operator stacks
3. Parentheses and precedence handled with custom logic
4. Result evaluated and returned
5. Runtime errors thrown for invalid operations

---

## 📊 Performance & Design

- ⚡ **Efficient** –Low memory footprint, fast evaluation
- 🎯 **Lightweight** – Easy-to-read functions that separate concerns
- 🛡️ **Robust** – Gracefully fails on invalid input or unsafe operations
- 👨‍💻 **Simple UI** –  Clean naming and comments for easy maintenance


---

## 🔧 Configuration & Customization

-📋 Switch Input Source – Replace getline() with file input for batch processing
-🧱 Extend Grammar – Add support for variables or assignments (x = 5 + 3)
-🎨 Debug Mode – Print internal stack states for educational tracing
-📂 Output Logs – Save results to a file for multiple expression runs


---

## ✅ Testing Guidelines

### Manual Testing

Compile and run the tool
Test expressions with all operator combinations
Use deeply nested parentheses to test precedence
Check for empty input and divide-by-zero errors
Validate spacing and character formatting resilience
---

## 🚧 Future Enhancements

🔢 Add support for floating-point numbers
📦 Introduce variable storage and evaluation
📈 Add history and multi-expression mode
🖥️ GUI wrapper (e.g., with SFML or Qt) for visual interaction
⚙️ Compiler Optimization Passes (constant folding, expression simplification)

---

## 🤝 Contributing

Contributions are welcome! Fork this project and build new features or improvements.
### 💡 How to Contribute

```bash
git clone https://github.com/aradhyaverma/expression-compiler.git
cd expression-compiler
git checkout -b feature/YourFeature
# Make changes and commit
git push origin feature/YourFeature
# Create a Pull Request!
```

---

## 📄 License

This project was created for educational purposes under Codtech’s Internship Program. See the LICENSE file for details.

---

## 👨‍💻 Author

**Aradhya Verma**  
Aradhya Verma C++ Developer | Codtech Intern – Task 4 Specialized in writing modular compilers and building clean, portfolio-ready projects
---

## 🙏 Acknowledgments

-Codtech IT Solutions for the opportunity
-Neela Santhosh for guidance and mentorship
-Stack-based expression parsing tutorials
-Internship community for support and feedback


### 🔗 Gallerry

https://github.com/aradh-12/COMPILER-DESIGN-BASICS/issues/1
