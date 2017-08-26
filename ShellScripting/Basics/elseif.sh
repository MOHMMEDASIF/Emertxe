#This Program demonstrates else-if statement

#!/bin/bash

#prompt the user to get the value of num1 and store it in a variable num1
echo "Enter the value of num1"
read num1

#prompt the user to get the value of num2 and store it in a variable num2
echo "Enter the value of num2"
read num2

#prompt the user to get the value of num3 and store it in a variable num3
echo "enter the value of num3"
read num3

#------------------------------------------------------------------ else-if syntax --------------------------------------------------------------------------
# 	if [ condition ]
#	then
# 		statement1
#	elif [ condition1 ]
#	then 
# 		statement2
#	.
#	.
#	.
#	elif [ conditionN ]
#	then 
#		statementN	
#	else
#		echo "invaid value"
#	fi
#------------------------------------------------------------------------------------------------------------------------------------------------------------

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

