    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(m!=n) return false;
        int arr[26];
        memset(arr, 0, sizeof(arr));
        
        for(int i=0; i<n; i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }

        for(int i=0; i<26; i++){
            if(arr[i]!=0) return false;
        }
        return true;
    }
