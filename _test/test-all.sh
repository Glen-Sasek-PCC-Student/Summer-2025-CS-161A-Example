#! /bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

PROJ_ROOT=$SCRIPT_DIR

SOURCE_DIR=$PROJ_ROOT/src

pushd $SOURCE_DIR > /dev/null

fix_filenames () {
  for x in *.pdf; 
  do 
    mv "$x" $(echo $x | awk '{print $3 "-" $6 "-" $7}' | awk -F '-' '{print $1 "-" $3 ".pdf"}');
  done
  
  for x in *.cpp; 
  do 
    mv "$x" $(echo $x | awk '{print $3 "-" $6 "-" $7}' | awk -F '-' '{print $1 "-" $3 ".cpp"}');
  done

  for x in *.txt; 
  do 
    mv "$x" $(echo $x | awk '{print $3 "-" $6 "-" $7}' | awk -F '-' '{print $1 "-" $3 "txt.cpp"}');
  done
}

while getopts "f" option; do
   case $option in
      f) 
          fix_filenames
          ;;
   esac
done
shift $((OPTIND-1))


for x in *.cpp; 
do 
  if [[ "$x" < "$1" ]]
  then
    echo "SKIPPING: $x" 
    continue;
  fi
  echo "FILE: $x"
  pushd $PROJ_ROOT > /dev/null
  . ./run-tests.sh $SOURCE_DIR/$x
  popd > /dev/null
  read -p "Press enter to continue..."
done

