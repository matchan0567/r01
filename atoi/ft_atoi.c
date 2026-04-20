#include <unistd.h>

void put_char(char c){
    write(1,&c,1);
}
int ft_atoi(char *str)
{
    int i=0;
    int sign=1;
    int nb=0;
    while((str[i]>='\t'&&str[i]<='\r')|| str[i]==' '){
        i++;
    }
    if(str[i]=='-'||str[i]=='+'){
        if(str[i]=='-'){
            sign=-sign;
        }
        i++;
    }
    while(str[i]>='0'&&str[i]<='9'){
        nb=nb*10+(str[i]-'0');
        i++;
    }
    return(nb*sign);
}

#include <stdio.h>
int main(int argc,char**argv){
    if(argc!=2)
    return(0);

    printf("%d",ft_atoi(argv[1]));
    return(0);
}

// int main(int argc,char **argv)
// {
//     int i=0;
//     if(argc<2){
//         return(0);
//     }
//     while(argv[i]){
//         printf("%s\n",argv[i]);
//         i++;
//     }
//     return(0);
// }