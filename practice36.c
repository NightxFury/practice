
#include <stdio.h>

void printrishav(int count);

int main () {
    printrishav(50);
}

void printrishav( int count) {
    if (count == 0){
        return;
    }
    printf("Rishav \n");
    printrishav(count -1);


}
