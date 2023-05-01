#include <stdio.h>
#include <ctype.h>
#include <string.h>

void modifyString(char *inputStr) {
    int i = 0;
    while (inputStr[i] != ' ' && inputStr[i] != '\0') {
        inputStr[i] = tolower(inputStr[i]); // converting all characters to lowercase
        i++;
    }
    inputStr[0] = toupper(inputStr[0]); // converting first character to uppercase
    
    i++;
    while (inputStr[i] != '\0') {
        inputStr[i] = toupper(inputStr[i]); // converting all characters to uppercase
        i++;
    }
    int l = strlen(inputStr);
    if(l > 20){
        printf("%d",l);
    }
    else{
        printf("%d",sizeof(inputStr));
    }
    printf("Revised string: %s", inputStr);
}

int main() {
    char inputStr[100];
    printf("Enter a sentence with two words: ");
    fgets(inputStr, 100, stdin); // reading input from user
    
    modifyString(inputStr); // calling the function to modify the string
    
    return 0;
}
