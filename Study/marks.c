int marks_summation(int *marks, int number_of_students, char gender)
{
    int boyz = 0, girlz = 0;

    for (int i = 0; i < number_of_students; i++)
    {
        if (i % 2 == 0)
        {
            boyz += marks[i];
        }
        else
        {
            girlz += marks[i];
        }
    }

    return (gender == 'b') ? boyz : girlz;
}