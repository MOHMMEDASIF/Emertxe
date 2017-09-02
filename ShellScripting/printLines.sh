#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program prints the content of the file from the given lineNumber to next n-lines of that file from the file
<<ExpectedInput
	Example:	bash filename.sh 5 2 inputFile.txt
		#5 is the starting point of the line that is need to printed
		#2 is the next 2 lines of that file need to print
		#inputFile.txt is an input-file for this Script
		#content of the File inputFile.txt
			asif
			is
			my 
			name
			and 
			i
			did
			my 
			engineering
			in 
			bangalore
		


ExpectedInput

<<ExpectedOutput

	Example:	if input is as shown above then
		#output prompt should have below lines printed in Terminal
			and
			i


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh



if [ $# -eq 3 ]
then
	if [ $1 -gt 0 -a $2 -gt 0 ]	
	then
		headCount=$(($1+$2))
		head -n  $headCount $3 | tail -n $2 | cat 
		exit_program printLines.sh
	else
		echo -e  "\n\n\t\t[ERROR]arguments missing![ERROR]\nUsage: ./file_filter.sh start_line uptoline filename\nFor eg. ./20_file_filter.sh 5 5 <file>"
		exit_program printLines.sh
	fi	


else
	echo "[ERROR]Please Pass an argument to perform an Operation[ERROR]"
	#calling a function from " exit.sh" file
	exit_program printLines.sh

fi


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





