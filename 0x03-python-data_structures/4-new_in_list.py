#!/usr/bin/python3

def new_in_list(my_list, x, element):
    if x < 0 or x >= len(my_list):
        return my_list.copy()
    new_list = my_list.copy()
    new_list[x] = element
    return new_list
