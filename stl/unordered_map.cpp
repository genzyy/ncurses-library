#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> umap;
    umap["hello"] = 1;
    umap["world"] = 2;
    umap["cpp"] = 300;
    
    for(auto x: umap) cout<<x.first<<" "<<x.second<<endl;
    
    return 0;
}

// can be used to count no of occurance of a word or words or characters in a string.
