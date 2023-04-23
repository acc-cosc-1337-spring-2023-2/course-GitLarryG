#include "my_vector.h"

//

Vector :: ~Vector () {
    cout<<"Deleting Vector...";
    delete [] elements;
}

