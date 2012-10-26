#ifndef _MODULE_LIBRARY_IF_H_
#define _MODULE_LIBRARY_IF_H_

#include "general_analyzer_if.h"
#include "module_configuration.h"
#include <stdint.h>

namespace osm_diff_analyzer_if
{
#define MODULE_LIBRARY_IF_VERSION "0.1"
#define MODULE_LIBRARY_IF_API_SIZE 6

  class module_library_if
  {
  public:

    typedef void(*t_register_function)(void **,uint32_t);

    typedef general_analyzer_if*(*t_create_analyzer)(const module_configuration * p_conf);
    typedef analyzer_description_if * (*t_get_description)(void);
    typedef const char *(*t_get_api_version)(void);
    typedef uint32_t(*t_get_api_size)(void);
    typedef void (*t_require_common_api)(t_register_function);
    typedef void (*t_cleanup)(void);
    typedef enum /* class */ {GET_API_VERSION=0,
                              GET_API_SIZE,
			      GET_DESCRIPTION,
			      CREATE_ANALYZER,
			      REQUIRE_COMMON_API,
                              CLEAN_UP} t_module_library_index;
  };
}
#endif // _MODULE_LIBRARY_IF_H_
//EOF
