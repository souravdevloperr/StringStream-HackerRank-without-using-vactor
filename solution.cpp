#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str;
    cin>>str;
    char ch = ',';
     int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    count= count +1;
    stringstream ss(str);
char numberCh;
for(int i =0; i<count; i++){
    int number;
    ss >> number >> numberCh;
    cout<<number<<endl;
}
    return 0;
}
