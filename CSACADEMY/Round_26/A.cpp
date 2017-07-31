#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n; cin >> n;
    int last_bad_time = -1;
    int answer = 0;
    for (int i = 0; i < n; i += 1) {
        int person; cin >> person;
        int time; cin >> time;
        if (person == 2) {
            // sys admin check
            // only add if the last person was a hacker
            if (last_bad_time != -1) {
                answer += time - last_bad_time;
                last_bad_time = -1;
            }
        } else {
            // only set last_time when the hacker strikes
            // for the first time
            if (last_bad_time == -1) {
                last_bad_time = time;
            }
        }
    }

    cout << answer << '\n';
    return 0;
}
