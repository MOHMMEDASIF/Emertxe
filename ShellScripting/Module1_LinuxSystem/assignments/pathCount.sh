#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program counts the executable files in $PATH environment Variable
<<ExpectedInput

	Example:	bash filename.sh



ExpectedInput

<<ExpectedOutput

	Example:	path_count.sh
			Current dir: /usr/local/sbin
			current count: 0
			Current dir: /usr/local/bin
			current count: 0
			Current dir: /usr/sbin
			current count: 205
			Current dir: /usr/bin
			current count: 1889
			Current dir: /sbin
			current count: 187
			Current dir: /bin
			current count: 159
			Current dir: /usr/games
			current count: 5
			Current dir: /usr/local/games
			current count: 0
			Total – 2445


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh

#path from the $PATH is Seperated using tr-command
file=(`echo $PATH | tr ":" "\n" `)


#checks the executable file for all the current directory
for((i=0; i<${#file[@]}; i++))
do	
	echo -e  "\n\ncurrent directory: ${file[$i]}"
	count=(`find ${file[$i]} -maxdepth 1 -executable | wc -l`)

	echo "current count:$count"
	totalCount=$(($totalCount+$count))
done
	

#prints the total count of the Executable Files
	echo -e "\n\n\e[42m[OUTPUT]\e[0m Total-Count:[$totalCount] \e[42m[OUTPUT]\e[0m"


#echo  $PATH | sed 's/[^:]//g'| tr -d '\012' | wc -c
#calling a function from " exit.sh" file
exit_program pathCount.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
