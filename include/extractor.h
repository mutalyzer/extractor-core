#if !defined(__extractor_h__)
#define __extractor_h__


#include <cstddef>

#include <vector>


namespace mutalyzer
{


typedef char char_t;


static unsigned int const IDENTITY = 0x01;


struct Variant
{
    size_t       reference_start;
    size_t       reference_end;
    size_t       sample_start;
    size_t       sample_end;
    unsigned int type;
    union
    {
        size_t   weight;
        double   probability;
    }; // anonymous union
    size_t       transposition_start;
    size_t       transposition_end;

    inline Variant(size_t const       reference_start,
                   size_t const       reference_end,
                   size_t const       sample_start,
                   size_t const       sample_end,
                   unsigned int const type                = IDENTITY,
                   size_t const       weight              = 0,
                   size_t const       transposition_start = 0,
                   size_t const       transposition_end   = 0):
                reference_start(reference_start),
                reference_end(reference_end),
                sample_start(sample_start),
                sample_end(sample_end),
                type(type),
                weight(weight),
                transposition_start(transposition_start),
                transposition_end(transposition_end) { }

    inline Variant(void) { }
}; // Variant


std::vector<Variant>
extract_dna(char_t const* const reference,
            size_t const        reference_length,
            char_t const* const sample,
            size_t const        sample_length);


} // mutalyzer namespace


#endif
