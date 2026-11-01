#include "shared_library_dependent.h"

int main(void) {
    return shared_dependent_answer() == 42 ? 0 : 1;
}
