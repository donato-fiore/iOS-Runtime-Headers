// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGEXPRESSIONISEYESFORWARDFILTER_H
#define VGEXPRESSIONISEYESFORWARDFILTER_H



#import "VGExpressionFilter.h"

@interface VGExpressionIsEyesForwardFilter : VGExpressionFilter {
    float _eyesForwardYawSensitivityInRadians;
    float _eyesForwardPitchSensitivityInRadians;
}




-(float)filter:(id)arg0 ;
-(id)initWithEyesForwardYawSensitivity:(float)arg0 eyesForwardPitchSensitivity:(float)arg1 ;


@end


#endif