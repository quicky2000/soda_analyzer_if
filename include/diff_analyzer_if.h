#ifndef _DIFF_ANALYZER_IF_H_
#define _DIFF_ANALYZER_IF_H_

#include "general_analyzer_if.h"
#include "osm_diff_state.h"

namespace osm_diff_analyzer_if
{
  class diff_analyzer_if:public general_analyzer_if
  {
  public:
    virtual void init(const osm_diff_state * p_diff_state)=0;
    inline virtual ~diff_analyzer_if(void){};
  };
}

#endif // _OSM_DIFF_ANALYZER_IF_H_
//EOF
