//code for compute LPS of a pattern string!!
void compute_lps(string &pat, vector<int> &lps, int m) {
    int len = 0;
    lps[0] = 0;
    int i = 1;

    while(i < m) {
        if(pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if(len != 0) {
                len = lps[len - 1];
            }else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return;
}
