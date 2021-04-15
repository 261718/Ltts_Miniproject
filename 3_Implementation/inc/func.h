#ifndef __FUNC_H__
#define __FUNC_H__

#include<stdio.h>
#include<stdlib.h>


void ClearConsoleToColors(int ForgC, int BackC);
void SetColor(int ForgC);
void SetColorAndBackground(int ForgC, int BackC);
void drawRectangle();
void clearWindow();
void window();
void get_password(char* pass);
void use_pass_field();
void print_heading(const char st[]);
int conf_record(char id[]);
void add_student();
void search_student();
void mod_student();
void gen_marksheet();
void delete_student();
void main_window();


#endif
