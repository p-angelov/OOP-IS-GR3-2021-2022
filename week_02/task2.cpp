#include <fstream>
#include <cstring>

struct Player
{
    char name[32];
    char team[32];
    char game[32];
    int wins;
    int losses;
    double winLossRatio = wins / losses;
};

int main()
{


    return 0;
}