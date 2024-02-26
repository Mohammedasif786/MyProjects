#define Days 365

typedef struct calender {

    int date,year;
    enum week7 { 
        SUN = 1,MON,TUE,WED,THU,FRI,SAT
    }days;

    enum month12 {
        Jan = 1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec
    }month;

    //*put the days no.
    /*unsigned cal[size];
    char* days[7];*/
}calender;



