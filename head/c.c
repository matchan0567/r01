#include "h.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char**argv){
    if(argc!=3)
    return(0);
    int tc;
    tc=atoi(argv[2]);
    person p={argv[1],tc};
    int i=0;
    while(p.name[i]){
        put_char(p.name[i]);
        i++;
    }
    printf("のチン長は%dcmです",p.tinchou);
    return(0);
}
