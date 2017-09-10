#!/bin/bash

echo "Enter the files need to delete"
read extension

files=(`find . -name "$extension" | cut -d '/' -f 2 `)
echo "${files[@]}"

for((i=0; i<${#files[@]}; i++))
do


	rm ${files[i]}


done
