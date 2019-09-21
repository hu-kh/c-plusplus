string getTitle(string);

string getTitle(string title)
{
    string re;
        re = "|--------------------------------------------\n";
       re += "|  " + title + "\n";
       re += "|--------------------------------------------\n";

    return re;
}