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

if [ $# -eq 1 ]
then
echo -e "\n[INPUT]\tPlease Select an option\t[INPUT]\n\t1.TO_UPPER_CASE\n\t2.to_lower_case"
read userOption


case $userOption in


1)	cat $1|tr [:lower:] [:upper:] > new.txt && mv new.txt $1 
	echo -e "[OUTPUT]content of Input File AFTER OPERATION[OUTPUT]\n`cat $1`"
	exit_program stringConv.sh ;;

2)	cat $1|tr [:upper:] [:lower:] > new.txt && mv new.txt $1 
	echo -e "[OUTPUT]content of Input File AFTER OPERATION[OUTPUT]\n`cat $1`"
	exit_program stringConv.sh ;;
esac

else
	echo 	"[ERROR]Please pass an input-file to Perform an operation[ERROR]"
	#calling a function from " exit.sh" file
	exit_program stringConv.sh
fi
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





