Mini Shell: A Custom Unix-like Shell in C++

A fully functional, Unix-like shell implemented in C++ that supports command execution, pipelines, input/output redirection, background jobs, and several built-in commands. Designed to showcase practical knowledge of operating system concepts and Linux system calls.

Features

Execute commands: Run any standard Linux command (e.g., ls, grep, cat).

Command history: View previously executed commands with the history command.

Built-in commands:

cd [dir] – Change directory.

exit – Exit the shell.

history – Show command history.

jobs – List background jobs.

fg [job_id] – Bring a background job to the foreground.

bg [job_id] – Resume a paused job in the background.

export VAR=value – Set environment variables.

Background execution: Run commands in the background using &.

Pipelines: Chain multiple commands using | (e.g., ls | grep cpp).

Input/output redirection:

< input.txt – Redirect input from a file.

> output.txt – Redirect output to a file (overwrite).

>> output.txt – Redirect output to a file (append).

Installation

Clone the repository:

git clone https://github.com/your-username/myshell.git
cd myshell


Compile the project:

g++ myshell.cpp -o myshell


Run the shell:

./myshell

Usage Examples
myshell:/home/user$ ls -l
myshell:/home/user$ cat file.txt | grep "hello"
myshell:/home/user$ sort < input.txt > output.txt
myshell:/home/user$ sleep 10 &
myshell:/home/user$ jobs
myshell:/home/user$ fg 1
myshell:/home/user$ export PATH=/usr/local/bin:$PATH
myshell:/home/user$ history

License

This project is licensed under the MIT License – see the LICENSE
 file for details.

About

This shell project demonstrates:

Process creation and management (fork, execvp, waitpid).

File I/O and redirection (open, dup2).

Pipe-based inter-process communication.

Implementation of basic shell features like job control, background execution, and built-in commands.

It’s a great addition to your resume or portfolio if you want to show practical systems programming and OS knowledge.
