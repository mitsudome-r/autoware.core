// Copyright 2023 The Autoware Contributors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "autoware/core_component_interface_specs/localization.hpp"
#include "gtest/gtest.h"

TEST(localization, interface)
{
  {
    using autoware::core_component_interface_specs::localization::KinematicState;
    KinematicState kinematic_state;
    size_t depth = 1;
    EXPECT_EQ(kinematic_state.depth, depth);
    EXPECT_EQ(kinematic_state.reliability, RMW_QOS_POLICY_RELIABILITY_RELIABLE);
    EXPECT_EQ(kinematic_state.durability, RMW_QOS_POLICY_DURABILITY_VOLATILE);
  }

  {
    using autoware::core_component_interface_specs::localization::Acceleration;
    Acceleration acceleration;
    size_t depth = 1;
    EXPECT_EQ(acceleration.depth, depth);
    EXPECT_EQ(acceleration.reliability, RMW_QOS_POLICY_RELIABILITY_RELIABLE);
    EXPECT_EQ(acceleration.durability, RMW_QOS_POLICY_DURABILITY_VOLATILE);
  }
}
