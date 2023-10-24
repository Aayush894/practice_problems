#include <bits/stdc++.h> 

int solve(vector<int> weight, vector<int> value, int n, int maxWeight,int index){
	if(index == 0){
		if( weight[0] <= maxWeight)
			return value[0] ;

		return 0 ;
	}

	int include = 0 ; 
	int exclude = 0 ;
	if(weight[index] <= maxWeight){
		include = value[index] + solve(weight,value,n,maxWeight-weight[index],index-1)  ;
	}
	exclude = 0 + solve(weight,value,n,maxWeight,index-1)  ;
	
	int ans = max(include,exclude) ;
	return ans ; 
}

int SolveMem(vector<int> weight, vector<int> value, int n, int maxWeight,int index, vector<vector<int>>& dp){
	if(index == 0){
		if( weight[0] <= maxWeight)
			return value[0] ;

		return 0 ;
	}

	if(dp[index][maxWeight] != -1)
		return dp[index][maxWeight] ; 

	int include = 0 ; 
	int exclude = 0 ;
	if(weight[index] <= maxWeight){
		include = value[index] + SolveMem(weight,value,n,maxWeight-weight[index],index-1,dp)  ;
	}
	exclude = 0 + SolveMem(weight,value,n,maxWeight,index-1,dp)  ;
	
	dp[index][maxWeight] = max(include,exclude) ;
	return dp[index][maxWeight] ; 
}

int SolveTab(vector<int> weight, vector<int> value, int n, int maxWeight){
	// initialise dp;
	vector<vector<int>> dp(n, vector<int>(maxWeight+1,0)) ; 
	// Step2: analyse base case
	for(int w = weight[0];w <= maxWeight;w++){
		if(weight[0] <= maxWeight)
			dp[0][w] = value[0] ;
		else
			dp[0][w] = 0 ;
	} 

	// Take care of remaining recursive Calls
	for(int index = 1;index < n;index++){
		for(int w = 0;w <= maxWeight;w++){
			int include = 0 ;

			if(weight[index] <= w){
				include = value[index] + dp[index-1][w-weight[index]] ; 
			}

			int exclude = 0 + dp[index-1][w] ; 

			dp[index][w] = max(include,exclude) ; 
		}
	}

	return dp[n-1][maxWeight] ; 
}

int SolveTabOptimise(vector<int> weight, vector<int> value, int n, int maxWeight){
	// initialise dp;
	
	// vector<int> prev(maxWeight+1, 0) ; 
	vector<int> curr(maxWeight+1, 0) ; 

	// Step2: analyse base case
	for(int w = weight[0];w <= maxWeight;w++){
		if(weight[0] <= maxWeight)
			curr[w] = value[0] ;
		else
			curr[w] = 0 ;
	} 

	// Take care of remaining recursive Calls
	for(int index = 1;index < n;index++){
		for(int w = maxWeight;w >= 0;w--){
			int include = 0 ;

			if(weight[index] <= w){
				include = value[index] + curr[w-weight[index]] ; 
			}

			int exclude = 0 + curr[w] ; 

			curr[w] = max(include,exclude) ; 

			// prev = curr ; 
		}
	}

	return curr[maxWeight] ; 
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// return solve(weight,value,n,maxWeight,n-1) ; 

	// vector<vector<int>> dp(n, vector<int>(maxWeight+1, -1)) ; 
	// return SolveMem(weight,value,n,maxWeight,n-1,dp) ; 

	// return SolveTab(weight,value,n,maxWeight) ;
	return SolveTabOptimise(weight,value,n,maxWeight) ;
}
