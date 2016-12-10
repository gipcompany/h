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
        ├── bash.md
        ├── has\ space.md
        ├── other.md
        ├── ruby_literals.md
        ├── ruby_object_to_javascript_json.md
        └── subdir
            └── subfile.md

$ ./h/h
```

However, the current `h` command can't work correctly.

## Problem

Below is the current behaviour.

```bash
$ h tech/ <tab>
space.md         tech/bash.md   tech/other.md           tech/ruby_object_to_javascript_json.md
tech/apache.md   tech/has       tech/ruby_literals.md   tech/subdir/
```

The problem is that each completed file has its parent directory name, right? I don't want it.

## Expectation

Here is my expecting behaviour.

```bash
$ h tech/ <tab>
bash.md     other.md                  ruby_object_to_javascript_json.md
apache.md   has    ruby_literals.md   subdir/
```

How should the code be fixed? I really need your `help`!
