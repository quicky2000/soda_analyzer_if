#ifndef _ANALYZER_BASE_H_
#define _ANALYZER_BASE_H_

#include <string>

namespace osm_diff_analyzer_if
{
  class analyzer_base
  {
  public:
    inline analyzer_base(const std::string & p_type,
			 const std::string & p_name,
			 const std::string & p_input_type,
			 const std::string & p_output_type);
    inline const std::string & get_name(void)const;
    inline const std::string & get_input_type(void)const;
    inline const std::string & get_output_type(void)const;
    inline const std::string & get_type(void)const;
  private:
    std::string m_type;
    std::string m_name;
    std::string m_input_type;
    std::string m_output_type;
  };

  //----------------------------------------------------------------------------
  analyzer_base::analyzer_base(const std::string & p_type,
			       const std::string & p_name,
			       const std::string & p_input_type,
			       const std::string & p_output_type):
    m_type(p_type),
    m_name(p_name),
    m_input_type(p_input_type),
    m_output_type(p_output_type)
    {
    }

  //----------------------------------------------------------------------------
  const std::string & analyzer_base::get_name(void)const
    {
      return m_name;
    }

  //----------------------------------------------------------------------------
  const std::string & analyzer_base::get_input_type(void)const
    {
      return m_input_type;
    }

  //----------------------------------------------------------------------------
  const std::string & analyzer_base::get_output_type(void)const
    {
      return m_output_type;
    }

  //----------------------------------------------------------------------------
  const std::string & analyzer_base::get_type(void)const
    {
      return m_type;
    }
}

#endif // _ANALYZER_BASE_H_
//EOF
