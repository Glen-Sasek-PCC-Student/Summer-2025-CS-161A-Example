#! /bin/bash

trap "cleanup" EXIT

cleanup() {
  if [ -f main ]
  then
    rm main
  fi
  if [ -f your-output.txt ]
  then
    rm your-output.txt
  fi
}

cleanup

clang++ -o main $1

if [ -f main ]
then
  x=0
  test_count=$(ls -1 *expected.txt | wc -l)
  while [ $x -lt $test_count ]
  do
    (( x++ ))
    echo
    basename $1 | tr [:lower:] [:upper:]
    echo "~~~~~TEST $x~~~~~"
    ./main < test-${x}.txt # | sed '/Welcome/d' | sed '/Enter/d' | sed '/How/d' |  sed '/name/d' |sed -E 's/\?/?\n/g' | sed -E 's/:/:\n/g' > output.txt
    # sed '/Welcome/d'  test-${x}-expected.txt | sed '/Enter/d' | sed '/How/d' > expected.txt
    # diff -U 0 -w -B --label OUTPUT --label EXPECTED output.txt expected.txt && echo OK
    # rm expected.txt
  done
fi

cleanup
