#ifndef _SAX_ANALYZER_BASE_H_
#define _SAX_ANALYZER_BASE_H_

#include "analyzer_base.h"
#include "sax_analyzer_if.h"

namespace osm_diff_analyzer_if
{
  class sax_analyzer_base: public analyzer_base,public sax_analyzer_if
  {
  public:
    inline sax_analyzer_base(const std::string & p_type,
			     const std::string & p_name,
			     const std::string & p_input_type,
			     const std::string & p_output_type);

  private:
  };
  //----------------------------------------------------------------------------
  sax_analyzer_base::sax_analyzer_base(const std::string & p_type,
				       const std::string & p_name,
				       const std::string & p_input_type,
				       const std::string & p_output_type):
    analyzer_base(p_type,p_name,p_input_type,p_output_type)
    {
    }

}
#endif // _SAX_ANALYZER_BASE_H_
//EOF
