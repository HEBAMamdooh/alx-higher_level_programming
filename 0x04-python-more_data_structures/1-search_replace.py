#!/usr/bin/python3
def search_replace(my_list, search, replace):
    def ser_rep_elm(x):
        return (x if x != search else replace)
    return list(map(ser_rep_elm, my_list))
