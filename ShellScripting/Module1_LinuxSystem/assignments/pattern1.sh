#!/bin/bash

#------------------------------------------------------------------------------------------------------------------------------------------------------------
#---------------------------------------------------------- Expected Solution -------------------------------------------------------------------------------
#------------------------------------------------------------------------------------------------------------------------------------------------------------
#This program takes N-value from the user and prints the pattern as shown below

<<Expectedoutput
 if n=4 then output is as shown below
	1
	1 2
	1 2 3
 	1 2 3 4
Expectedoutput

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------ Beginning Of the Program ---------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


source exit.sh
#prompt the user to enter the value of N and store it in the variable
echo "[INPUT]Enter the value of N[INPUT]"
read inputN


if [ $inputN -gt 0 ]
then
	echo "[OUTPUT]Expected Pattern is Shown Below[OUTPUT]"
	for ((row=1; row<=inputN; row++))
	do
	for ((col=1; col<=row; col++))
	do
		echo -en   "$col\t"
	done
		echo " "
	done
else
	echo "[ERROR]Invalid Input[ERROR]"
fi


exit_program pattern1.sh
#exit_program funtion performs the below code to make it ease of use
<<exitfunction
#prompt  the user to exit or continue
echo "Do you want to continue [Y/N] ?"
read inputOfUser

#validating the user input to exit or continue
if [ "$inputOfUser" ==  "Y" ]
then 
	bash pattern1.sh 
elif [ "$inputOfUser" ==  "N" ]
then
	exit
else 
	echo "invalid input "
	echo "Try with a valid input"
	bash pattern1.sh

fi
exitfunction

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------- End of the Program ---------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------

