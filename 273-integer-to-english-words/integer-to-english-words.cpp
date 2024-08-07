class Solution {
public:
    string solve(int num,int cnt,string &s){

        if(num==0){
            return s;
        }


        int x = num%1000;

         if(cnt==2 && x>0){
            s="Thousand "+s;
        }
        else if(cnt==3 && x>0){
            s="Million "+s;
        }
        else if(cnt==4 && x>0){
            s="Billion "+s;
        }

                if(x%100<10 || x%100>19){
                    if(x%10==1){
                        s="One "+s;
                    }
                    else if(x%10==2){
                        s="Two "+s;
                    }
                    else if(x%10==3){
                        s="Three "+s;
                    }
                    else if(x%10==4){
                        s="Four "+s;
                    }
                    else if(x%10==5){
                        s="Five "+s;
                    }
                    else if(x%10==6){
                        s="Six "+s;
                    }
                    else if(x%10==7){
                        s="Seven "+s;
                    }
                    else if(x%10==8){
                        s="Eight "+s;
                    }
                    else if(x%10==9){
                        s="Nine "+s;
                    }
                }
                else{
                    if(x%100==10){
                        s="Ten "+s;
                    }
                    else if(x%100==11){
                        s="Eleven "+s;
                    }
                    else if(x%100==12){
                        s="Twelve "+s;
                    }
                    else if(x%100==13){
                        s="Thirteen "+s;
                    }
                    else if(x%100==14){
                        s="Fourteen "+s;
                    }
                    else if(x%100==15){
                        s="Fifteen "+s;
                    }
                    else if(x%100==16){
                        s="Sixteen "+s;
                    }
                    else if(x%100==17){
                        s="Seventeen "+s;
                    }
                    else if(x%100==18){
                        s="Eighteen "+s;
                    }
                    else if(x%100==19){
                        s="Nineteen "+s;
                    }
                }

                x=x/10;
                cout<<x;

                if(x%10==2){
                    s="Twenty "+s;
                }
                else if(x%10==3){
                    s="Thirty "+s;
                }
                else if(x%10==4){
                    s="Forty "+s;
                }
                else if(x%10==5){
                    s="Fifty "+s;
                }
                else if(x%10==6){
                    s="Sixty "+s;
                }
                else if(x%10==7){
                    s="Seventy "+s;
                }
                else if(x%10==8){
                    s="Eighty "+s;
                }
                else if(x%10==9){
                    s="Ninety "+s;
                }

                x=x/10;
                cout<<x<<endl;

               if(x>0){
                     s="Hundred "+s;
                }

                if(x%10==1){
                        s="One "+s;
                    }
                    else if(x%10==2){
                        s="Two "+s;
                    }
                    else if(x%10==3){
                        s="Three "+s;
                    }
                    else if(x%10==4){
                        s="Four "+s;
                    }
                    else if(x%10==5){
                        s="Five "+s;
                    }
                    
                    else if(x%10==6){
                        s="Six "+s;
                    }
                    else if(x%10==7){
                        s="Seven "+s;
                    }
                    else if(x%10==8){
                        s="Eight "+s;
                    }
                    else if(x%10==9){
                        s="Nine "+s;
                    }

                    

                cout<<s<<endl;
       
        
        return solve(num/1000,cnt+1,s);
    }
    string numberToWords(int num) {
        string s="";
        s = solve(num,1,s);
        s=s.substr(0,s.length()-1);
        if(num==0) s="Zero";
        return s;
        // return s;
    }
};