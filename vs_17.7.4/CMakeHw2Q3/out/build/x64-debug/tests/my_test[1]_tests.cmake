add_test([=[TestTopic.TrivialEquality]=]  C:/Users/Owner/source/repos/F23CS660hw_v2/vs_17.7.4/CMakeHw2Q3/out/build/x64-debug/tests/my_test.exe [==[--gtest_filter=TestTopic.TrivialEquality]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TestTopic.TrivialEquality]=]  PROPERTIES WORKING_DIRECTORY C:/Users/Owner/source/repos/F23CS660hw_v2/vs_17.7.4/CMakeHw2Q3/out/build/x64-debug/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TestTopic.MoreEqualityTests]=]  C:/Users/Owner/source/repos/F23CS660hw_v2/vs_17.7.4/CMakeHw2Q3/out/build/x64-debug/tests/my_test.exe [==[--gtest_filter=TestTopic.MoreEqualityTests]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TestTopic.MoreEqualityTests]=]  PROPERTIES WORKING_DIRECTORY C:/Users/Owner/source/repos/F23CS660hw_v2/vs_17.7.4/CMakeHw2Q3/out/build/x64-debug/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  my_test_TESTS TestTopic.TrivialEquality TestTopic.MoreEqualityTests)
