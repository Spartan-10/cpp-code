/*
A hotel manager has to process N advance bookings of rooms for the next season. His hotel has K rooms. Bookings contain an arrival date and a departure date. He wants to find out whether there are enough rooms in the hotel to satisfy the demand. Write a program that solves this problem in time O(N log N) .

Input:


First list for arrival time of booking.
Second list for departure time of booking.
Third is K which denotes count of rooms.

Output:

A boolean which tells whether its possible to make a booking. 
Return 0/1 for C programs.
O -> No there are not enough rooms for N booking.
1 -> Yes there are enough rooms for N booking.
Example :

Input : 
        Arrivals :   [1 3 5]
        Departures : [2 6 8]
        K : 1

Return : False / 0 

At day = 5, there are 2 guests in the hotel. But I have only one room. 
*/
//Solution:

bool Solution::hotel(vector<int> &arr, vector<int> &dep, int K) {
    
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    
    int r=1,i=1,j=0,temp=1;
    
    while(i<arr.size() && j<arr.size())
    {
        if(arr[i] < dep[j])
        {
            temp++;
            i++;
            r=max(r,temp);
        }
        else
        {
            j++;
            temp--;
        }
    }
    
    return (K >= r);
}
