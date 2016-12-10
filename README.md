# h

## Introduction

Hey, `bash` lovers! I just created a simple bash completion function called `h`(help).

`h` can complete files and directories in a specific directory.

```bash
$ git clone git@github.com:gipcompany/h.git
$ tree h
h
├── README.md
├── h
└── help
    ├── english
    │   ├── apple.md
    │   └── banana.md
    └── tech
        ├── apache.md
        └── bash.md

3 directories, 6 files
$ ./h/h
```

However, the current `h` command can't work correctly.

## Problem

Below is the current behaviour.

```bash
$ h tech/ <tab>
tech/apache.md   tech/bash.md
```

The problem is that each completed file has its parent directory name, right? I don't want it.

## Expectation

Here is my expecting behaviour.

```bash
$ h tech/ <tab>
apache.md   bash.md
```

How should the code be fixed? I really need your `help`!
