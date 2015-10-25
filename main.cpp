#include <iostream>
#define MAXBUFFERSIZE 80

using namespace std;

int main(void) {

    char ch;

    char Name[MAXBUFFERSIZE];
    char Age[MAXBUFFERSIZE];
    char Reddit_Name[MAXBUFFERSIZE];

    int ch_count;

    printf("Good day! Let me get to know you some... \n\n");
    ch = 0;
    ch_count = 0;

    printf("What is your name? ");

    while(ch != '\n'){
        ch = getchar();
        Name[ch_count] = ch;
        ch_count++;
    }
    Name[--ch_count] = 0;

    ch = 0;
    ch_count = 0;

    printf("And your age? ");
    while(ch != '\n'){
        ch = getchar();
        Age[ch_count] = ch;
        ch_count++;
    }
    Age[--ch_count] = 0;

    ch = 0;
    ch_count = 0;
    printf("What about your username: ");
    while(ch != '\n'){
        ch = getchar();
        Reddit_Name[ch_count] = ch;
        ch_count++;
    }
    Reddit_Name[--ch_count] = 0;

    printf("Your name is %s, you are %s, and on your "
                   "username is %s.\n", Name, Age, Reddit_Name);
}