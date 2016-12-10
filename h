#!/usr/bin/env bash

_h () {
  local cur=$2
  local _items
  local pwd=$PWD
  cd "$HOME"/git/gipcompany/work/help
  _items=($(compgen -f -- "$cur"))
  COMPREPLY=("${_items[@]##*/}")
  cd "$pwd"
}

complete -o nospace -F _h h
