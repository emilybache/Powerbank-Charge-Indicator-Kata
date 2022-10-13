#include "led.h"
#include "powerbank.h"
#include "unity.h"

void setUp(void) {}

void tearDown(void) {}

void test_unity_framework(void) { TEST_MESSAGE("Unity is working!"); }

void test_powerbank_NeedToImplement(void) {
  TEST_IGNORE_MESSAGE("Need to Implement powerbank");
}

int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(test_unity_framework);
  RUN_TEST(test_powerbank_NeedToImplement);
  return UNITY_END();
}

#if defined(AVR)
void setup() { runUnityTests(); }
void loop() {}
#else
int main() {
  runUnityTests();
  return 0;
}
#endif
