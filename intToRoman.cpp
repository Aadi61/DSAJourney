class Solution {
public:
    string intToRoman(int num) {
        //string roman;
        int unit= num % 10;
        int ten= num%100-unit;
        int hundred= num%1000-ten;
        int thousand= num%10000- hundred;
        string unitArr[9]={"I","II","III","IV","V","VI","VII","VIII","IX"};
        string tenArr[9]={"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundredArr[9]= {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousandArr[9]={"M","MM","MMM"};
        string unitRoman,tenRoman,hundredRoman,thousandRoman;
        tenRoman=unitRoman=hundredRoman=thousandRoman="";
        
        if(unit>0){
        unitRoman=unitArr[unit-1];
        }
        if(ten>9){
        tenRoman= tenArr[(ten/10)-1];
        }
        if(hundred>99){
            hundredRoman= hundredArr[(hundred/100)-1];
        }
        if(thousand>999){
            thousandRoman= thousandArr[(thousand/1000)-1];
        }
        return (thousandRoman+hundredRoman+tenRoman+unitRoman);
    }
};