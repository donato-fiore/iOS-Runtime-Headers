// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIBRANCYEFFECTIMPL_H
#define _UIVIBRANCYEFFECTIMPL_H


#import <Foundation/Foundation.h>


@interface _UIVibrancyEffectImpl : NSObject



+(id)implementationFromCoder:(id)arg0 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)invertAutomaticStyle;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)style;
-(NSInteger)vibrancyStyle;
-(NSUInteger)hash;
-(id)implementationForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)implementationReplacingTintColor:(id)arg0 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)appendDescriptionTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEffect:(id)arg0 ;


@end


#endif