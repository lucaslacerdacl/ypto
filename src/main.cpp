#include <iostream>
#include <vector>
#include <exception>

using namespace std;

#include "./Exception.h"
#include "./Ypto.h"
#include "./example.cpp"

int main() {
    try {
        runExamples();
    } catch(Exception& e) {
        cout << e.what() << endl;
    } catch(exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}