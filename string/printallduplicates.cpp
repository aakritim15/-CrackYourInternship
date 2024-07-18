class Solution {
public:
    void printDuplicateCharacters(const string& str) {
        int a[256]={0}; 
        for (char ch:str) 
            a[ch]++;
        for (int i=0;i<256;++i){
            if (a[i]>1){
                cout<<(char)i<<" , count = "<<charCount[i]<<endl;
            }
        }
    }
};