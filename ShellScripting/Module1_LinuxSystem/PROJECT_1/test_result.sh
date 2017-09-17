#!/bin/bash
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Expected Solution From  Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#This Script takes the result and display the user-score 


#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Beginning of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#imports the required files
source color.sh

#validates for user-info and user-score after the test is taken
if [ $# -eq 7 ]
then

#page-layout
	 echo -e "\n$green$bold                     [Test-SuccessFully Completed]                        $normal"
         echo -e "$bold$blue                              Result                                      $normal"
         echo -e "$green                                                                          $normal"
         echo -en "$green                                                         $rg_red Welcome  $normal"
         echo -en "$bold $1$normal\n"
         echo -e "$green                                                                          $normal"
	 echo -e "$green$bold   --> Your Total Score is: $7                                             $normal"         
         echo -e "$green                                                                          $normal"
	 echo -e "$green                                                                          $normal"
         echo -e "$green                                                                          $normal"
         echo -e "$green$bold   *Enter [Y] to retake the Test                                          $normal"
	 echo -e "$green$bold   *Enter [N] to go to Profile Page                                       $normal"
         echo -e "$green                       $normal$blue$bold Congratulations !!!$normal$green                               $normal"
         echo -e "$green                                                                          $normal"

#prompts the user for the choice
	echo -ne "[Enter Your Option]:"
	read  user_input

#validate the user for the input
	case $user_input in

	"Y")	clear
		bash test.sh $1 $2 $3 $4 $5 $6;;
	"N")	clear
		bash profile_page.sh $1 $2 $3 $4 $5 $6;;
	*)	clear
		echo -e "\n$red[ERROR]$normal INVALID OPTION $red[ERROR]$normal\n\n" 
		bash test_result.sh $1 $2 $3 $4 $5 $6 $7 ;;

	esac
else
	clear
	echo -e  "\n\n$bold Please Sign-in or Log-in to Take a Test $normal" 
	bash index_page.sh
fi

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> End of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
