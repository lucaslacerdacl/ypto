class Ypto {
private:
    vector<int> values;
public:
    Ypto(vector<int> _values = vector<int>()) : values(_values) {};

    int sum() {
        int result = 0;
        for(int i = 0; i < values.size(); i++) {
            result += values[i];
        }
        return result;
    };

    int product() {
        int result = 1;
        for(int i = 0; i < values.size(); i++) {
            result = result * values[i];
        }
        return result;
    }

    void setValue(int value) {
        values.push_back(value);
    };

    void updateValue(int position, int value) {
        values[position] = value;
    };

    int getValue(int position) const {
        return values[position];
    };

    void setValues(vector<int> _values) {
        values = _values;
    };

    vector<int> getValues() const {
        return values;
    };
};