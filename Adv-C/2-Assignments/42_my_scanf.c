/************************************************************************************************************************************************************

Title		: Printf function 
Author		: MOHMMED ASIF.S
Date		: 13/11/2017
Description	: create an fuction which can behave as built-in printf function 

************************************************************************************************************************************************************/
#include <stdio.h>
#include <stdarg.h>

void xprintf(const char *format, ...);
void xscanf(const char *format, ...);

int main()
{
	//printf function for the char datatype 
	char ch;
	xprintf("Enter The char:");
	xscanf("%c", &ch);
	xprintf("The Value of ch:%c\n", ch);

	//printf function for the int datatype 
	int i;
	xprintf("Enter The int:");
	xscanf("%d", &i);
	xprintf("The Value of i:%d\n", i);

	//printf function for the float datatype 
	float y;
	xprintf("Enter The float:");
	xscanf("%f", &y);
	xprintf("The Value of f:%f\n", y);
	
	//printf function for the double datatype 
	double d;
	xprintf("Enter The double:");
	xscanf("%lf", &d);
	xprintf("The Value of d:%lf\n", d);

	return 0;
}

void xscanf(const char *format, ...)
{
	va_list ap;
	char ch = '\0';
	char *p = format;
	char *cptr = NULL;
	int *cptr_int = NULL;

	va_start(ap, format);

	while(*p)
	{
		printf("1");
		if(*p == '%')
		{
		printf("2");
			switch(*++p)
			{
				printf("3");
				case 'c':

				printf("4");
				cptr = (char *)va_arg(ap, int *);
				*cptr = fgetc(stdin);
				break;

				case 'd':
				cptr_int = va_arg(ap, int *);
				printf("5");
				__fpurge(stdin);
			//	while ((ch = fgetc(stdin)) != '\n')
			//	{
					*cptr_int = fgets(stdin);//= fgetc(stdin);
			//		cptr++;
			//	}
				break;

				case 'f':
				cptr = va_arg(ap, float *);
				*cptr = fgetc(stdin);
				break;
				
				case 'l':
						switch (* ++p)
						{
							case 'f':
							cptr = va_arg(ap, double *);
							*cptr = fgetc(stdin);
							break;
						}


			}
			p++;
		}

	}
}
void xprintf(const char *format, ...)
{
	int i = 0;
	double dl = 0.0;
	float fl = 0.0;
	char buffer[30] = {'\0'};
	char ch;
	const char *p = format;

	//1.declare a ptr
	va_list ap;

	//2.Initialize the ptr
	va_start(ap, format);

	//executing the loop  till the null value in the pointer
	while ( * p)
	{
		if (* p == '%')
		{
			switch (* ++p)
			{
				case 'c':
						ch = (char)va_arg(ap, int);
						putchar(ch);
						break;
				case 'd':
						i = va_arg(ap, int);
						sprintf(buffer, "%d", i);
						fputs(buffer, stdout);
						break;
				case 'f':
						fl = (float)va_arg(ap, double);
						sprintf(buffer, "%f", fl);
						fputs(buffer, stdout);
						break;
				case 'l':
						switch (* ++p)
						{
							case 'f':
									dl = va_arg(ap, double);
									sprintf(buffer, "%lf", dl);
									fputs(buffer, stdout);
									break;
						}
					

			}

		}
		else
		{
			putchar(*p);
		}
		p++;

	}

	va_end(ap);

}
