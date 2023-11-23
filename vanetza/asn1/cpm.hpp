#ifndef CPM_HPP_WEWZK69S
#define CPM_HPP_WEWZK69S

#define VANETZA_USE_ITS2 1

#include <vanetza/asn1/asn1c_conversion.hpp>
#include <vanetza/asn1/asn1c_wrapper.hpp>
#if VANETZA_USE_ITS2
#include <vanetza/asn1/its/CollectivePerceptionMessage.h>
#else
#include <vanetza/asn1/its/CPM.h>
#endif

namespace vanetza
{
namespace asn1
{
#if VANETZA_USE_ITS2
class Cpm : public asn1c_per_wrapper<CollectivePerceptionMessage_t>
#else
class Cpm : public asn1c_per_wrapper<CPM_t>
#endif
{
public:
#if VANETZA_USE_ITS2
    Cpm() : asn1c_per_wrapper(asn_DEF_CollectivePerceptionMessage) {}
#else
    Cpm() : asn1c_per_wrapper(asn_DEF_CPM) {}
#endif
};

} // namespace asn1
} // namespace vanetza

#endif /* CPM_HPP_WEWZK69S */

