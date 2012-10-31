#ifndef _OSM_DIFF_STATE_H_
#define _OSM_DIFF_STATE_H_

#include <string>
#include <inttypes.h>

namespace osm_diff_analyzer_if
{
  class osm_diff_state
  {
  public:
    inline osm_diff_state(const uint64_t & p_sequence_number, const std::string & p_timestamp);
    inline const uint64_t & get_sequence_number(void)const;
    inline const std::string & get_timestamp(void)const;
  private:
    const uint64_t m_sequence_number;
    const std::string m_timestamp;
  };

  //----------------------------------------------------------------------------
  osm_diff_state::osm_diff_state(const uint64_t & p_sequence_number, const std::string & p_timestamp):
    m_sequence_number(p_sequence_number),
    m_timestamp(p_timestamp)
      {
      }

    //----------------------------------------------------------------------------
    const uint64_t & osm_diff_state::get_sequence_number(void)const
      {
        return m_sequence_number;
      }
    //----------------------------------------------------------------------------
    const std::string & osm_diff_state::get_timestamp(void)const
      {
        return m_timestamp;
      }


}
#endif // _OSM_DIFF_STATE_H_
//EOF
