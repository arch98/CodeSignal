//Question link : https://app.codesignal.com/interview-practice/question/3PcnSKuRkqzp8F6BN/description


bool solution(vector<string> strings, vector<string> patterns) {
    
    unordered_map<string,string>wp;
    unordered_map<string,string>pw;
    int n = strings.size();
    
    for(int i = 0;i<n;i++){
        if(wp.find(strings[i]) != wp.end()){
            if(wp[strings[i]] != patterns[i]){
                return false;
            }
        }
        
        if(pw.find(patterns[i]) != pw.end()){
            if(pw[patterns[i]] != strings[i]){
                return false;
            }
        }
        
        wp[strings[i]] = patterns[i];
        pw[patterns[i]] = strings[i];
    }
    
    return true;
}
