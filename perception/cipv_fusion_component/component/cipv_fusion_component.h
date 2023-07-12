// 1.包含被依赖的其他头文件
#include "cyber/component/component.h"

using apollo::cyber::component;
// 2.自定义类继承 Component
class CipvComponent : pubilc Component<SensorFrameMessage> {
  pubilc:
    bool Init() override;
    bool Proc(const std::shared_ptr<SensorFrameMessage>& message) override;
};

// 注册组件
CYBER_REGISTER_COMPONENT(CipvComponent);