#ifndef HELPERS_H
#define HELPERS_H

#include <bits/stdc++.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
using namespace std;

extern vector<string> history;
extern map<int, pid_t> backgroundJobs;
extern int jobCounter;

vector<string> split(const string &input, char delimiter = ' ');
vector<char*> toCArray(vector<string> &args);

#endif
