#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program prints the fifth line of the /etc/passwd
<<ExpectedInput

	Example:	bash filename.sh



ExpectedInput

<<ExpectedOutput

	Example:	[OUTPUT] CONTENT IN LINENUMBER 5 [OUTPUT]
			sync:x:4:65534:sync:/bin:/bin/sync



ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh

#prompt the user for the line number
echo -e  "\e[44m[INPUT]\e[0m ENTER THE LINE NUMBER TO PRINT \e[44m[INPUT]\e[0m"
read lineNumber


if [ $lineNumber -gt 0 ]
then
#pass theline number to search the appropriate line and dispaly it
	echo -e  "\e[42m[OUTPUT]\e[0m CONTENT IN LINENUMBER $lineNumber \e[42m[OUTPUT]\e[0m"
	sed -n $lineNumber\p /etc/passwd 
	echo " "
else
	echo -e  "\e[41m[ERROR]\e[0m Please Pass an Line-Number to perform the operation \e[41m[ERROR]\e[0m"
fi
#calling a function from " exit.sh" file
exit_program fifthLine.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
