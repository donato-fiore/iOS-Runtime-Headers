// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGEXPRESSIONISEYESNEUTRALOPENFILTER_H
#define VGEXPRESSIONISEYESNEUTRALOPENFILTER_H



#import "VGExpressionFilter.h"

@interface VGExpressionIsEyesNeutralOpenFilter : VGExpressionFilter {
    float _eyesOpenSensitivity;
}




-(float)filter:(id)arg0 ;
-(id)initWithEyesOpenSensitivity:(float)arg0 ;


@end


#endif