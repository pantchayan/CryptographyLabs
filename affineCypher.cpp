#include <vector>
#include <iostream>
using namespace std;





int main() {
    //std::cout << "Hello World!\n";
    
    
    string A; cin >> A;
    //string B; cin >> B;
    
    cout << "Original : " <<endl; 
    cout << A << endl;
    
    //keys
    int a=17,b=20;
    
    string cipher = "";
    for(int i=0;i<A.size();i++){
        if(A[i]!=' '){
            cipher = cipher + (char) ((((a * (A[i]-'A') ) + b) % 26) + 'A');
        }
        else{
            cipher+=A[i];
        }
    }
    cout << "Encrypted : " <<endl;
    cout << cipher << endl;
    
    
    string msg = "";
    int a_inv = 0; 
    int flag = 0; 
    for (int i = 0; i < 26; i++) { 
        flag = (a * i) % 26; 
        if (flag == 1) {  
            a_inv = i; 
        } 
    } 
    
    for (int i = 0; i < cipher.length(); i++) { 
        if(cipher[i]!=' ') 
            msg = msg + (char) (((a_inv * ((cipher[i]+'A' - b)) % 26)) + 'A'); 
        else
            msg += cipher[i];  
    } 
    
    cout << "Decrypted : " <<endl;
    cout << msg;
    
}