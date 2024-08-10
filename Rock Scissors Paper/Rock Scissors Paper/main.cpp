#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int You = 0, PC = 0, u;
    cout << "Start - 1\nExit - 2\n";
    cin >> u;
    if (u != 1) return 0;
    while (true) {
        int a, b = 1 + rand() % 3;
        cout << "rock = 1, scissors = 2, paper = 3: ";
        cin >> a;
        if (a < 1 || a > 3) {
            cout << "Invalid. Restart!\n\n";
            continue;
        }
        const char* c[] = { "rock", "scissors", "paper" };
        cout << "You: " << c[a - 1] << "\tPC: " << c[b - 1] << endl;
        int r = (3 + a - b) % 3;
        if (r == 1) cout << "You win!\n", You++;
        else if (r == 2) cout << "You lose!\n", PC++;
        else cout << "Draw!\n";
        cout << "You: " << You << "\tPC: " << PC << endl;
        if (You == 5) cout << "You win!\n", break;
        if (PC == 5) cout << "You lose!\n", break;
        cout << "Play again? (1 for Yes, 2 for No): ";
        cin >> u;
        if (u != 1) break;
    }
    return 0;
}