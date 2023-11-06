#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

///Example 1

//handler only takes one int as parameter, because we are using sa_handler
//void termination_handler(int signum){
//    struct temp_file *p;
//
//    for(p = temp_file_list; p; p->next)
//        unlink(p->name);
//}
//
//int main()
//{
//    struct sigaction new_action, old_action;
//
//    /* Set up the structure to specify the new action.*/
//    new_action.sa_handler = termination_handler;
//    sigemptyset (&new_action.sa_mask);
//    new_action.sa_flags = 0;
//
//    sigaction(SIGINT, NULL, &old_action);
//
//    if(old_action.sa_handler != SIG_IGN)
//        sigaction(SIGINT,&new_action, NULL);
//
//    sigaction(SIGHUP, NULL, &old_action);
//
//    if(old_action.sa_handler != SIG_IGN)
//        sigaction(SIGHUP,&new_action, NULL);
//
//    sigaction(SIGTERM, NULL, &old_action);
//
//    if(old_action.sa_handler != SIG_IGN)
//        sigaction(SIGTERM,&new_action, NULL);
//
//    return 0;
//}


///Example 2

///*To test this example run, then hit ctrl+c to see the results of the code*/


// handler takes three parameters because we are using sa sigaction
static void hdl(int sig, siginfo_t * siginfo, void * context) {
    printf("Sending PID: %ld, UID: %ld\n", (long) siginfo->si_pid, (long)siginfo->si_uid);
}

int main() {
    struct sigaction act;

    memset(&act, '\0', sizeof(act));
    /*Une the sa_sigaction field because the handles has two addtional parameters,
    hdl contains a siginfo_t and avoid pointer, see the function prototype*/

    act.sa_sigaction = &hdl;

    /* The SA_SIGINFO flag tells sigaction() to use the sa_sigaction field, not sa_handler*/
    act.sa_flags = SA_SIGINFO;

    if(sigaction(SIGINT, &act, NULL) < 0){
        perror("sigaction");
        return 1;
    }

    while(1){
        sleep(3);

    }

    return 0;
}
