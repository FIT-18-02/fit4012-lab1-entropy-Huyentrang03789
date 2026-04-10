#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) {
        return 0.0;
    }

    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    for (const auto &pair : freq) {
        double p = static_cast<double>(pair.second) / text.size();
        entropy -= p * log2(p);
    }
    return entropy;
}

double calculate_redundancy(const string &text, int alphabet_size = 256) {
    if (text.empty()) {
        return 0.0;
    }

    double entropy = calculate_entropy(text);
    double max_entropy = log2(alphabet_size);
    
return max_entropy - entropy;
}
int main() {
    
    ofstream logFile("logs/run_log.md");

    for (int i = 1; i <= 3; i++) { 
        string input;
        cout << "\nEnter string " << i << ": ";
        getline(cin, input);

        double entropy = calculate_entropy(input);
        double redundancy = calculate_redundancy(input);

        cout << "Entropy: " << entropy << '\n';
        cout << "Redundancy: " << redundancy << '\n';

        logFile << "### Test " << i << "\n";
        logFile << "Input: " << input << "\n";
        logFile << "Entropy: " << entropy << "\n";
        logFile << "Redundancy: " << redundancy << "\n\n";
    }

    logFile.close(); 

    return 0;
}
