DNA_TO_RNA = {'A': 'U', 'C': 'G', 'G': 'C', 'T': 'A'}

def to_rna(dna):
	return ''.join([DNA_TO_RNA[nucleotide] for nucleotide in dna])