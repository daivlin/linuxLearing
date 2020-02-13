/*
 * learning process
 *
 */
#include <stdio.h>
#include <unistd.h>
int main(){
	char * arglist[3];
	arglist[0] = "ls";
	arglist[1] = "-l";
	arglist[2] = 0;
	printf("start execvp \n");
	execvp("ls",arglist);
	printf("end execvp \n");
	
	return 0;	
}
