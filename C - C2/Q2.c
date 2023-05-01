#include<stdio.h>
#include<string.h>
#define max 100
void Count(char s[max])
{
	int upper = 0, lower = 0, number = 0, special = 0, blank = 0;
	for (int i = 0; i < 19; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z'){
			upper++;
        }
		else if (s[i] >= 'a' && s[i] <= 'z'){
			lower++;
        }
		else if (s[i]>= '0' && s[i]<= '9'){
			number++;
        }
        else if(s[i] = " "){
            blank++;
        }
		else{
			special++;
        }
	}
	printf("Uppercase : %d",upper);
    printf("\nLowercase : %d",lower);
    printf("\nNumbercase : %d",number);
    printf("\nBlankspaces : %d",blank);
    printf("\nSpecial characters : %d",special);
	
}
int main()
{
	char str[max] = "#GeeKs01fOr@gEEks07";
	Count(str);
	return 0;
}
