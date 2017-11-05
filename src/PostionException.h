class PostionException : public exception {
public:
    PostionException() {};
    ~PostionException() throw() {};
    const char *what() const throw() { 
      return "A posição informada não existe."; 
    };
};