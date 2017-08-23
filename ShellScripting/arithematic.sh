#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------ Expected solution ----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------

#This program is an example to perform Arithematic operation (+,-,*,/,%)

<<ExpectedInput
	syntax:-	bash filename.sh operator1 operant operator2
	example:-	bash arithematic.sh 12 + 2
ExpectedInput

<<ExpectedOutput
	syntax:-	Arithematic Operation Performed is operant
			operator1+operator2=result	
	example:-	Arithematic operation performed is +
			12+2=14
ExpectedOutput





#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#---------------------------------------------------- Starting of the Program -------------------------------------------------------------------------------
#----------------------------------------------------------------------------------------------------------------------------------------------------------

#!/bin/bash



#below statement validates the count of the argument
if [ "$#" -eq 3 ]
then 
	operator1=$1	#argument one is passed to an variable operator1
	operator2=$3	#argument three  is passed to an variable operator2
	operant=$2	#argument two is passed to an variable operant




#case statement identifies "which operant it belongs to in arithematic operation"
case "$operant" in
	
	"+") result=`echo "$operator1 + $operator2" | bc`;;
	"-") result=`echo "$operator1 - $operator2" | bc`;;
	"/") result=`echo "$operator1 / $operator2" | bc`;;
	"*") result=`echo "$operator1 * $operator2" | bc`;;
	"%") result=`echo "$operator1 % $operator2" | bc`;;
	*)   echo "Invalid operant "
	     echo " Try with new operant" 
	         exit ;;
 
esac



#prints the result in the terminal with oppropriate message
echo "Arithematic operation performed is $operant"
echo "Therefore $operator1$operant$operator2=$result"






#prompt the user to continue or to exit and read the value of the user in a variable
#<<doubt
#how to perform the continues operation by taking argument as an input and invoking the 
echo "Do you want to continue?[Y/N]"
read input

if [ $input = "Y" ]
then 
	echo "Enter the expression {syntax:-operator1 operant operator2 e.g:1 + 2}"
	read arguments
	bash arithematic.sh $arguments
else
	echo "Program has stopped executing"
	echo "Thank you For using Arithematic operation ;-)"
	exit
fi

#doubt (doubt was cleared by trying out new ways)


#prompt the user by saying to pass an argument
else
	echo "Re-try with \"bash filename.sh operator1 operant operator2\" "
	echo "e.g:bash filename.sh 1 + 2 "
	echo "to perform the operation"
fi



#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#---------------------------------------------------------------End of the program -------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
