#include <unistd.h>
void put_char(char c){
    write(1,&c,1);
}