#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program Locks the Permission for group and Other users using chmod comment
<<ExpectedInput

	Example:	 bash filename.sh directory1



ExpectedInput

<<ExpectedOutput

	Example:	./file_lock.sh Dir/
			Before locking
			total 0
			rwrwr1
			biju biju 0 Jun 8 12:37 D2file1
			rwrwr1
			biju biju 0 Jun 8 12:37 D2file2
			rwrwr1
			biju biju 0 Jun 8 12:37 D2file3
			After locking
			total 0
			rw1
			biju biju 0 Jun 8 12:37 D2file1
			rw1
			biju biju 0 Jun 8 12:37 D2file2
			rw1
			biju biju 0 Jun 8 12:37 D2file3


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
#source exit.sh


#validates the command-line arguments and throws an error if not passed
if [ $# -gt 0 ]
then

#gets the file-name of current directory
	filename=(`find $1 -type f | cut -d "/" -f 2`)



#changes the permission of the each file of the current directory
	for((i=0; i<${#filename[@]}; i++))
	do
		`chmod 600 ${filename[i]}`
	done
	ls -al
else
	echo -e "\n\n\e[41m[ERROR]\e[0m Pass an argument to perform an operation \e[41m[ERROR]\e[0m"
fi





#calling a function from " exit.sh" file
#exit_program  lockFilePermission.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





