#!/bin/bash 

echo "Enter No.of files to create "
read number


for((i=0; i<=$number ;i++))
do

touch DSC_$i\.jpeg

done
