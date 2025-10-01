#include <stdio.h>
int main()
{
    int value_main_scope = 123;

    {
        // InnerScope
        /*  Alt fra et ydre scope, er synligt i indre scopes, men ikke omvendt i.e. 
            Det yderste scope er Global scope!
        */ 
        printf("value_main_scope fra InnerScope: %d\n", value_main_scope);
        // Inner Scope (har ikke rigtig et navn, men det kalder vi det lige nu)
        int value_inner_scope = 991;
    }

    printf("value_main_scope fra main_scope: %d\n", value_main_scope);
    // Virker ikke, da value_inner_scope kun exsisterer inde i inner_scole
    printf("print value_inner_scope fra main_scope: %d\n", value_inner_scope); 
    
    return 0;
}
