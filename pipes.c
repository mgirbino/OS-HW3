// Michael Girbino
// OS HW3: Prisoner's Dilemma / Pipes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>

#define PARENT_REQUEST_PID    1     // request for child's PID
#define PARENT_REQUEST_CHOICE 2     // request for child to respond to prisoner's dilemma
#define PARENT_REQUEST_EXIT   3     // request for child to exit
#define CHILD_RESPONSE_COOPERATE 0  // prisoner response to interrogation: take the fifth
#define CHILD_RESPONSE_DEFECT    1  // prisoner response to interrogation: confess

const int PIPE_READ_END = 0;        // read end of pipe
const int PIPE_WRITE_END = 1;       // write end of pipe
const int PIPE_BUFFER_SIZE = 32;    // arbitrary size for pipe buffers
const int NUMBER_OF_GAMES = 10;     // number of times to iterate the prisoner's dilemma game

int rand_choice();					// returns 0 or 1
char* print_choice(int choice);		// 0 = Cooperate, 1 = Defect

int main() {
	int p_to_c1, p_to_c2, c1_to_p, c2_to_p;
	
	if (pipe(p_to_c1) | pipe(p_to_c2) | pipe(c1_to_p) | pipe(c2_to_p)) {
		perror("Error");
		exit(EXIT_FAILURE);
	}
	
	pid_t pid_c1 = fork();
	pid_t pid_c2 = fork();
	
	if (pid_c1 < 0 || pid_c2 < 0) {
		perror("Error");
		exit(EXIT_FAILURE);
	}
	
	if (pid_c1 == 0) { // child 1
	
	}
	
	if (pid_c2 == 0) { // child 2
	
	}
	
	printf("%s", print_choice(rand_choice()));
	
	return 0;
}

int rand_choice() {
    return rand() % 2;
}

char* print_choice(int choice) {
	char *defect = "Defect\n";
	char *cooperate = "Cooperate\n";
	
    return choice ? defect : cooperate;
}