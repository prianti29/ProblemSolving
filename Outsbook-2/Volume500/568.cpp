#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
   		 int counter=1;
    int l = 0;
    int h = s.length()-1;

    while(h > l){

        if(s[l++] != s[h--]){
            cout << counter << " Not a palindrome" << endl;
            counter++;
            return 0;
        }
    }
    cout <<counter <<  " Is a palindrome" << endl;
    counter++;
    return 0;

}
