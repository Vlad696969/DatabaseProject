#include "StreamException.h"

StreamException::StreamException(const char *msg) : std::exception() {}

char const *StreamException::what() const noexcept {
    return exception::what();
}


