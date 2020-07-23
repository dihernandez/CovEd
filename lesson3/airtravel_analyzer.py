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
            total_number_flights_per_month[row[0]] = []
            total_number_flights_per_month[row[0]].append(int(row[1]))
            total_number_flights_per_month[row[0]].append(int(row[2]))
            total_number_flights_per_month[row[0]].append(int(row[3]))

print("total flights per month", total_number_flights_per_month)
print("average over the years ", {key: int(sum(value)/len(value)) for key, value in total_number_flights_per_month.items()})
total_flights_per_year = {1958 : 0,1959 : 0, 1960 : 0}
for val in total_number_flights_per_month.values():
    total_flights_per_year[1958] += val[0]
    total_flights_per_year[1959] += val[1]
    total_flights_per_year[1960] += val[2]

print("total flights per year", total_flights_per_year)