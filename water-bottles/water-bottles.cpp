class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
         int drink = numBottles;
         int empty=numBottles;
         while(empty>=numExchange)
         {
             int exchange=empty/numExchange;
             int rem=empty%numExchange;
             empty=exchange + rem;
             drink = drink + exchange;
             
         }
        return drink;

    }
};