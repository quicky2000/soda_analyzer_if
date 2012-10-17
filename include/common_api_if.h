#ifndef _COMMON_API_IF_H_
#define _COMMON_API_IF_H_

#include "module_library_if.h"

namespace osm_diff_analyzer_if
{
#define COMMON_API_IF_VERSION "1.0"
#define COMMON_API_IF_SIZE 2
  class common_api_if
  {
  public:
    typedef const char *(*t_get_api_version)(void);
    typedef void (*t_get_user_subscription_date)(const std::string & p_name,std::string & p_date); 

    typedef enum /* class */ {GET_API_VERSION=0,
			      GET_USER_SUBSCRIPTION_DATE} t_common_api_index;
  };
}
#endif // _COMMON_API_IF_H_
//EOF
