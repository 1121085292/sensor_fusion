#include "cipv_fusion_component/component/cipv_fusion_component.h"

bool CipvComponent::Init() {
    AINFO << " ---------INIT---------";
    return true;
}

bool CipvComponent::Proc(const std::shared_ptr<LeadDataV3>& camera, 
                        const std::shared_ptr<RadarState>& radar, 
                        const std::shared_ptr<CarState>& car) {
    AINFO << "camera";
    return true;
}
