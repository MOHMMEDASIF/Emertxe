#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program Randomly selects the 20% of line-number from the given file and replaces it with "<--- DEL --->"
<<ExpectedInput

	Example:	bash filename.sh file



ExpectedInput

<<ExpectedOutput

	Example:	./replace_lines.sh main.c
			Before replacing
			#incude <stdio.h>
			int main()
			{
			printf(“Hello world\n”);
			}
			After replaced
			#incude <stdio.h>
			int main()
			{
			<Deleted>
			}


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh


if [ $# -eq 1 ]
then

#count no.of lines in the given input file
	lineCountOfFile=(`cat $1 | wc -l`)
	echo -e "\e[42m[OUTPUT]\e[0m Number of Lines in the given file $1 : $lineCountOfFile \e[42m[OUTPUT]\e[0m"

#calculate 20% from the input file
	twentyOfLine=`echo "$lineCountOfFile*20/100"|bc`
	echo -e "\e[42m[OUPUT]\e[0m Number of Lines that need to be replaced: $twentyOfLine \e[42m[OUTPUT]\e[0m"

#generate random numbers between the no.of lines from given files
	lineCountToReplace=(`shuf -i  1-$lineCountOfFile -n $twentyOfLine`)
	echo -e "\e[42m[OUTPUT]\e[0m lines that are  replaced :${lineCountToReplace[@]} \e[42m[OUTPUT]\e[0m"

#replaces the line with ---del--- in the file
	for((i=0 ; i<${#lineCountToReplace[@]}; i++))
	do
		sed  -i   "${lineCountToReplace[i]}s/.*/<---------------------------------------- DEL -------------------------------------------->/" $1
	done
#calling a function from " exit.sh" file
	exit_program replaceLines.sh
else
	echo -e "\n\n\e[41m[ERROR]\e[0m PASS AN FILE TO PERFORM AN OPERATION \e[41m[ERROR]\e[0m\n\n"
	exit_program replaceLines.sh
fi



#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
