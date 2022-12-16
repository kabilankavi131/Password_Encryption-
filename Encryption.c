/*_____________________________________________


Enter your normal password and then you can get your encrypted password !!


Input : Kabilan
Encrypted password : E\^fj`n

_____________________________________________*/

#include <stdio.h>
#include<string.h>
int main() {
char password[100];
int numpassword[100],i;
char encrypted[100];
scanf("%s",password);
for(i=0;i<strlen(password);i++){
    numpassword[i]=password[i];
}
for(i=0;i<strlen(password);i++){
    encrypted[i]=numpassword[i]-6+i;
}
printf("Your Normal Password : %s\n",password);
printf("\nYour Encrypted Password : %s",encrypted);


printf("\n\n\n\n\n________________________________________\n");
printf("You can use this Encrypted password for your accounts rather than using easy password to remember");
printf("\n\nYou can get your Encrypted password  by this code ");
printf("\n________________________________________\n");
    return 0;
}
