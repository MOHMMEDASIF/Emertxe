#!/bin/bash
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Expected Solution From  Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#This Script allows the user to edit the Profile Information



#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Beginning of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


source color.sh


echo -e "\n$green$bold                          [Test-Software]                                 $normal"
            echo -e "$bold$blue                              Edit-Profile                                $normal"
            echo -e "$green                                                                          $normal"
            echo -en "$green                                                           $rg_red Hello  $normal"
            echo -en "$bold $1$normal\n"
            echo -e "$green                                                                          $normal"
            echo -e  "Enter The Option to edit"
	    echo -en "1)Name:$1"
            echo -en "\n2)E-mail-ID:$2"
            echo -en "\n3)Mobile-No:$3"
            echo -en "\n4)DOB:$4"
            echo -en "\n5)Place:$5"              
            echo -e "\n$green                                                                          $normal"
            echo -e "$green                                                                          $normal"
            echo -e "$green                                                                          $normal"
            echo -en "$bold[Enter your Choice]$normal:"  
            read user_input

case $user_input in

1)  	echo -en "$bold[Enter the New-Value]:$normal"
	read  new_entry
        user_name_database=(`cat user_database.csv | cut -d ';' -f 1`)
	sed  "$6/s/;/ /g" new.txt | sed "$6/s/$user_name_database/$new_entry/g"  |sed "$6/s/ /;/g" ;;

2) 	echo -en  "$bold[Enter the New-Value]:$normal"
	read  new_entry
	email_id_field=(`cat user_database.csv | cut -d ';' -f 3`)
	sed  "$6/s/;/ /g" new.txt | sed "$6/s/$user_name_database/$new_entry/g"  |sed "$6/s/ /;/g" ;;

3)  	echo -en "$bold[Enter the New-Value]:$normal"
	read  new_entry
	mobile_number_field=(`cat user_database.csv | cut -d ';' -f 4`)
	sed  "$6/s/;/ /g" new.txt | sed "$6/s/$user_name_database/$new_entry/g"  |sed "$6/s/ /;/g" ;;

4)  	echo -en "$bold[Enter the New-Value]:$normal"
	read  new_entry
	dob_field=(`cat user_database.csv | cut -d ';' -f 5`)
	sed  "$6/s/;/ /g" new.txt | sed "$6/s/$user_name_database/$new_entry/g"  |sed "$6/s/ /;/g" ;;

5)	echo -en  "$bold[Enter the New-Value]:$normal"
	read  new_entry
	place_field=(`cat user_database.csv | cut -d ';' -f 6`)
	sed  "$6/s/;/ /g" new.txt | sed "$6/s/$user_name_database/$new_entry/g"  |sed "$6/s/ /;/g" ;;

*) 	echo "$red[ERROR]$normal INVALID CHOICE $red[ERROR]$normal" 
	bash edit_page.sh 
esac




#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> End of the Script <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
