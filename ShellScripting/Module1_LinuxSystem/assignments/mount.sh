#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This program determine whether a given file system or mount point is mounted
<<ExpectedInput

	Example:	bash filename.sh file-system



ExpectedInput

<<ExpectedOutput

	Example:	./mount_fs.sh /dev/sda2
			Filesystem /dev/sda2 is 98% used with 3298220 KB free.


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh


if [ $# -eq 1 ]
then

#gets information of the file-system 
	fileSystem=(`df --output=source`)
	fileAvailableSpace=(`df  --output=avail`)
	fileUsed=(`df --output=pcent `)
	count=0	

#gets the input-value from argument
	inputfile=$1


#compares the input filessytem with the existing filesystem
	for((i=1; i<${#fileSystem[@]}; i++))
	do
		if [ "${fileSystem[$i]}" == $inputfile ]
		then
			echo " Filesystem $1 is ${fileUsed[$i]} used with ${fileAvailableSpace[i]} KB free."
			count=1
		fi
	done


if [ $count -eq 0 ]
then
	echo -e "\e[41m[ERROR]\e[0m Please pass an valid argument to check \e[41m[ERROR]\e[0m"

fi


#calling a function from " exit.sh" file
exit_program mount.sh

else

	echo -e  "\e[41m[ERROR]\e[0m Pass An argument \e[41m[ERROR]\e[0m"
	exit_program mount.sh

fi
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
