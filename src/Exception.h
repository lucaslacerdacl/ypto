class Exception : public exception {
private:
	string msg;
public:
  	Exception(string _msg) : msg(_msg) {};
	~Exception() throw() {};
  	static const Exception emptyVector() {
    	return Exception("Não há valores para realizar essa operação.");
	}
	static const Exception invalidPostion() {
    	return Exception("A posição informada não existe.");
	}
  	const char *what() const throw() { 
    	return msg.c_str(); 
  	};
};