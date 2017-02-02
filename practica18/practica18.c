#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include"/usr/include/linux/input.h"

main()
{
	int fd;
	struct input_event ev;
	char *ruta = "/dev/input/event0\0",str[32];
	fd = open(ruta, O_RDONLY);
	if(fd==-1){
		 fprintf(stderr,"No pude abrir o crear el archivo\n");
	}
	while(1){
		if(read(fd,&ev,sizeof(struct input_event))!=-1){
			printf("%x\n",ev.value);	
		}

	}

}
