class Solution {
public:
    char repeatedCharacter(string s) {
        int array[26]={};
        
        for(int i=0; i<s.size();i++){
            array[s[i]-'a']++;
            if(array[s[i]-'a']==2){
                return s[i];
                
            }
            
            
            

                
        }

     return 0;   
    }
};
