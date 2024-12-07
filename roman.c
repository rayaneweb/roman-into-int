int romanToInt(char* s) {
    int resultat=0;
    int prev=0;
    while(*s){
    int cur;
    switch (*s){
        case 'I': cur=1; break;
        case 'V': cur=5;
        break;
        case 'X':cur=10;
        break;
        case 'L':cur=50;
        break; 
        case 'C':cur=100;
        break;
         case 'D':cur=500;
        break;
         case 'M':cur=1000;
        break;
        
    }
    if(cur>prev) resultat+=cur -2*prev;
    else resultat+=cur;
    prev=cur;
    s++;
  }
  return resultat;
}