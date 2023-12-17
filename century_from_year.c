int centuryFromYear(int year) 
{
  int century = (year / 100) + ((year % 100 == 0) ? 0 : 1);

    return century;
}