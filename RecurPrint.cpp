void print_num(vector<int>&ans, int x){
    if(x == 1){
        ans.push_back(x);
        return;
    }
    print_num(ans, x - 1);
    ans.emplace_back(x);
}
vector<int> printNos(int x) {
    vector<int> ans;
    print_num(ans, x);
    return ans;
}