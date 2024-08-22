// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIVIEWFLOATANIMATABLEPROPERTY_H
#define UIVIEWFLOATANIMATABLEPROPERTY_H



#import "UIAnimatablePropertyWrapper.h"

@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyWrapper

@property (readonly, nonatomic) CGFloat presentationValue;
@property (nonatomic) CGFloat value;
@property (nonatomic) CGFloat velocity;


-(id)_floatAnimatableProperty;


@end


#endif