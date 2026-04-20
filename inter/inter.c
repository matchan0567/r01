#include <stdio.h>
int main (int argc,char**argv){
    int i=0;
    int index[256]={0};
    if(argc!=3){
        return(0);
    }
    while(argv[1][i]!='\0'){
        index[(unsigned char)argv[1][i]]=1;
        i++;
    }
    i=0;
    while(argv[2][i]!='\0'){
        if(index[(unsigned char)argv[2][i]]==1){
            printf("%c",argv[2][i]);
        }
        index[(unsigned char)argv[2][i]]=0;
        i++;
    }
    return(0);
}