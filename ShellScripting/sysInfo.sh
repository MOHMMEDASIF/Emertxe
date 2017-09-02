#!/bin/bash
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#-------------------------------------------------------------Expected Solution-----------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#This Program Prints the information about the system needed by the User (like current user,shell directory,home directory,os name &version,etc...) 
<<ExpectedInput

	Example: 	Select the Option below to Display the Information
			1)Currently Logged User
			2)Shell Directory
			3)Home Directory
			4)OS name And OS version
			5)Current Working Directory
			6)Number Of users Logged-in
			7)Available Shells in System
			8)Hard disk Information
			9)CPU Information
			10)Memory Information
			11)File-Systm Information
			12)Currently running process(uid)
			


ExpectedInput

<<ExpectedOutput
	Example: if the selected option is 1 then
		 Currently Logged User is "emertxe"



ExpectedOutput


#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#------------------------------------------------------------Begining of the Program------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------


#import the exit.sh file to perform exit operation
source exit.sh



echo 	-e		"[INPUT]Select the Option below to Display the Information[INPUT]\n
			\t1)Currently Logged User\n
			\t2)Shell Directory\n
			\t3)Home Directory\n
			\t4)OS name And OS version\n
			\t5)Current Working Directory\n
			\t6)Number Of users Logged-in\n
			\t7)Available Shells in System\n
			\t8)Hard disk Information\n
			\t9)CPU Information\n
			\t10)Memory Information\n
			\t11)File-Systm Information\n
			\t12)Currently running process(uid)\n"
read userOption

<<comment
function display()
{





}

comment


case "$userOption" in

	1)	echo	-e	"\t[OUTPUT]Currently Logged User[OUTPUT]\n\t`whoami`";;
	2) 	echo 	-e 	"\t[OUTPUT]Shell Directory[OUTPUT]\n\t `echo $0`";;
	3) 	echo 	-e	"\t[OUTPUT]Home Directory [OUTPUT]\n\t $HOME";;
	4)	echo 	-e	"\t[OUTPUT]OS Information[OUTPUT]\n\t 
					 OS Name :`uname -ov|cut -d '-' -f 2 | cut -d ' ' -f 1`\n\t
					 OS Version : `uname -ov |cut -d '~' -f 2 | cut -d '-' -f 1 |cut -d ' ' -f 1`";;
	5)	echo 	-e	"\t[OUTPUT]Current Working Directory[OUTPUT]\n\t `pwd`";;
	6)	echo 	-e	"\t[OUTPUT]Number Of Users Logged In[OUTPUT]\n\t 
					 No.of Users:	`users|wc -w`
					 Users are:	`users`";;
	7)	echo 	-e	"\t[OUTPUT]Available Shells in System[OUTPUT]\n\n`cat /etc/shells`  ";;
	8)	echo 	-e	"\t[OUTPUT]Hard-Disk Information[OUTPUT]\n\n `df -h`";;
	9)	echo 	-e	"\t[OUTPUT]CPU-Information[OUTPUT]\n\n `df -h`";;
	10)	echo 	-e	"\t[OUTPUT]Memory Information[OUTPUT]\n\n\n `du -a`";;
	11)	echo 	-e	"\t[OUTPUT]File-System Information[OUTPUT]\n\n`du -a`";;
	12)	echo 	-e	"\t[OUTPUT]Current Running Process[OUTPUT]\n\n `ps -aux|more`";;
	*) 	echo "Invalid Option"
		exit_program sysInfo.sh;;
esac


#calling a function from " exit.sh" file
exit_program sysInfo.sh

#-----------------------------------------------------------------------------------------------------------------------------------------------------------
#----------------------------------------------------------End of the Program-------------------------------------------------------------------------------
#-----------------------------------------------------------------------------------------------------------------------------------------------------------





