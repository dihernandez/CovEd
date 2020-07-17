import csv

total_number_flights_per_month = {}
with open("airtravel.csv", "r") as csvfile:
    travel_reader = csv.reader(csvfile, delimiter= ',')
    for row in travel_reader:
        if len(row) <= 0:
            pass
        elif row[0] == "Month":
            pass
        else:
            total_number_flights_per_month[row[0]] = int(row[1]) + int(row[2]) + int(row[3])

print(total_number_flights_per_month)