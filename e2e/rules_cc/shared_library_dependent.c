#include "shared_library_dependent.h"

#include "shared_library_probe.h"

int shared_dependent_answer(void) {
    return shared_answer();
}
