#ifndef _ANALYZER_DESCRIPTION_IF_H_
#define _ANALYZER_DESCRIPTION_IF_H_

#include <string>

namespace osm_diff_analyzer_if
{
  class analyzer_description_if
  {
  public:
    virtual const std::string & get_input_type(void)const=0;
    virtual const std::string & get_output_type(void)const=0;
    virtual const std::string & get_type(void)const=0;
    virtual ~analyzer_description_if(void){};
  private:
  };
}
#endif //_ANALYZER_DESCRIPTION_IF_H
//EOF
