#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main()
{
    void *handle = NULL;
    double (*cosine) (double) = NULL;
    char *error = NULL;

    handle = dlopen("/usr/bin/cygwin1.dll", RTLD_LAZY);

    if(!handle) {
        fputs(dlerror(), stderr);
        exit(1);
    }

    //clear errors code
    dlerror();

    cosine = dlsym(handle, "cos");

    if((error = dlerror()) != NULL){
        fputs(error, stderr);
        exit(1);
    }

    printf("%f\n", (*cosine)(2.0));
    dlclose(handle);

    return 0;
}

// works just fine by pressing run
// the compiler does all the work
