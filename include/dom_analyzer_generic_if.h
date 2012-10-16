#ifndef _DOM_ANALYZER_GENERIC_IF_H_
#define _DOM_ANALYZER_GENERIC_IF_H_

#include "general_analyzer_if.h"

namespace osm_diff_analyzer_if
{
  template <class T>
    class dom_analyzer_generic_if: public general_analyzer_if
    {
    public:
      typedef T node_type;

      virtual void analyze(const T & p_tree)=0;
      virtual ~dom_analyzer_generic_if(void){}
    };
}
#endif // _DOM_ANALYZER_GENERIC_IF_H_
//EOF
