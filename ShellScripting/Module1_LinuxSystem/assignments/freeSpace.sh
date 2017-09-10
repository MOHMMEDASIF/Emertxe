#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This program prints the names of any file-system which have less than 10% free space available
<<ExpectedInput

	Example:	bash filename.sh



ExpectedInput

<<ExpectedOutput

	Example:	./freespace.sh
			Filesystem /dev/sda5 have less than 10% freespace


ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh

#gets the value of fileSystem and the useage from df command
fileArray=(`df --output=source `)
usageArray=(`df  --output=pcent | cut -d '%' -f 1`)
count=0

#prompts the user for the Usage to calculate the freespace
echo -e  "\e[44m[INPUT]\e[0m Enter the usage \e[44m[INPUT]\e[0m"
read	inputUsage
	

#checks the array content which satisfies the condition 
for((i=1; i<${#usageArray[@]}; i++))
do

#if the usage is greater than the given value then print the freespace available 
	if [ "${usageArray[$i]}" -ge $inputUsage ]
	then
	count=1
	echo "file system \"${fileArray[i]}\"  has \"$((100-${usageArray[$i]}))%\" of freespace and used space of ${usageArray[$i]}%"
	fi


done


if [ $count -eq 0 ]
then
echo "No file System has usage of $((100-$inputUsage))% of freeSpace"
fi

#calling a function from " exit.sh" file
exit_program freeSpace.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





