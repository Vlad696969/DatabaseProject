
#include <exception>
//using namespace std;

class StreamException : public exception {
    StreamException() throw() {}

    virtual const char* StreamException::what() const throw() {
        return "Erreur de Stream. Veillez à ce que le stream soit bien ouvert avant d'essayer de lire ou d'écrire.\n";
    }

    virtual StreamException::~Erreur() throw() {}
};





