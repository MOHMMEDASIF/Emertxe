#!/bin/bash
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Expected Solution From  Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#This script gives instruction for the login-in user


#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Beginning of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

source color.sh
source exit.sh

echo -e "$green$bold                          [SuccessFull Logged-IN]                         $normal"
echo -e "$bold$blue                                 INSTRUCTION                              $normal"

echo -en "$green  \t\t\t\t\t\t\t $rg_red Hello  $normal"
echo -en "$bold $1$normal\n"
echo -e "$green  \t\t\t\t\t\t\t\t\t  $normal"
echo -e "$green  \t\t\t\t\t\t\t\t\t  $normal"
echo -e "$green$bold--> Each Question Carries 1 mark                              \t\t  $normal"
echo -e "$green$bold--> No Negative Marks                                         \t\t  $normal"
echo -e "$green$bold--> Each Question Has 30 Seconds To answer                    \t\t  $normal"
echo -e "$green$bold--> Un-Answered Question will Automatically marked as 0 marks \t\t  $normal"
echo -e "$green$bold--> Time will be Started as you Enter [Y]                     \t\t  $normal"
echo -e "$green$bold--> To Exit Please Enter [N]                                  \t\t  $normal"
echo -e "$green  \t\t\t\t\t\t\t\t\t  $normal"
echo -e "$green                              $normal$blue$bold ALL THE BEST !!!$normal$green                           $normal"
echo -e "$green  \t\t\t\t\t\t\t\t\t  $normal"


echo -ne "\n[Enter Your Choice{Y/N}]:"
read  test_input

case $test_input in

"Y")	 bash test.sh  	;;
"N")	 clear
 	 echo -e "\n\n\n\t\t\t\t**********\t$yellow This program has stopped executing as per your input $normal\t**********\t\t\t"
	 echo -e "\n\t\t\t\t\t**********\t $yellow Thank you for using [Test-Software] $normal \t**********\t\t\t\n"  
	 exit	;;
*)	 echo -e "\n\n$red[ERROR]$normal Invalid Input $red[ERROR]$normal\n\n"
	 bash test_screen.sh	;;

esac 

#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> End of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
