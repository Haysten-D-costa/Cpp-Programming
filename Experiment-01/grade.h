namespace grade
{
    char grde(int sum, int n)
    {
        int P;
        char G;
        P = (sum/n);
        if(P == 100 )
            return('O');
        else if((P>=90) && (P<=100))
            return('A');
        else if((P>=71) && (P<=89))
            return('B');
        else if((P>=60) && (P<=70))
            return('C');
        else if((P>=40) && (P<=59))
            return('D');
        else
            return('F');
    }
}
