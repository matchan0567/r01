#include <unistd.h>
#include <stdlib.h>
void put_char(char c){
    write(1,&c,1);
}
void ft_putnbr(int nb){
    int i=1;
    int n=nb;
    if(nb==-2147483648){
        put_char('-');
        put_char('2');
        n=147483648;
    }
    if(n<0){
        put_char('-');
        n=-n;
    }
    while(n/i>10){
        i*=10;
    }
    while(i>0){
        put_char(n/i+'0');
        n%=i;
        i/=10;
    }
    put_char('\n');
}

int main(void){
    ft_putnbr(123);
    ft_putnbr(-2147483648);
    return(0);
}
// int main(int argc,char**argv){
//     int nb;
//     for(int i=1; i<argc;i++){
//         nb=atoi(argv[i]);
//         ft_putnbr(nb);
//     }
//     return(0);
// }