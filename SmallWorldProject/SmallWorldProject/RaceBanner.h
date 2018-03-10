#pragma once

/*
Race Banner class

Used solely as an abstract class to be inherited from. All of the 14 possible races of the game
will inherit this class and inherit its methods.
*/
class RaceBanner {
	public:
		RaceBanner();
		virtual ~RaceBanner();
		//returns the number of race tokens a race initially provides the player
		int getRaceTokens();
		//checks to see if the race is in decline
		bool isInDecline();
		//sets the race to be in decline
		void setInDecline();
	protected:
		//every derived class will set the number of race tokens given to the player when they choose that race
		int raceTokens;
		/*set to true if the race is in decline. Initially starts as false since a race object that is created is
			obviously not immediately in decline */
		bool inDecline = false;
};