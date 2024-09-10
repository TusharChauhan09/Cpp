// Day-31                  Strings-1
#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    /*
    // (1) Strings 
    string str1 = "Tushar";
    string str2("Tushar");
    

    // (2) Input / Output of atring
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<str;
 
    // (3) Indexing In String
    cout<<"\n"<<str[1];
    cout<<"\n"<<str[7];
    
 
    // (4) ASCII Value 
    char ch1 = 'a';
    char ch2 = 'A';
    cout<<"\n"<<int(ch1);
    cout<<"\n"<<int(ch2);

    */
    // (6) String Inbuilt Function
    
    // (a) reverse(starting ,ending )
    string str="Tushar Chauhan";
    reverse(str.begin(),str.end()); 
    cout<<str;                                     // nahuahC rahsuT

    cout<<"\n";

    // (b) substr(starting ,ending)
    str="Tushar Chauhan";
    cout<<str.substr(0,6);                        // Tushar

    cout<<"\n";

    // (c) Concatination / +
    string str1 = "Tushar" , str2 =" Chauhan";
    cout<<str1 + str2;                           // Tushar Chauhan

    cout<<"\n";

    // (d) strcat(char_array1,char_array2)
    char a1[20]="Tushar ";
    char a2[20]="Chauhan";
    strcat(a1,a2);                                // Tushar Chauhan
    cout<<a1;

    cout<<"\n";

    // (e) push_back(char)
    str = "Tushar";
    char a = 'C';
    str.push_back(a);                             // TusharC
    cout<<str;

    cout<<"\n";

    // (f) size() / length()
    str = "Tushar";
    cout<<str.size();                             // 6
    cout<<"\n";
    cout<<str.length();                           // 6

    cout<<"\n";

    // (g) strlen(char_array)
    char arr[20]="Tushar";
    cout<<strlen(arr);                            // 6
    cout<<"\n";
    cout<<sizeof(arr)/sizeof(arr[0]);             // 20

    cout<<"\n";

    // (h) to_string(int variable) 
    int b = 4;
    string c = to_string(b);
    cout<<c;

    cout<<"\n";

    // (i) sort(start,end)
    str1 = "tushar";
    sort(str1.begin(),str1.end());
    cout<<str1;

    cout<<"\n";

    // (j) == operator / str1.compare(str2)
    str1 = "Tushar";
    str2 = "Tushar";
    bool x = str1 == str2;
    cout<<x;
    cout<<"\n";
    cout<<str1.compare(str2);

    cout<<"\n";

    // (k) find("string")
    str1 = "Tushar";
    cout<<str.find("sh");

    cout<<"\n";

    // (l) inser(index,"string")
    str = "Tushar Chauhan";
    str.insert(7,"The ");
    cout<<str;

    cout<<"\n";

    // (m) replace(index,length of string , "string")
    str = "Tushar Chauhan";
    str.replace(7,2,"xp");
    cout<<str;

    cout<<"\n";

    // (n) erase(index, length to be removed)
    str = "Tushar Chauhan";
    str.erase(7,2);
    cout<<str;

    cout<<"\n";

    return 0;
} 