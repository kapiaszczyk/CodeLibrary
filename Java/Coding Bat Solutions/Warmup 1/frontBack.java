// Given a string, return a new string where the first and last chars have been exchanged.

public String frontBack(String str) {
    if (str.length() > 1) {
        int last = str.length();
        String  End = str.substring(last-1, last);
        String  Start = str.substring(0,1);
        String Middle = str.substring(1, last-1);
        return (End + Middle + Start);
    }
    else return (str);
}
