#!/bin/bash

#This Program demonstrates else-if statement



#read 
echo "Enter the value of num1"
read num1

echo "Enter the value of num2"
read num2

echo "enter the value of num3"
read num3

if [ $num1 -gt $num2 -a $num1 -gt $num3 ]
then 
	echo "Number 1 is Greatest"
elif [ $num2 -gt $num1 -a $num2 -gt $num3 ]
then 
	echo "Number 2 is Greatest"
elif [ $num3 -gt $num1 -a $num3 -gt $num2 ]
then 
	echo "Number # is Greatest" 
 else
	echo "Invalid Input"
fi

