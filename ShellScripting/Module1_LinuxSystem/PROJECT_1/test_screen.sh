#!/bin/bash
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Expected Solution From  Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#This script gives instruction for the login-in user


#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Beginning of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#imports the required files
source color.sh
source exit.sh

#validates the sign_in from the user
if [ $# -eq 6 ]
then

#prompts the user for Instruction before Test and the user-input for start the Test 
	echo -e "\n$green$bold                       [SuccessFull Logged-IN]                            $normal"
	echo -e "$bold$blue                              INSTRUCTION                                 $normal"
	echo -e "$green                                                                          $normal"
	echo -en "$green                                                           $rg_red Hello  $normal"
	echo -en "$bold $1$normal\n"
	echo -e "$green                                                                          $normal"
	echo -e "$green                                                                          $normal"
	echo -e "$green$bold--> Each Question Carries 1 mark                                          $normal"
	echo -e "$green$bold--> No Negative Marks                                                     $normal"
	echo -e "$green$bold--> Each Question Has 30 Seconds To answer                                $normal"
	echo -e "$green$bold--> Un-Answered Question will Automatically marked as 0 marks             $normal"
	echo -e "$green$bold--> Time will be Started as you Enter [Y]                                 $normal"
	echo -e "$green$bold--> To Exit from [TEST] Please Enter [N]                                  $normal"
        echo -e "$green                                                                          $normal"
	echo -e "$green                           $normal$blue$bold ALL THE BEST !!!$normal$green                              $normal"
	echo -e "$green                                                                          $normal"

#prompt the user for the Choice
	echo -ne "\n[Enter Your Choice{Y/N}]:"
	read  test_input

#validates the choice
	case $test_input in

	"Y")	 bash test.sh $1 $2 $3 $4 $5 $6;;
	"N")	 clear
		 bash profile_page.sh $1 $2 $3 $4 $5 $6
	 	 exit	;;
	*)	 echo -e "\n\n$red[ERROR]$normal Invalid Input $red[ERROR]$normal\n\n"
		 bash test_screen.sh  $1 $2 $3 $4 $5 $6;;

	esac 
else
	echo -e "\n\n$red[ERROR]$normal Please Log-In $red[ERROR]$normal\n\n"
	bash sign_in_page.sh
fi

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> End of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
