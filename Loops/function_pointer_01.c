#include <stdio.h>
void japan(){
    printf("you are in japan\n");
}
void england(){
    printf("you are in england\n");
    japan();
}
void india(){
    printf("youi are in india\n");
    england();
}
int main(){
    printf("you are in main\n");
    india();
}