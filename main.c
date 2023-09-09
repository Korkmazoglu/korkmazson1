#include <stdio.h>
#define BUFFER_SIZE 1024
void func(void) {
 char buf[BUFFER_SIZE];
 if (fgets(buf) == NULL) {
 /* Handle error */
 }
}
