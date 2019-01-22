#include "../include/extractor.h"

#include <cstddef>

#include <vector>


namespace mutalyzer
{


std::vector<Variant>
extract_dna(char_t const* const reference,
            size_t const        reference_length,
            char_t const* const sample,
            size_t const        sample_length)
{
    std::vector<Variant> result;

    result.push_back(Variant(1, 2, 3, 4, 5, 6, 7));
    result.push_back(Variant(2, 4, 6, 8, 10, 12, 21));
    result.push_back(Variant(3, 6, 9, 12, 15, 18, 28));
    result.push_back(Variant(4, 8, 12, 16, 20, 24, 35));

    return result;
} // extract_dna


} // mutalyzer namespace
