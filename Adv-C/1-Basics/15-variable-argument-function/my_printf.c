#include <stdio.h>
#include <stdarg.h>

void xprintf(const char *format, ...);

int main()
{
	char ch = 'A';

	xprintf("The Value of ch:%c\n", ch);

	int i = 10;
	xprintf("The Value of i:%d\n", i);

	float y = 12.1;
	xprintf("The Value of f:%f\n", y);
	
	double d = 32.1234567891;
	xprintf("The Value of d:%lf\n", d);

	return 0;
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
