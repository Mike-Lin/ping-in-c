// This is a comment.

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