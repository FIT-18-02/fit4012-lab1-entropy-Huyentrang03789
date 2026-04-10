#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) return 0.0;
    map<char, int> freq;
    for (char c : text) freq[c]++;
    
    double entropy = 0.0;
    for (const auto &pair : freq) {
        double p = (double)pair.second / text.size();
        entropy -= p * log2(p);
    }
    return entropy;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    while (getline(cin, input)) {
        if (input.empty()) continue; 

        double entropy = calculate_entropy(input);
    
        double max_entropy = 8.0; 
        double redundancy = max_entropy - entropy;

        cout << fixed << setprecision(4) << entropy << " " << redundancy << endl;
    }

    return 0;
}
