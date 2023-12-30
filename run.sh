#!/bin/bash

if [ $# -lt 1 ]
then
  echo "[usage]: ./run.sh <file_path>"
  exit 1
else
  g++ $1
  ./a.out
  rm a.out
fi

exit 0
