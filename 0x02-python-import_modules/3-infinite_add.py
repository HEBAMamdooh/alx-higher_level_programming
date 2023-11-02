#!/usr/bin/python3
if __name__ == "__main__":
    import sys

    a = len(sys.argv)
    res = 0

    for b in range(1, a):
        res = res + int(sys.argv[b])
    print(f"{res:d}")
