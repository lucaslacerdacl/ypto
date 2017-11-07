void runExamples() {
    vector<int> values;
    values.push_back(5);
    values.push_back(6);
    values.push_back(7);

    Ypto x1;
    Ypto x2(values);
    x1.setValue(1);
    x1.setValue(2);
    cout << x1.sum() << endl;
    cout << x2.sum() << endl;
    x1.setValue(x2.getValue(0));
    x2.updateValue(0, x2.getValue(0) + 1);
    cout << x1.getValue(2) << endl;
    cout << x2.getValue(0) << endl;
}