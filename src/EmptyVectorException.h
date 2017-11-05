class EmptyVectorException : public exception {
public:
    EmptyVectorException() {};
    ~EmptyVectorException() throw() {};
    const char *what() const throw() { 
      return "Não há valores para realizar essa operação."; 
    };
};