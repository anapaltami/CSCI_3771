#ifndef FILESTREAMBUF_H
#define FILESTREAMBUF_H
#include <iostream>

class FileStreamBuf : public std::streambuf {
public:
    FileStreamBuf();
    FileStreamBuf(FILE* fptr);
    virtual ~FileStreamBuf();
}; // end of FileStreamBuf class

#endif

/* ive. It is OK, to disallow copies and moves for FileStreamBuf */