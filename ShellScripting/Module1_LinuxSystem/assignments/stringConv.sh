#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program Takes an input_file as an input and converts the string into UPPER_CASE and lower_case 
<<ExpectedInput

	Example:	bash filename.sh input_file.sh
		#content of input_file.sh
			asiF did his engineering in Alpha
			college of enGinEering	
			
			1.TO_UPPER_CASE
			2.to_lower_case

ExpectedInput

<<ExpectedOutput
	Example:	if the input is 1 then
		#content of input_file.sh should contain
			ASIF DID HIS ENGINEERING IN ALPHA
			COLLEGE OF ENGINEERING



ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh

#validates the user to pass an arguments
if [ $# -eq 1 ]
then

#reads the users option
	echo -e "\n\e[44m[INPUT]\e[0m\tPlease Select an option\t\e[44m[INPUT]\e[0m\n\t1.TO_UPPER_CASE\n\t2.to_lower_case"
	read userOption

#validates the user option using case statements
case $userOption in


1)	cat $1|tr [:lower:] [:upper:] > new.txt && mv new.txt $1 
	echo -e "\e[42m[OUTPUT]\e[0m content of Input File AFTER OPERATION \e[42m[OUTPUT]\e[0m\n`cat $1`"
	exit_program stringConv.sh ;;

2)	cat $1|tr [:upper:] [:lower:] > new.txt && mv new.txt $1 
	echo -e "\e[42m[OUTPUT]\e[0m content of Input File AFTER OPERATION \e[42m[OUTPUT]\e[0m\n`cat $1`"
	exit_program stringConv.sh ;;
esac

else
	echo -e	"\e[41m[ERROR]\e[0m Please pass an input-file to Perform an operation \e[41m[ERROR]\e[0m"
	#calling a function from " exit.sh" file
	exit_program stringConv.sh
fi
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





