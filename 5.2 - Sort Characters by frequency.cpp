    string frequencySort(string s) {
        vector<pair<int, char>> countArr;
        for(int i=0; i<26; i++){
            countArr.push_back({0, char(97+i)});
        }
        for(int i=0; i<26; i++){
            countArr.push_back({0, char(65+i)});
        }
        for(int i=0; i<=9; i++){
            countArr.push_back({0, char(i+'0')});
        }
        // for(int i=0; i<62; i++){  // to check all character position
        //     cout<<i<<" "<<countArr[i].second<<endl; 
        // }
        for(auto i:s){
            if(isdigit(i)){
                countArr[i-'0'+52].first++;
            }
            else if(isupper(i)){
                countArr[i-'A'+26].first++;
            }
            else{
                countArr[i-'a'].first++;
            }

        }
        sort(countArr.begin(), countArr.end(), greater<pair<int, char>>());
        string res="";
        for(auto i:countArr){
            if(i.second==0) break;
            string temp(i.first, i.second);
            res+=temp;
        }
        return res;
    }
