#pragma once
#include<string>
#include<algorithm>
using namespace std;
class BullsAndCows {
public:
	string getHint(string secret, string guess) {
		int bulls = 0, cows = 0;
		for (int i = 0, j = 0; i <secret.size() && j <guess.size();) {
			if (secret[i] == guess[j]) {
				bulls++;
				secret.erase(i, 1);
				guess.erase(j, 1);
			}
			else i++, j++;
		}
		sort(secret.begin(), secret.end());
		sort(guess.begin(), guess.end());
		for (string::iterator s = secret.begin(), g = guess.begin();
			s != secret.end() && g != guess.end();) {
			while (s != secret.end() && *s <*g)
				s++;
			if (s == secret.end()) break;
			while (g != guess.end() && *g <*s)
				g++;
			while (s != secret.end() && g != guess.end() && *s == *g)
				cows++, s++, g++;
		}
		string result;
		result += to_string(bulls);
		result += 'A';
		result += to_string(cows);
		result += 'B';
		return result;
	}
};