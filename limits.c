#include<unistd.h>
long sysconf(int name);
long pathconf(const char *pathname, int name);
long fpathconf(int filedes, int name);

