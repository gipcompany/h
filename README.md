# h

## Introduction

Hey, `bash` lovers! I just created a simple bash completion functon called `h`(help).

`h` can complete files and directories in a specific directory.

```bash
$ git clone git@github.com:gipcompany/h.git
$ ./h/h
```

However, the current `h` command can't work correctly.

## Problem

Below is the current behaviour.

```bash
$ h tech/ <tab>
tech/apache.md   tech/bash.md
```

See what the wrong part is? Each completed file has its parent directory name, right? I don't want it.

## Expectation

Here is my expecting behaviour.

```bash
$ h tech/ <tab>
apache.md   bash.md
```

How should the code be fixed? I really need your `help`!
