class PostionException : public exception {
private:
    string errMsg;
public:
    PostionException() {
        errMsg = "A posição informada não existe.";
    };
    ~PostionException() throw() {};
    const char *getMessage() const throw() { 
      return errMsg.c_str(); 
    };
};