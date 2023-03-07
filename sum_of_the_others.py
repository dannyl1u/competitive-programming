import sys


for line in sys.stdin:
    integers_string = line.split()
    integer_list = [int(s) for s in integers_string]
    answer_index = 0
    current_index = 0
    while True:        
        sum = 0
        current_index = 0
        while (current_index < len(integer_list)):
            if (current_index != answer_index):
                sum += integer_list[current_index]
            current_index += 1

        if (sum == integer_list[answer_index]):
            print(sum)
            break
        else:
            answer_index+=1
