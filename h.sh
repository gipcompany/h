_h () {
  local cur
  COMPREPLY=()
  cur=${COMP_WORDS[COMP_CWORD]}
  k=0
  i="${HOME}/git/h/help" # the directory from where to start
  for j in $( compgen -f "$i/$cur" ); do # loop trough the possible completions
    [ -d "$j" ] && j="${j}/" || j="${j} " # if its a dir add a shlash, else a space
    # echo $(basename ${j#$i/})
    COMPREPLY[k++]=$(basename ${j#$i/}) # remove the directory prefix from the array
  done
}
complete -o nospace -F _h h
