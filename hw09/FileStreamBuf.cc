#include "FileStreamBuf.h"

FileStreamBuf::FileStreamBuf(){
} // end of constructor

FileStreamBuf::FileStreamBuf(FILE* fptr) {
    fopen(fptr);
} // end of constructor

FileStreamBuf::~FileStreamBuf() {
    fclose(fptr);
} // end of destructor