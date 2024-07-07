class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int canDrink=numBottles;
        while(numBottles>=numExchange){
            numBottles=numBottles-numExchange;
            canDrink++;
            numBottles++;
        }
        return canDrink;
    }
};