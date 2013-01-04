/*
 * Written by Justin Ko
 * around 2008 when I was first learning to program
 * a neat tool: Find all the computers connected to the same network
*/

#include <stdio.h>

int main(int argc, char* argv[]){
	int i;
	char cmd[50];
	for (i = 0; i <= 255; i++){
		sprintf(cmd, "ping -c 1 192.168.1.%d | grep from",i);
		system(cmd);
	}
	return 0;
}