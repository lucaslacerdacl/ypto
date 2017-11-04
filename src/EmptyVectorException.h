class EmptyVectorException : public exception {
private:
    string errMsg;
public:
    EmptyVectorException() {
        errMsg = "Não há valores para realizar essa operação.";
    };
    ~EmptyVectorException() throw() {};
    const char *getMessage() const throw() { 
      return errMsg.c_str(); 
    };
};