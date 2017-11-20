#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void seperate_delimiters(char *str_ptr, char *small_string);
int * find_pallindrome(char *str_ptr);
int pallindrome(char *starting_address,int count);


int main()
{
	//given string
	char string[200] = "Madam, I'm Adam. I am Fond of Racecar. I refer Peter as Mr.owl. Mr.Owl ate my metal worm. In the noon, I learnt working principle of Radar";

	//calculate the string length
	int str_length = strlen(string);
	printf("str_length: %zu", str_length);

	//memory allocation for the new pointer nd initialize with null
	char *small_string = malloc(str_length * sizeof(char));
	*small_string = '\0';
	
	//get new string with lowercase and spaces in it from original array 
	 seperate_delimiters(string, small_string);

	 printf("\n%s\n", small_string);

	 //get the address of all the strings that are pallindrome
	 int * str_string = find_pallindrome(small_string);




}

//get the complete string and check for the pallindrome words
int * find_pallindrome(char *str_ptr)
{
	char *ptr = str_ptr;
	char *track = str_ptr;
	int count = -1, i = 0, ptr_track = -1;
	static int *ptr_array[8];


	while(*ptr)
	{
		count = -1;
		
		while((*track >= 'a') && (*track <= 'z'))
		{
			track++;
			count++;
		}
		ptr = track - count;
		
		//call function to check for the pallindrome
		if (pallindrome(ptr,count))
		{
			ptr_track++;
			

			//keep track of the address of words which are pallindrome
			ptr_array[i] = (int *)ptr;
			i++;
		}
		else
		{
			ptr = ptr + count + 1;  
			track++;
		}
		ptr++;
	}
	
	//return the addresses of the words which are pallindrome
	return (ptr_array - ptr_track);
}

//normal pallindrome function
int pallindrome(char *starting_address,int count)
{
	int flag = 0;
	char *limit = starting_address + count;
	while(count)
	{
		if (*limit == *starting_address)
		{
			flag = 1;
			count--;
		}
		else
		{
			count--;
		}
	
	}

	if (flag)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//return the string after removing the special charcter and in the lower-case
void seperate_delimiters(char *str_ptr, char *small_string)
{
	while(*str_ptr)
	{
		if((*str_ptr >= 'a' && *str_ptr <= 'z') || (*str_ptr == ' '))
		{
			*small_string = *str_ptr;
			small_string++;
			str_ptr++;
		
		}
		else if(*str_ptr >= 'A' && *str_ptr <= 'Z')
		{
			*small_string = *str_ptr + 32;
			small_string++;
			str_ptr++;

		}
		else
		{
			str_ptr++;
		}

	}

}
