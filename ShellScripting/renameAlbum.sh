#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program renames the file of the directories by getting the newname of the file and sequences them accordingly
<<ExpectedInput

	Example:	bash filename.sh newfilename



ExpectedInput

<<ExpectedOutput
	
	Example:	./rename_album.sh day_out
			After this all .jpg files in current directory will be renamed as
			day_out_001.jpg day_out_002.jpg day_out_003.jpg



ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh

#This code finds the list of file that are in .jpeg format 
files=(`find . -name "*.jpeg" | cut -d "/" -f 2`)

#validates the arguments
if [ $# -eq 1 ]
then

#This code renames the existing filename into new file-name 
	for((i=0; i<${#files[@]}; i++))
	do
		mv  ${files[i]}  $1\_00$i.jpeg
	done
else
	echo "Please pass Valid Arguments "

fi
#calling a function from " exit.sh" file
exit_program  renameAlbum.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





