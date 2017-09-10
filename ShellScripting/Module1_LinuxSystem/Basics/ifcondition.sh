#This program Demonstrates if Statement

#!/bin/bash

#prompt the user to get the value of A and store it in a Variable
echo "Enter the value of A"
read A 

#prompt the user to get the value of B and store it in a variable
echo "Enter the value of B"
read B

#----------------------------------------------------------------- if-statement syntax-----------------------------------------------------------------------
#	if [ condition ]
#	then
#		statement
#	else
#		statement
#	fi
#------------------------------------------------------------------------------------------------------------------------------------------------------------


if [ $A -lt $B ]  #if (A>B)
then
echo "A is Lesser than B" #print A is greater
else	
echo "B is Lesser than A" #print B is greater
fi 


