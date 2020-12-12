#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/




/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

#include "dna.h"

double get_gc_content(const string & dna)
{
  double G_count = 0;
  double C_count = 0;
  for (int i = 0; i < dna.length(); i++)
  {
    if (dna[i] == 'G')
        G_count++;
    if (dna[i] == 'C')
        C_count++;
  }
  return (G_count + C_count) / dna.length();
}

string get_dna_complement(string dna)
{
  string rev_dna = reverse_string(dna);
  for (int i = 0; i < rev_dna.length(); i++)
  {
    switch (rev_dna[i])
    {
      case 'A':
        rev_dna[i] = 'T';
        break;
      case 'T':
        rev_dna[i] = 'A';
        break;
      case 'C':
        rev_dna[i] = 'G';
        break;
      case 'G':
        rev_dna[i] = 'C';
        break;
    }
  }
  return rev_dna;
}

string reverse_string(string dna)
{
  string revDNA = "";
  for (int i = dna.length() - 1; i >= 0; i--)
    revDNA += dna[i];
  return revDNA;
}