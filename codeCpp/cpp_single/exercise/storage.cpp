        int len=temperatures.size();
        vector<int>v;
        for(int i=0;i<len;i++){
            int temp=temperatures[i];
            int flag=0,index=0;
            for(int j=i;j<len;j++){
                if(temperatures[j]>temp){
                    flag=1;
                    index=j-i;
                    break;
                }
            }
            if(flag==1){
                v.push_back(index);
            }
            else{
                v.push_back(0);
            }
        }
        return v;
