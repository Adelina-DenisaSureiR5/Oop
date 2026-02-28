#ifndef HEADER_H
#define HEADER_H
class Student{
    char name[70];
    float math;
    float eng;
    float hist;
public:
    void set_name(const char *name);
    void set_grade_math(float x);
    void set_grade_eng(float x);
    void set_grade_hist(float x);
    char *get_name();
    float get_grade_math();
    float get_grade_eng();
    float get_grade_hist();
    float avg_grade();

};
#endif // !1