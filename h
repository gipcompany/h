#!/usr/bin/env bash

_h () {
  local cur
  COMPREPLY=()
  cur=${COMP_WORDS[COMP_CWORD]}
  k=0
  i="${HOME}/git/h/help"
  for j in $(compgen -f "$i/$cur"); do
    [ -d "$j" ] && j="${j}/" || j="${j}"
    COMPREPLY[k++]=${j#$i/}
  done
}
complete -o nospace -F _h h
