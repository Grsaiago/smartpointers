#include "smartptr.h"

void free_call(void *ptr) {
    free(*(void **)ptr);
}
