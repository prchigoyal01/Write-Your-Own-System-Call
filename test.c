/* Name: Prachi Goyal
   Roll_Number: 2019186 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define sys_sh_task_info 440

int main(int argc, char *argv[]){
	pid_t curr_pid = getpid();
	printf("%d\n", curr_pid); 
	char file[256];
	int pid;

	scanf("%d", &pid);
	scanf("%s", file);

	printf("%s\n", file);

	int res = syscall(440, pid, &file);
	printf("System call returned %d.\n", res);

	return 0;
}