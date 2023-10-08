class Solution {
public:
    double average(vector<int>& salary) {
        int min=salary[0],max=salary[0];
        for (int i=1;i<salary.size();i++){
            if(salary[i]<min)
                min=salary[i];
            if(salary[i]>max)
                max=salary[i];
        }
        cout<<min<<" "<<max<<endl;
        double average=0;
        for (int i=0;i<salary.size();i++){
            if(salary[i]!=max && salary[i]!=min){
                average+=salary[i];
            }
        }
        return average/double(salary.size()-2);

    }
};