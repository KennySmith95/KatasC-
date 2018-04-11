class Babysitter {
	int runningTotal;
	int awake;
	int asleep;
	int afterMid;
	public:
		Babysitter();
		/* Babysitter::calculatePay()
		 * calculates the pay
		 * input: arrival time, depart time, bedtime
		 * returns total pay
		 */
		int calculatePay(int arriv, int depart, int bedtime);
		
		/* Babysitter::convertInTimes()
		 * Input: time
		 * Output: time
		 * converts the input time to an inverted 24 hour clock (0 = noon, 12 = midnight) 
		 * for easier arithmetic 
		 */
		int convertInTimes(int times);
		
		
};
