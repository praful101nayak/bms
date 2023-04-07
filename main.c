//header files area
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//functions declaration area
void swc1 (void);
void swc2 (void);

void swc1 ()
{
    system ("cls");
    printf("Bank Login Page:-\n");
    //all material goes here
    char user_name[100];
    char password [100];
    FILE *usn,*pswd;
    usn=fopen("usn.txt","r");
    pswd=fopen("pwd.txt","r");
    printf("login\n");
    printf("enter user-name:-");
    printf("enter password:-");

}

void swc2 (void)
{
    char txt [50000], ch;
    int m;
    FILE *tnc;
    tnc = fopen("terms&conditions.txt","r");
    if (tnc == NULL) {
        printf("Error: Unable to open file\n");
    }
    while (ch != EOF) {
        //first ch 
        ch = fgetc(tnc);
        printf("%c",ch);
    }
    fclose(tnc);
    printf("\n\n\n 9 for Back or 3 for Exit\n");
        scanf("%d",&m);
        if (m==9)
        {
            main();
        }else if(m==3)
        {
            exit(0);
        }else{
            printf("enter valid key:\n\n");
            // scanf("%d",&m);
            swc2();
        }
}

int main ()
{
    int m_input;
    // char bx;
    printf("Welcome!\n");
    printf("Copy Bank Ltd., Nagpur\n");
    printf("1 Bank Login\n");
    printf("2 Terms&Conditions\n");
    printf("3 Exit\n");
    scanf("%d",&m_input);
    if (m_input==1)
    {
        system ("cls");
        printf("1");
        swc1 ();
    }
    else if (m_input==2)
    {
        system ("cls");
        swc2 ();
        
        
    }
    else if (m_input==3)
    {
        system ("cls");
        exit(0);
    }
    else
    {

        printf("ERROR! -- enter valid input");
    }
}