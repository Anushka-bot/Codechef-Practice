void printvec(vector<int> front, vector<int> end, vector<int> equal)
{
    for (auto it = front.begin(); it != front.end(); it++)
    {
        cout << "front" << (*it) << " ";
    }
    cout << endl;
    for (auto it = end.begin(); it != end.end(); it++)
    {
        cout << "end" << (*it) << " ";
    }
    cout << endl;
    for (auto it = equal.begin(); it != equal.end(); it++)
    {
        cout << "equal" << (*it) << " ";
    }
    cout << endl;
}