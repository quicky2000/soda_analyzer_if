#ifndef _DOM_ANALYZER_IF_H_
#define _DOM_ANALYZER_IF_H_

#include "dom_analyzer_generic_if.h"
#include "xmlParser.h"

namespace osm_diff_analyzer_if
{
  // Type defining interface of dom_analyzer independantly of type used to represent the XML tree
  typedef dom_analyzer_generic_if<XMLNode> dom_analyzer_if;
  typedef XMLNode t_dom_tree;
}

#endif // _DOM_ANALYZER_IF_H_
//EOF
