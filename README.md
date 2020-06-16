# Language: C++
# Input: FASTA
# Output: prefix
# Tested with: PluMA 1.0, GCC 4.8.4

PluMA plugin to run the linear time clustering algorithm LinClust (Steinegger and Soding, 2018)
on a set of sequences.

The plugin expects as input a FASTA file and will generate three output files beginning with the user-specified prefix:
prefix_all_seqs.fasta: All sequences
prefix_clusters.tsv: Sequences separated by cluster
prefix_rep_seq: The representative sequence of each cluster

LinClust comes installed with the MMSeqs package, which must be in your system PATH.
