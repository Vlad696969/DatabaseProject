#include <exception>

class StreamException : public std::exception {

    public:
    explicit StreamException(const char* msg);
    char const* what() const noexcept override;

};
