# File I/O Basics

This README.md provides a brief overview of file input/output operations, file descriptors, and system calls in C.

## Table of Contents
1. [Introduction](#introduction)
2. [File I/O Operations](#file-io-operations)
3. [File Descriptors](#file-descriptors)
4. [Standard File Descriptors](#standard-file-descriptors)
5. [I/O System Calls](#io-system-calls)
6. [File Flags](#file-flags)
7. [File Permissions](#file-permissions)
8. [System Calls](#system-calls)
9. [Function vs System Call](#function-vs-system-call)

## Introduction

File input/output (I/O) operations are fundamental to many programming tasks. Understanding how to create, open, close, read, and write files is essential for effective C programming.

## File I/O Operations

In C, file I/O operations involve several key functions and concepts:

- `open`: System call to open a file.
- `close`: System call to close a file.
- `read`: System call to read data from a file.
- `write`: System call to write data to a file.

## File Descriptors

File descriptors are integer values that represent opened files in a process. They are used to identify and access files during I/O operations.

## Standard File Descriptors

There are three standard file descriptors:

- `STDIN_FILENO` (0): Standard input stream.
- `STDOUT_FILENO` (1): Standard output stream.
- `STDERR_FILENO` (2): Standard error stream.

## I/O System Calls

The primary system calls for file I/O are:

- `open`: Opens a file and returns a file descriptor.
- `close`: Closes a file using its file descriptor.
- `read`: Reads data from a file using a file descriptor.
- `write`: Writes data to a file using a file descriptor.

## File Flags

Flags such as `O_RDONLY`, `O_WRONLY`, and `O_RDWR` are used with the `open` system call to specify the access mode of the file.

## File Permissions

File permissions determine who can read, write, or execute a file. When creating a file with the `open` system call, permissions can be set using octal values (e.g., 0644).

## System Calls

A system call is a request to the operating system kernel to perform a specific task, such as file I/O. Examples include `open`, `close`, `read`, and `write`.

## Function vs System Call

- A function is a routine that performs a specific task within a program.
- A system call is a request to the kernel to perform a privileged task, such as I/O operations.
