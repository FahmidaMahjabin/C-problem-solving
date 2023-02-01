#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'on_the_hunt' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING_ARRAY arr
 *  3. STRING csv
 */

string on_the_hunt(string s, vector<string> arr, string csv) {
    string commonChar = "";
    for(int i = 0; i< s.size() ; i++){
        cout<<"s[i]:"<<s[i];
        for(int j = 0; j< arr.size(); j++){
            cout<<"arr[j]"<<arr[j];
            if(s[i] == arr[j]){
               for(int k = 0; k< strlen(cvs); k++){
                   if(i == cvs[k]){
                       commonChar += i;
                   }
               }
           }
        }

    }
    return commonChar;

}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<string> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    string csv;
    getline(cin, csv);

    string result = on_the_hunt(s, arr, csv);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

