#include "linux.h"
#include <err.h>
#include <fcntl.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/mman.h>
#include <sys/param.h>
#include <sys/socket.h>

int socket(int, int, int);
