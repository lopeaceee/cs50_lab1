#include <cs50.h>
#include <stdio.h>

int get_current_size(void);
int get_end_size(int initial_size);
int year_generator(int changing_size, int end_size);

int main(void)
{
    int size = get_current_size();
    int result = get_end_size(size);
    int year = year_generator(size, result);
    printf("Years: %i\n", year);
}


int get_current_size(void)
{
    int start_size;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);
    return start_size;
}

int get_end_size(int initial_size)
{
    int end_size;
    do
    {
        end_size = get_int("End size: ");
    } 
    while (end_size < initial_size);
    return end_size;
}

int year_generator(int changing_size, int end_size)
{
    int i = 0;
    while (changing_size < end_size)
    {
        int added_llamas = changing_size / 3;
        int removed_llamas = changing_size / 4;
        int new_size = changing_size + added_llamas - removed_llamas;
        i++;
        changing_size = new_size;
    }
    return i;
}