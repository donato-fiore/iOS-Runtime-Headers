// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIBRANCYEFFECTMODERNCOMPOSITEDIMPL_H
#define _UIVIBRANCYEFFECTMODERNCOMPOSITEDIMPL_H

@class UIVibrancyEffectImpl, NSString;


#import "UIColor.h"

@interface _UIVibrancyEffectModernCompositedImpl : UIVibrancyEffectImpl {
    NSInteger _compositingMode;
    NSString *_filterType;
    UIColor *_compositingColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)implementationReplacingTintColor:(id)arg0 ;
-(id)initWithCompositingMode:(NSInteger)arg0 compositingColor:(id)arg1 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)appendDescriptionTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif