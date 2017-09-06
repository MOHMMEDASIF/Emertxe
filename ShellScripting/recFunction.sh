#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program takes multiple No.of arguments and uses "echo $1" to print them using recursive funtion
<<ExpectedInput
	Example:	./filename.sh 5 2 4 1 n kj i




ExpectedInput

<<ExpectedOutput
	
	Example:	5
			2
			4
			1
			n
			kj
			i




ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh


if [ $# -gt 0 ] 
then
#This Function gets the argument and prints the result in the terminal
	function display()
	{
		echo $1
	}




#argument list from the command line are passes to display function using loop
	echo -e  "\n\n[OUTPUT]Arguments that are passed in command lines are[OUTPUT]"
	for((i=1; i<=$#; i++))
	do
		eval val="\$$i"
		display $val
	done

#calling a function from " exit.sh" file
	exit_program recFunction.sh
else
#error message if the arguments are not passed
	echo "[ERROR]Please pass an arguments to perform the operation[ERROR]"
	exit_program recFunction.sh

fi


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





