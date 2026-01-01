#include<iostream>
#include<vector>
#include<string>
using namespace std;

class OrderedStream
{
private:
    int ptr = 1;
    vector<string> stream;
public:
    OrderedStream(int n){
        stream.resize(n + 1);
        ptr = 1;
    }

    vector<string> insert(int Idkey, string value){
        stream[Idkey] = value;

        vector<string> result;

        while (ptr < stream.size() && stream[ptr] != ""){
            result.push_back(stream[ptr]);
            ptr++;
        }
        return result;
    }
};

int main(){
    OrderedStream os(5);

    cout << "inserting (3 , 'Khan')" << endl;
    vector<string> res1 = os.insert(3, "Khan");
    for (string s : res1) cout << "output: " << s << " ";
        cout << endl;

    cout << "inserting (4, 'Ali')" << endl;
    vector<string> res2 = os.insert(4, "Ali");
    for (string s : res2) cout << "output: " << s << " ";
        cout << endl;

    cout << "inserting (1, 'Ahmad')" << endl;
    vector<string> res3 = os.insert(1, "Ahmad");
    for (string s : res3) cout << "output: " << s << " ";
        cout << endl;

    
    cout << "inserting (2, 'Moeen')" << endl;
    vector<string> res4 = os.insert(2, "Moeen");
    for (string s : res4) cout << "output: " << s << " ";
        cout << endl;
    
    
    cout << "inserting (5, 'Saif')" << endl;
    vector<string> res5 = os.insert(5, "Saif");
    for (string s : res5) cout << "output: " << s << " ";
        cout << endl;
        
    return  0;
}