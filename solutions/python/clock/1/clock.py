class Clock:

	def __init__(self, hours, minutes):
		self.total = hours * 60 + minutes
		
	def __str__(self):
		self.refine()
		return '{:02}:{:02}'.format((self.total / 60) % 24, self.total % 60)

	def __eq__(self, other):
		return self

	def add(self, minutes):
		self.total += minutes
		return self

	def refine(self):
		if self.total < 0:
			self.total *= -1
			self.total %= 1440
			self.total = abs(1440 - self.total)