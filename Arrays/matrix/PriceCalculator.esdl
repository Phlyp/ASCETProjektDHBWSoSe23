package matrix;

type Grocery is enum {
	Onion, Potato, Tomato
};

type SaleSeason is enum {
	OnSeason, OffSeason
};

type SquareMatrix is array[][] of real;
type OrderMatrix is array[4][Grocery] of real; 				// four weeks of groceries
type PriceMatrix is array[Grocery][SaleSeason] of real;		// prices change per season
type OrderPrice is array[4][SaleSeason] of real;

static class PriceCalculator {
	
	OrderMatrix groceryOrders = {{4.0, 6.0, 2.0}, {3.0, 2.0, 1.0}, {3.5, 2.5, 1.5}, {3.0, 2.0, 1.0}};
	PriceMatrix groceryPrices = {{1.49, 1.99}, {1.25, 1.65}, {1.99, 2.99}};
	OrderPrice orderPrices;
	
	/**
	 * Add two matrices
	 */
    public void increasePrice(real in value){
    	for (item in Grocery) {
	        for(season in SaleSeason) {
	        	groceryPrices[item][season] += value;
	        }
    	}
     }
	
	/**
	 * Multiply two matrices
	 */
    public void calculatePrices(){
        for(week in orderPrices.indexRange(0)) {
            for(season in orderPrices.indexRange(1)) {
              for(groc in groceryPrices.indexRange()) {
                  orderPrices[week][season] += groceryOrders[week][groc] * groceryPrices[groc][season];
              }
           }
        }
     }
	
}