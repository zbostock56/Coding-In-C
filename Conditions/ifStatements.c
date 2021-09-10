#include <stdio.h>

int main(){
        int foo = 1;
        int bar = 2;

        //if, elseif, and else statements are the same
        
        //use %s when formatting strings in printf

        if (foo > bar) {
                printf("%s\n", "foo is higher!");
        }
        else if(bar > foo) {
                printf("%s\n", "bar is higher!");
        }
        else if (bar == foo){
                printf("%s\n", "They are the same.");
        }

        

        return 0;
}      
