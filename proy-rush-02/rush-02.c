// https://www.programacion.com.py/escritorio/c/archivos-en-c-linux

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
 
int main()
{
int fd;
char c;

fd = open("numbers.dict", O_RDONLY);
 
    if(fd !=- 1)
    {
        while(read(fd ,&c ,sizeof(c) != 0 )){
            printf("%c",c);
        }
        close(fd);
    } else {
        printf("El archivo no existe");
    }
    close(fd);
}