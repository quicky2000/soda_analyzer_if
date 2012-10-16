#ifndef _GENERAL_ANALYZER_IF_H_
#define _GENERAL_ANALYZER_IF_H_

#include "analyzer_description_if.h"

namespace osm_diff_analyzer_if
{
  class general_analyzer_if:public analyzer_description_if
  {
  public:
    virtual const std::string & get_name(void)const=0;
    inline virtual ~general_analyzer_if(void){};
  };
}

#endif // _GENERAL_ANALYZER_IF_H_
//EOF
