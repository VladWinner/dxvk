#pragma once

#include "../dxvk_include.h"

namespace dxvk {
  
  /**
   * \brief SPIR-V ID counter
   * 
   * Allocates IDs, starting at zero. This is meant
   * to be used to allocate unique IDs during code
   * generation.
   */
  class DxvkSpirvIdCounter {
    
  public:
    
    uint32_t nexId() {
      return m_id++;
    }
    
    uint32_t numIds() const {
      return m_id;
    }
    
  private:
    
    uint32_t m_id = 0;
    
  };
  
}