class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        map<pair<int,int>,int>mp;
        int ans=0;
        for(int i=0;i<obstacles.size();i++){
            mp[make_pair(obstacles[i][0],obstacles[i][1])] = 1;
        }

        int max_x=0,max_y=0;
        int direction = 1,x=0,y=0;
        
        for(int i=0;i<commands.size();i++){
            cout<<x<<" "<<y<<endl;

            if(commands[i]==-1){
                if(direction==4) direction=1;
                else direction++;
                continue;
            }
            else if(commands[i]==-2){
                if(direction==1) direction=4;
                else direction--;
                continue;
            }

            if(direction==1){
                int flag=0;
                for(int j=0;j<obstacles.size();j++){
                    if(x==obstacles[j][0] && y+commands[i]>=obstacles[j][1] && y<=obstacles[j][1] && !(obstacles[j][0]==x && obstacles[j][1]==y)){
                        flag=1;
                        y=obstacles[j][1]-1;
                        break;
                    }
                }
                if(flag==0){
                    y=y+commands[i];
                }
            }
            else if(direction==2){
                cout<<commands[i]<<endl;
                int flag=0;
                for(int j=0;j<obstacles.size();j++){
                    if(x<=obstacles[j][0] && x+commands[i]>=obstacles[j][0] && y==obstacles[j][1] && !(obstacles[j][0]==x && obstacles[j][1]==y)){
                        cout<<obstacles[j][0]<<endl;
                        flag=1;
                        x=obstacles[j][0]-1;
                        cout<<x<<endl;
                        break;
                    }
                }
                if(flag==0){
                    cout<<x<<endl;
                    x=x+commands[i];
                }
            }
            else if(direction==3){
                cout<<commands[i]<<endl;
                int flag=0;
                for(int j=0;j<obstacles.size();j++){
                    if(x==obstacles[j][0] && y-commands[i]<=obstacles[j][1] && y>=obstacles[j][1] && !(obstacles[j][0]==x && obstacles[j][1]==y)){
                        y=obstacles[j][1]+1;
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    y=y-commands[i];
                }
            }
            else if(direction==4){
                int flag=0;
                for(int j=0;j<obstacles.size();j++){
                    if(x>=obstacles[j][0] && x-commands[i]<=obstacles[j][0] && y==obstacles[j][1] && !(obstacles[j][0]==x && obstacles[j][1]==y)){
                        x=obstacles[j][0]+1;
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    x=x-commands[i];
                }
            }
            int a = x*x+y*y;
            ans=max(a,ans);
        }

        return ans;
    }
};