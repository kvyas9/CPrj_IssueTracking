#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* cPrj_IssueTrackingMain(int argc, char** argv) {
	return "Hello world\n";
}

#ifndef __CXX_TEST_MAIN__
int i=0;
int main(int argc, char** argv){
	char *str= (char *) malloc(3);
    strcpy(str, "Hi");
   printf("String = %s,  Address = %u\n", str, (unsigned int) str);
    
    return 0;
}

#endif