//MERGED INTERVALS


#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int> > merge(vector<vector<int> >& intervals){
    vector<vector<int> > mergedIntervals;

    if(intervals.size()==0){
        return mergedIntervals;
    }

    sort(intervals.begin(),intervals.end());
    vector<int> tempIntervals = intervals[0];

    for(auto it:intervals){
        if(it[0]<=tempIntervals[1]){
            tempIntervals[1] = max(tempIntervals[1],it[1]);

        }
        else{
            mergedIntervals.push_back(tempIntervals);
            tempIntervals = it;
        }
    }

    return mergedIntervals;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int> > intervals(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        intervals[i].push_back(a);
        intervals[i].push_back(b);

    }

    vector<vector<int> > ans = merge(intervals);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}


// output


// 3

// 1 4
// 2 5 
// 6 8

// 1 8