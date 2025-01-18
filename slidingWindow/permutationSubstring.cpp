// LC->

void findPermu(vector<string>&permuArr,string s,int index){

    if(index==s.size()){
        permuArr.push(s);
        return;
    }
    for(int i=index;i<s.size();i++){
        swap(s[index],s[i]);
        findPermu(permuArr,s,index+1);
        swap(s[index],s[i]);
    }
}

void isPermutaion(string permuString, string s){
    vector<string>permuArr;
    findPermu(permuArr,s,0);




}