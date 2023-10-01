class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        try {
            if (operations.size()<1 || operations.size()>100)
                throw -5;
            else {
                for(int i=0;i<operations.size();i++){
                    try {
                        if(operations[i]=="X++")
                            x++;
                        else if (operations[i]=="++X")
                            ++x;
                        else if (operations[i]=="X--")
                            x--;
                        else if(operations[i]=="--X")
                            --x;
                        else 
                            throw -10;
                    }
                    catch(int z){
                        printf("Only 4 operations are permissible ");
                    }
                }
            }
        }
        catch(int y){

            printf("Constraints are not met");
        }
        return x;
    }
};