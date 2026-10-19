class Solution {
public:
bool lol (char c){
    
        if(c=='a' || c=='e' || c=='i' || c=='o' ||  c=='u' || c=='A' || c=='E' || c=='I' || c=='O' ||  c=='U' ){
            return true;
        
    }
    return false;
}
    string reverseVowels(string s) {
        int n=s.length();
        int i=0; int j=n-1;
        while(i<j){
            if (!lol(s[i])) {
            i++;
        } 
        else if (!lol(s[j])) {
            j--;
             }
             else{
                swap(s[i],s[j]);
                i++;
                j--;
             }
        }
        return s;
    }
};