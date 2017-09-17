#!/bin/bash
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Expected Solution From  Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#This Script takes the result and display the user-score 


#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Beginning of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


source color.sh


if [ $# -eq 7 ]
then

	 echo -e "\n$green$bold                     [Test-SuccessFully Completed]                        $normal"
         echo -e "$bold$blue                              Result                                      $normal"
         echo -e "$green                                                                          $normal"
         echo -en "$green                                                           $rg_red Hello  $normal"
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


	echo -e "[Enter Your Option]:"
	read  user_input

case $user_input in

"Y")	bash test.sh $1 $2 $3 $4 $5 $6;;
"N")	bash profile_page.sh $1 $2 $3 $4 $5 $6;;
*)	echo -e "\n$red[ERROR]$normal INVALID OPTION $red[ERROR]$normal\n\n" 
	bash test_result.sh $1 $2 $3 $4 $5 $6 $7 ;;

esac
else
	echo -e  "\n\n$bold Please Sign-in or Log-in to Take a Test $normal" 
	bash index_page.sh
fi

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> End of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
