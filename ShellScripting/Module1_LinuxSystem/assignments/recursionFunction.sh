#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This program prints the argument using recursivefunction
<<ExpectedInput

	Example:	bash filename.sh arg1 arg2 arg3



ExpectedInput

<<ExpectedOutput

	Example:	bash filename.sh 1 2 3 9
			1
			2
			3
			9


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh

	a=0
	array=("$@")
	temp=$#

function recursive()
{

if [ $a -lt $temp ]
then
	a=$(($a+1))
	echo $1
	recursive ${array[$a]}	

fi

}

recursive $@





#calling a function from " exit.sh" file
exit_program recursionFunction.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
