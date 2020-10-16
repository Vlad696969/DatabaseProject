#ifndef DATABASEPROJECT_STREAMEXCEPTION_H
#define DATABASEPROJECT_STREAMEXCEPTION_H


class StreamException {
    StreamException() throw();

    virtual const char* what() const throw();
};


#endif //DATABASEPROJECT_STREAMEXCEPTION_H
