/*************************************************************************
 * File:	client.cpp
 * Author:	liuyongshuai<liuyongshuai@hotmail.com>
 * Time:	2019-05-16 20:50
 ************************************************************************/
#include "common.h"

using namespace std;

int main(int argc, char *argv[]){
    string selfName = "我";
    if (argc > 0 && strlen(argv[1]) > 0){
        selfName = argv[1];
    }
    cout << selfName << endl;

    char *input, shell_prompt[100] = {0};

    // Configure readline to auto-complete paths when the tab key is hit.
    rl_bind_key('\t', rl_complete);

    for (;;){
        // Create prompt string from user name and current working directory.
        snprintf(shell_prompt, sizeof(shell_prompt), selfName.c_str());

        // Display prompt and read input (n.b. input must be freed after use)...
        input = readline(shell_prompt);

        // Check for EOF.
        if (!input){
            break;
        }

        printf("aadfsaadsfasdf\t---%s\n", input);

        // Add input to history.
        add_history(input);

        // Do stuff...

        // Free input.
        free(input);
    }


    return 0;
}