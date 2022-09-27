#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int y , m, d , p_y, p_m, p_d, t_m;
    y = stoi(today.substr(0, 4));
    m = stoi(today.substr(6, 2));
    d = stoi(today.substr(9, 2));
    for(int i = 0; i < terms.size(); i++)
    {
        for(int j = 0; j < privacies.size(); j++)
        {
            if(terms[i].front() == privacies[j].back())
            {
                t_m = stoi(terms[i].substr(1,2));
                p_y = stoi(privacies[j].substr(0, 4));
                p_m = stoi(privacies[j].substr(6, 2));
                p_d = stoi(privacies[j].substr(9, 2));
                if(t_m + p_m > 24)
                {
                    p_m += t_m - 24;
                    p_y += 2;
                }
                else if (t_m + p_m > 12)
                {
                    p_m += t_m - 12;
                    p_y += 1;
                }
                else
                    p_m += t_m;
                if(p_y <= y)
                {
                    if(p_m <= d)
                    {
                        if(p_d < d)
                        {
                            answer.pushback(j);
                        }
                    }
                }
            }
        }
    }
    return answer;
}
