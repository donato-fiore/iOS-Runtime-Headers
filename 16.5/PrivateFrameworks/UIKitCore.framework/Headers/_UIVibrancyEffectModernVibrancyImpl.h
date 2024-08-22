// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIBRANCYEFFECTMODERNVIBRANCYIMPL_H
#define _UIVIBRANCYEFFECTMODERNVIBRANCYIMPL_H

@class UIVibrancyEffectImpl, NSString;


#import "UIColor.h"

@interface _UIVibrancyEffectModernVibrancyImpl : UIVibrancyEffectImpl {
    NSString *_filterType;
    UIColor *_inputColor1;
    UIColor *_inputColor2;
    UIColor *_compositingColor;
    BOOL _inputReversed;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)implementationReplacingTintColor:(id)arg0 ;
-(id)initWithFilter:(id)arg0 inputColor1:(id)arg1 inputColor2:(id)arg2 compositingColor:(id)arg3 inputReversed:(BOOL)arg4 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)appendDescriptionTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif