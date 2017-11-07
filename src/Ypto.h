class Ypto {
private:
    vector<int> values;
public:
    Ypto(vector<int> _values = vector<int>()) : values(_values) {};

    int sum() const {
        int result = 0;
        if(values.size() == 0) {
            throw Exception::emptyVector();
        }
        for(int i = 0; i < values.size(); i++) {
            result += values[i];
        }
        return result;
    };

    int product() const {
        int result = 1;
        if(values.size() == 0) {
            throw Exception::emptyVector();
        }
        for(int i = 0; i < values.size(); i++) {
            result = result * values[i];
        }
        return result;
    };

    void setValue(int value) {
        values.push_back(value);
    };

    void updateValue(int position, int value) {
        if(values.size() == 0) {
            throw Exception::emptyVector();
        }
        if(values.size() < position) {
            throw Exception::invalidPostion();
        }
        values[position] = value;
    };

    int getValue(int position) const {
        if(values.size() == 0) {
            throw Exception::emptyVector();
        }
        if(values.size() < position) {
            throw Exception::invalidPostion();
        }
        return values[position];
    };

    void setValues(vector<int> _values) {
        values = _values;
    };

    vector<int> getValues() const {
        return values;
    };
};