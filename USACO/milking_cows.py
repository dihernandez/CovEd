num_entries = 3

sample_input = [(300,1000),(700, 1200),(1500,2100), (6000,6500)]
START = 0
END = 1

def update_continuous_milked(sample_input, index, continuous_milk_length):
	interval = 0
	if sample_input[index][START] < sample_input[index - 1][END]:
		interval = sample_input[index][END] - sample_input[index -1][START]
	else:
		interval = sample_input[index][END] - sample_input[index][START] 
	continuous_milk_length = continuous_milk_length if continuous_milk_length > interval else interval	
	return continuous_milk_length

def update_continuous_not_milked(sample_input, index, continuous_rest_length):
	if sample_input[index - 1][END] < sample_input[index][START]:
		interval = sample_input[index][START] - sample_input[index - 1][END]
		continuous_rest_length = continuous_rest_length if continuous_rest_length > interval else interval
	return continuous_rest_length

def find_longest_continuous_milking(sample_input):
	continuous_milk_length = sample_input[0][END] - sample_input[0][START]
	continuous_rest_length = sample_input[0][START] 
	
	for index in range(1, len(sample_input)):
		continuous_milk_length = update_continuous_milked(sample_input, index, continuous_milk_length)
		continuous_rest_length = update_continuous_not_milked(sample_input, index, continuous_rest_length)		

	return continuous_milk_length, continuous_rest_length

print(find_longest_continuous_milking(sample_input))