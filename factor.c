#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    int n;
    int i;
    //char nstr[20];
    
    if (argc < 2) {
      printf ("You must give a number\n");
      return 1;
    }
    // strcpy(nstr, argv[1]);
    // n = atoi(nstr);
    n = atoi(argv[1]);
    printf("Factors of %d are: ", n);
    for(i=1; i <= n; ++i) {
        if (n%i == 0) {
            printf("%d ",i);
        }
    }
    printf ("\n");
    return 0;
}