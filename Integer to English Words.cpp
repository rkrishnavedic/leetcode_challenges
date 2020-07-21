class Solution {
public:
    
    string twodigit(int n){
        if(n==0) return "";
        if(n==1) return " One";
        if(n==2) return " Two";
        if(n==3) return " Three";
        if(n==4) return " Four";
        if(n==5) return " Five";  
        if(n==6) return " Six";
        if(n==7) return " Seven";
        if(n==8) return " Eight";
        if(n==9) return " Nine";
        if(n==10) return " Ten";
        if(n==11) return " Eleven";
        if(n==12) return " Twelve";
        if(n==13) return " Thirteen";
        if(n==14) return " Fourteen";
        if(n==15) return " Fifteen";
        if(n==16) return " Sixteen";
        if(n==17) return " Seventeen";
        if(n==18) return " Eighteen";
        if(n==19) return " Nineteen";
        
        if(n/10==1) return " One";
        if(n/10==2) return " Twenty"+twodigit(n%10);
        if(n/10==3) return " Thirty"+twodigit(n%10);
        if(n/10==4) return " Forty"+twodigit(n%10);
        if(n/10==5) return " Fifty"+twodigit(n%10);  
        if(n/10==6) return " Sixty"+twodigit(n%10);
        if(n/10==7) return " Seventy"+twodigit(n%10);
        if(n/10==8) return " Eighty"+twodigit(n%10);
        if(n/10==9) return " Ninety"+twodigit(n%10);
        if(n/10==0) return "";
        
 return "";   }
    
    string threedigit(int num){
        if(num==0) return "";
        int n=num/100;
        if(n%10==0) return twodigit(num%100);
        return twodigit(n%10)+" Hundred"+twodigit(num%100);
    }
    
    string sixdigit(int num){
        if(num==0) return "";
        int n=num/1000;
        if(n>0){
        return threedigit(n%1000)+" Thousand"+threedigit(num%1000);}
        return threedigit(num);
    }
    
    string ninedigit(int num){
        if(num==0) return "";
        int n=num/1000000;
        if(n>0){
        return threedigit(n%1000)+" Million"+sixdigit(num%1000000);}
        return sixdigit(num);
    }
    string tdigit(int num){
        int n=num/1000000000;
        if(n>0){
        return threedigit(n%1000)+" Billion"+ninedigit(num%1000000000);}
        return ninedigit(num);
    }
    
    string numberToWords(int num) {
        
        if(num==0) return "Zero";
        string s= tdigit(num);
        int cnt=s.size()-1;
        while(cnt>=0 && s[cnt]==' ') cnt--;
        for(int i=cnt+1;i<s.size();i++){
            s.pop_back();
        }
        if(s[0]==' '){
            s=s.substr(1,s.size()-1);
        }
        return s;
    }
};
