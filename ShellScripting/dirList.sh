#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program Takes n-number of directory name and prints the list of file under the file
<<ExpectedInput
	Example:	bash filename.sh Dir1



ExpectedInput

<<ExpectedOutput
	Example:	In directory Dir1/:
			Dfile1
			Dfile2
			Dfile3



ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh



#validates the command-line argument, if directory name is not passed the print content of working directory 
if [ $# -eq 0 ]
then
	echo -e "\n\t[OUTPUT]CONTENT OF THE PRESENT  DIRECTORY[OUTPUT]"
	find . -maxdepth 1 | rev | cut -d '/' -f 1 | rev
else

#performs the display operation for all the input directories
	for((i=1; i<=$#; i++))
	do
		echo $var1
		 echo -e "\n\t[OUTPUT]CONTENT OF THE DIRECTORY[OUTPUT]"
		 
		
		 eval var=\$$i
	 	 find $var -maxdepth 1 |rev | cut -d '/' -f 1 | rev

	done

fi





#calling a function from " exit.sh" file
exit_program dirList.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





