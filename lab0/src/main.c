#include <stdint.h>
int main(void) {
    int x = 0;
    int y = 0;

    for (;;) {
        if (x < 10) {
            x++;
        } else {
            y++;
            x = 0;
        }
    }
    return 0;
}