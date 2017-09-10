#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#---------------------------------------------------------------Expected Solution --------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This progarm takes the N-value from the user and prints the pattern as shown below
<<Expectedoutput

if N = 4
	1
	2 3
	4 5 6 
	7 8 9 10

Expectedoutput

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------------ Begining of the Program ----------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------

source exit.sh 

#prompt the user to get the value of N and store it in the variable
echo "[INPUT]Enter  the value of N[INPUT]"
read inputN


if [ $inputN -gt 0 ]
then
	count=1
	echo "[OUTPUT]The Patter is Executed as shown below[OUTPUT]"
	for(( row=1; row<=$inputN; row++ ))
	do
	for(( col=1; col<=row; col++ ))
	do
		echo -ne "$count\t"
		count=$(($count+1))
	done
		echo " "
	done
else
	echo "[ERROR]Invalid Input[ERROR]"
fi

exit_program pattern2.sh

<<exitFunction
#prompt  the user to exit or continue
echo "Do you want to continue [Y/N] ?"
read input 

#validating the user input to exit or continue
if [ "$input" ==  "Y" ]
then
         bash pattern1.sh
elif [ "$input" ==  "N" ]
 then
         exit
else
         echo "invalid input "
         echo "Try with a valid input"
         bash pattern1.sh
fi
exitFunction
