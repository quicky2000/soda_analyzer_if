#ifndef _MODULE_LIBRARY_IF_H_
#define _MODULE_LIBRARY_IF_H_

#include "general_analyzer_if.h"
#include <stdint.h>

namespace osm_diff_analyzer_if
{
#define MODULE_LIBRARY_IF_VERSION "1.0"
#define MODULE_LIBRARY_IF_API_SIZE 3

  class module_library_if
  {
  public:

    typedef void(*t_register_function)(void **,uint32_t);

    typedef general_analyzer_if*(*t_create_analyzer)(const std::string & p_name);
    typedef analyzer_description_if * (*t_get_description)(void);
    typedef const char *(*t_get_api_version)(void);
    typedef enum /* class */ {GET_API_VERSION=0,
			      GET_DESCRIPTION,
			      CREATE_ANALYZER} t_module_library_index;
  };
}
#endif // _MODULE_LIBRARY_IF_H_
//EOF
