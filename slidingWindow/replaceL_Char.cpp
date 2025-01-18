//find a substring all same char but allowed to replace atmost k chars
int getMaxCnt(int charCnt[]){
    int maxVal=0;
    for(int i=0;i<26;i++){
        if(maxVal<charCnt[i]){
            maxVal<charCnt[i];
        }
    }
    return maxVal;
}

void atmostK(string s , int k){

    int start= 0;
    int end = 0;
    int n = s.size();
    int maxLen = 0

    int charCnt[26];
    int finalState = 0;
    while(end<n-1){
        end++;
        char nc = s[end];
        charCnt[nc -'a']++;
        int currMaxRepeat = getMaxCnt(charCnt);
        while((end-start+1)-currMaxRepeat >k){
            charCnt[s[start]-'a']--;
            start++;
        }

        if(maxLen < end-start+1){
            maxLen = end-start+1;
            finalState = maxLen;
        }
    }
    return finalState;
}
