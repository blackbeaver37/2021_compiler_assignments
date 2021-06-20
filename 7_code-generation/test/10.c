enum DayOfWeek
{
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

void main()
{
    enum DayOfWeek today;
    today = Monday;
    printf("%d\n", today);
}