#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int die = 0;
    int live = 0;
    for (int i = 0; i < 8000000000; i++) {
    int snap = rand() % 2;
    if (snap == 0) {
        live++;
        printf("%d  You were spared by Thanos.\n", live);
    }else {
        printf("%d  You just turned to dust. For the good of the Galaxy.\n", die);
        die++;
    }
    }
    
    return 0;
}
