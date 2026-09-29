// GOAL: Create a player comparision tool for basketball
// Step 1: String a name, then store all of these stats with that name: (PPG, APG, RPG, SPG, BPG, FG%, 3P%, FT%, TS%, USAGE%, PLUS/MINUS, GAMES PLAYED, Important Moments, Game Winners, Buzzer Beaters, Defensive rating, Awards)
// STEP 2: CREATE SCORES (Scoring Score, Playmaking, Defense, Clutch, Availability)
// STEP 3: CREATE IF STATEMENTS FOR THESE SCORES
#include <iostream>
using namespace std;
int main()
{
	// PLAYER ONE
	string PLAYERONE = "Tahaad Pettiford";
	double P1PPG = 13.5 * (3);
	double P1APG = 3.4 * (3);
	double P1RPG = 2.6 * (2);
	double P1SPG = 1.0 * (2);
	double P1BPG = 0.4 * (2);
	double P1TOVPG = -1.9 * (2);

	double P1FGPER = 40.4 * (0.5);
	double P1THREEPER = 32.3 * (0.5);
	double P1FTPER = 81.7 * (0.25);
	double P1TS = 53.3 * (1);
	double P1USAGE = 26.0 * (0.5);
	double P1PLUSMINUS = 4.5 * (2);

	double P1GP = 76 * (0.1);
	double P1IMPORMOM = 10 * (3);
	double P1GAMEWIN = 0 * (2);
	double P1BUZZERBEAT = 0 * (2);
	double P1AWARDS = 7 * (4);
	// Add the negative sign yourself for this one. For NCAA a defensive rating higher than 110 is a negative (which means it drags down the player score). For the NBA, a defensive rating higher than 118 is a negative.
	double P1DEFRATE = -117.5;
	double P1OFFRATE = 112.8;

	string PLAYERTWO = "Elliot Cadeau";
	double P2PPG = 9.1 * (3);
	double P2APG = 5.4 * (3);
	double P2RPG = 2.6 * (2);
	double P2SPG = 0.9 * (2);
	double P2BPG = 0.2 * (2);
	double P2TOVPG = -2.4 * (2);

	double P2FGPER = 42.4 * (0.5);
	double P2THREEPER = 33.3 * (0.5);
	double P2FTPER = 67.9 * (0.25);
	double P2TS = 51.8 * (1);
	double P2USAGE = 21.6 * (0.5);
	double P2PLUSMINUS = 9.1 * (2);

	double P2GP = 114 * (0.1);
	double P2IMPORMOM = 6 * (3);
	double P2GAMEWIN = 1 * (2);
	double P2BUZZERBEAT = 1 * (2);
	double P2AWARDS = 7 * (4);
	// Add the negative sign yourself for this one. For NCAA a defensive rating higher than 110 is a negative (which means it drags down the player score). For the NBA, a defensive rating higher than 118 is a negative.
	double P2DEFRATE = 101.6;
	double P2OFFRATE = 107.1;

	double P1GEN = P1PPG + P1APG + P1RPG + P1SPG + P1BPG + P1TOVPG;
	double P1EFF = P1FGPER + P1THREEPER + P1FTPER + P1TS + P1USAGE + P1PLUSMINUS;
	double P1LEGACY = P1GP + P1IMPORMOM + P1GAMEWIN + P1BUZZERBEAT + P1AWARDS;
	double P1RATES = P1DEFRATE + P1OFFRATE;

	double P2GEN = P2PPG + P2APG + P2RPG + P2SPG + P2BPG + P2TOVPG;
	double P2EFF = P2FGPER + P2THREEPER + P2FTPER + P2TS + P2USAGE + P2PLUSMINUS;
	double P2LEGACY = P2GP + P2IMPORMOM + P2GAMEWIN + P2BUZZERBEAT + P2AWARDS;
	double P2RATES = P2DEFRATE + P2OFFRATE;

	double P1OVERALLSCORE = (P1GEN + P1EFF + P1LEGACY + P1RATES) / (19);
	double P2OVERALLSCORE = (P2GEN + P2EFF + P2LEGACY + P2RATES) / (19);

	if (P1OVERALLSCORE > P2OVERALLSCORE)
	{
		cout << PLAYERONE << " is a better than " << PLAYERTWO << "\n";
	}
	if (P1OVERALLSCORE < P2OVERALLSCORE)
	{
		cout << PLAYERTWO << " is better than " << PLAYERONE << "\n";
	}
	cout << PLAYERONE << "'s Overall Player Score is " << P1OVERALLSCORE << "\n";
	cout << PLAYERTWO << "'s Overall Player Score is " << P2OVERALLSCORE << "\n";
}