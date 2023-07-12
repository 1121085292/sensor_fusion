#pragma once
// 1.包含被依赖的其他头文件
#include "cyber/component/component.h"

#include "cipv_fusion_component/proto/cipv_fusion.pb.h"
#include "cipv_fusion_component/proto/car_state.pb.h"

using apollo::cyber::Component;
using cipv_fusion_component::proto::LeadDataV3;
using cipv_fusion_component::proto::RadarState;
using cipv_fusion_component::proto::CarState;

// 2.自定义类继承 Component
class CipvComponent : public Component<LeadDataV3, RadarState, CarState> {
  public:
    bool Init() override;
    bool Proc(const std::shared_ptr<LeadDataV3>& camera,
        const std::shared_ptr<RadarState>& radar,
        const std::shared_ptr<CarState>& car) override;
};

// 注册组件
CYBER_REGISTER_COMPONENT(CipvComponent);
