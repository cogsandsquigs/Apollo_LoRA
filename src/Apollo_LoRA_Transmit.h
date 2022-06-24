#pragma once

/* Apollo_LoRA_Transmit library by Ian Pratt <ianjdpratt@gmail.com>
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

using namespace std;

// This is your main class that users will import into their application
class Apollo_LoRA_Transmit
{
public:
  /**
   * Constructor
   */
  Apollo_LoRA_Transmit();

  /**
   * transmits data over LoRA
   */
  void transmit(string data);

private:
  /**
   * Example private method
   */
  void doit();
};
