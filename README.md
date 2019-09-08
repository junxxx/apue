# apue
advanced programming in unix environment
## unix system overview
1. Unix architecture
1. Logging in
1. Files and directories
1. Input and output
1. Programs and processes
1. Error handling
1. User identification
1. Signals
1. Time values
1. System calls and library function

Program
an executable file residing on disk in a directory

## File I/O

[Process Table](http://www.ece.utep.edu/research/webfuzzy/docs/kk-thesis/kk-thesis-html/node28.html)

Q:
1. buffered I/O vs unbuffered I/O
    unbuffered I/O, each function invokes a system call into the kernel.

## Files and Directories
File types
1. Regular File.
1. Directory file.
1. Block special file.  A type of file providing buffered I/O access in fixed-size units to devices such as disk drives.
1. Character special file.
1. FIFO.
1. Socket. 
1. Symbolic link. A type of file that points to another file.

```
ls -l   check the last-modification times
ls -lu  check the last-access times
ls -lc  check the changed-status times
```

## Environment List
Environment list. global variable ```environ```
[Memory Layout of a C Program](https://www.geeksforgeeks.org/memory-layout-of-c-program/)
```
size(1) #reports the sizes (in bytes) of the text,data, and bss segment
```


