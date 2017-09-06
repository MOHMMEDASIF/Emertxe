#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------- Expected solution -----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This program translates the case of both directory and files into Upper and Lower case

<<ExpectedInput

	Example:	bash filename.sh



ExpectedInput

<<ExpectedOutput

	Example:	You have files like File.txt, MyScript.SH MyFile007.txt and folders like dir/, Assign1/,
			and newfolder.These files and folders will be renamed as following
			file.txt, myfile007, myscript.sh, DIR/, ASSIGN1/, and NEWFOLDER/



ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
#source exit.sh

	lowerCaseDir=(`find . -type d | cut -d '.' -f '2' |cut -d '/' -f 2`)
	upperCaseDir=(`find . -type d | cut -d '.' -f '2'| cut -d '/' -f 2 | tr [:lower:] [:upper:] `)
	upperCaseFile=(`find . -type f | cut -d '/' -f '2'`)
	lowerCaseFile=(`find . -type f |  cut -d '/' -f 2 | tr [:upper:] [:lower:]`)



	for((i=0;i<${#upperCaseFile[@]}; i++))
	do
		if [	${upperCaseFile[i]} == ${lowerCaseFile[i]}	 ]
		then
			echo -e "\nFile ${lowerCaseFile[i]} is already present"
		else
			 `mv  	${upperCaseFile[i]}  ${lowerCaseFile[i]}`
		
		fi
	done




	for((i=0;i<${#upperCaseDir[@]}; i++))
	do
		if [ ${upperCaseDir[i]} == ${lowerCaseDir[i]}	 ]
		then
			echo -e "\nDirectory ${lowerCaseDir[i]} is already present"
		else
		 `mv  	${lowerCaseDir[i]}  ${upperCaseDir[i]}`
		fi
	done


#calling a function from " exit.sh" file
#exit_program dirFileCase.sh


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------

