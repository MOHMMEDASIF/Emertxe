#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This program takes n-integer value as command line argument and returns largest among them  
<<ExpectedInput
	
	syntax:		bash filename.sh arg1 arg2 arg3 . . . argN
	example:	bash compareIntegers.sh 40 90 1 5 60	
	


ExpectedInput

<<ExpectedOutput
	
	example:	Largest Number among given intergers is 90



ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------

#!/bin/bash

source exit.sh

if [ $# -gt "0" ] #validates whether the argument is passed as an command line argument
then 	

	declare -a array=( "$@" ) #argument values are captured and pushed into an array
	largest=${array[0]} #first value is initalized as an largest number initally

#compare the initalized largest value with n-integer values	
	for((i=1; i<${#array[@]} ;i++))
	do
	
		if [ $largest -lt ${array[i]} ]
		then
			largest=${array[i]}
		elif [ $largest -gt ${array[i]} ]
		then
			largest=$largest
		fi
	done 



#print the final largest value among the given n-integers after comparing
   	clear
	echo -e "Largest number in n-integer value is:\t$largest"
	
else
#print error message saying argument are not passed 
	clear
	echo -e "\n\n\n\n\t\t\t\t********************\tTry again with Passing an Argument\t****************************\t\t\t"
	echo -e "\t\t\t********************\t\t\tThank you\t\t*************************\t\t\t\t\n\n\n\n"
	exit
fi


exit_program $0

<<comment
#prompt the user to continue or to exit and read the value of the user in a variable
echo "Do you want to continue?[Y/N]"
read input 
if [ $input = "Y" ]
then
         echo "Enter the expression {syntax:-arg1 arg2 . . argN e.g:70 50 20}"
         read arguments
         bash compareIntegers.sh $arguments
else
         echo "Program has stopped executing"
         echo "Thank you For using \"Largest number finding\" ;-)"
         exit
 fi


comment



#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





