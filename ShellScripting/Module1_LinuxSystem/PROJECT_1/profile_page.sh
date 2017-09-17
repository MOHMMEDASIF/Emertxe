#!/bin/bash
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Expected Solution From  Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#This Script shows the user_name and ask to "re-take test or edit the user_details"


#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Beginning of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


source color.sh

if [ $# -eq 6 ]
then

	   echo -e "\n$green$bold                          [Test-Software]                                 $normal"
           echo -e "$bold$blue                              Profile                                     $normal"
           echo -e "$green                                                                          $normal"
           echo -en "$green                                                           $rg_red Hello  $normal"
           echo -en "$bold $1$normal\n"
           echo -e "$green                                                                          $normal"
	   echo -en "[Name]:$1"
	   echo -en "\n[E-mail-ID]:$2"
	   echo -en "\n[Mobile-No]:$3"
	   echo -en "\n[DOB]:$4"
	   echo -en "\n[Place]:$5"		
	   echo -e "\n$green                                                                          $normal"
           echo -e "$green                                                                          $normal"
           echo -e "$green$bold   *Enter [T] to take the Test                                            $normal"
           echo -e "$green$bold   *Enter [E] to Edit Profile Details                                     $normal"
           echo -e "$green                                                                          $normal"
	   echo -en "$bold[Enter your Choice]$normal:"  
 	   read user_input


case $user_input in

"T")	bash test_screen.sh $1 $2 $3 $4 $5 $6	;;
"E")    bash edit_page.sh $1  $2 $3 $4 $5 $6;;
*)	echo  -e "\n$red[ERROR]$normal INVALID INPUT $red[ERROR]$normal"
	bash profile_page.sh $1 $2 $3 $4 $5 $6;;

esac

else 
	echo -e "\n$red[ERROR]$normal Sign-in or Log-in $red[ERROR]$normal\n"
	bash index_page.sh
fi









#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> End of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
