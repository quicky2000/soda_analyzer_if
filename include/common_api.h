#infdef _COMMON_API_H_
#define _COMMON_API_H_

#include "module_library_if.h"

namespace osm_diff_analyzer_if
{
  class common_api
  {
  public:
    typedef const char *(*t_get_api_version)(void);
    typedef const std::string (*t_get_user_subscription_date)(const std::string & p_name); 

    typedef enum /* class */ {GET_API_VERSION=0,
			      GET_USER_SUBSCRIPTION_DATE} t_common_api_index;
  };
}
#endif // _COMMON_API_H_
//EOF
