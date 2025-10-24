#include "helpers.h"

vector<string> history;
map<int, pid_t> backgroundJobs;
int jobCounter = 1;

vector<string> split(const string &input, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream ss(input);
    while (getline(ss, token, delimiter)) {
        if (!token.empty()) tokens.push_back(token);
    }
    return tokens;
}

vector<char*> toCArray(vector<string> &args) {
    vector<char*> c_args;
    for (auto &arg : args) c_args.push_back(&arg[0]);
    c_args.push_back(NULL);
    return c_args;
}
