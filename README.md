# 🐚💻 Mini Shell using C++

This project implements a **custom Unix-like command-line shell** built entirely in C++.  
It supports command execution, pipelines, I/O redirection, background job control, and several built-in commands — providing a hands-on exploration of how real Linux shells work internally.

---

## 📂 Files

### ✅ myshell.cpp
- Main source file of the project.
- Implements core shell functionalities:
  - Command parsing and execution using `fork()`, `execvp()`, and `waitpid()`.
  - Supports **input/output redirection** using `dup2()` and `open()`.
  - Handles **pipelines** via `pipe()`.
  - Manages **background and foreground processes**.
  - Integrates built-in commands like:
    - `cd`, `exit`, `history`, `jobs`, `fg`, `bg`, `export`.

### ✅ Built-in Commands Overview
| Command  | Usage              | Description |
|----------|--------------------|-------------|
| `cd`     | `cd [dir]`         | Change directory (default: HOME). |
| `exit`   | `exit`             | Exit the shell. |
| `history`| `history`          | Show command history. |
| `jobs`   | `jobs`             | List running background jobs. |
| `fg`     | `fg [job_id]`      | Bring job to foreground. |
| `bg`     | `bg [job_id]`      | Resume stopped job in background. |
| `export` | `export VAR=value` | Export environment variable. |

---

## 🚀 Features

- Execute any standard Linux commands (`ls`, `cat`, `grep`, etc.)
- Chain commands using **pipes (`|`)**
- Perform **I/O redirection**:
  - `< input.txt` for input
  - `> output.txt` for overwrite
  - `>> output.txt` for append
- Run commands in **background** using `&`
- Maintain command **history**
- Manage **jobs, foreground/background tasks**
- Implemented using core **Linux system calls**: `fork`, `execvp`, `pipe`, `dup2`, and `waitpid`

---

## ⚙️ Installation

### 🧰 Prerequisites
- **Linux / POSIX environment**
- **g++ compiler** (tested on g++ 11.3.0 or higher)

### 🧪 Setup
git clone https://github.com/Vraj2309/Mini-Shell.git
cd Mini-Shell
g++ -std=c++17 -Wall -Wextra -o myshell myshell.cpp
./myshell

text

---

## 🧠 Example Usage

myshell:/home/user$ ls -l
myshell:/home/user$ cat file.txt | grep "example"
myshell:/home/user$ sort < input.txt > output.txt
myshell:/home/user$ sleep 5 &
myshell:/home/user$ jobs
myshell:/home/user$ fg 1
myshell:/home/user$ export PATH=/usr/local/bin:$PATH
myshell:/home/user$ history

text

---

## 🧬 Concepts Demonstrated

- Process creation and management (`fork`, `execvp`, `waitpid`)
- Inter-process communication via `pipe`
- File I/O and descriptor duplication using `dup2`
- Signal handling for background processes
- Implementation of classic shell features from scratch

---

## ⚡ Design Philosophy

Mini-Shell demonstrates **how a basic Unix shell works** under the hood — designed as an educational project for students learning **Operating Systems**, **Systems Programming**, and **Linux internals**.

Key challenges include:
- Pipeline chaining through multiple processes.
- Proper file descriptor management.
- Background job handling and signal forwarding.
- Error management without external libraries.

---

## 🛠 Future Enhancements

- Persistent command history file.
- Support for command-line autocompletion.
- Improved quoting/parsing mechanics.
- Additional built-in commands.
- Integration with a Makefile build system.

---

## 📜 License

This project is licensed under the **MIT License**.  
See the [LICENSE](LICENSE) file for more details.

---

## 👨‍💻 Author

Developed by **Vraj Patel**

---

> 🧩 *“Mini-Shell is a deep-dive experiment into how Linux commands, processes, and pipes truly work behind the scenes.”*