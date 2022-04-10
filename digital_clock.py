from time import sleep
present = input("Enter the time to set in HH:MM:SS (24-hour-format): ").split(":")
hour = int(present[0])
minute = int(present[1])
second = int(present[2])
if 0 <= hour < 24 and 0 <= minute < 60 and 0 <= second < 60:    
    while True:
        second += 1
        if second > 59: minute += 1; second = 0
        if minute > 59: hour += 1; minute = 0
        if hour > 23:
            print("The new day has started")
            hour = 0
        print(f"{hour:02d}:{minute:02d}:{second:02d}",end = '')
        sleep(1)
        print("\r",end = '')
else: print("Entered a invalid time")