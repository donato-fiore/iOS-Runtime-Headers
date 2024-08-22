// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFTRAITSSETTINGSACTUATIONCONTEXT_H
#define SBFTRAITSSETTINGSACTUATIONCONTEXT_H

@class BSAnimationSettings, NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBFTraitsSettingsActuationContext : NSObject <NSCopying, BSDescriptionProviding>



@property (copy, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *drawingFence; // ivar: _drawingFence
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL preventTouchCancellation; // ivar: _preventTouchCancellation
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSettingsActuationContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithAnimationSettings:(id)arg0 drawingFence:(id)arg1 ;
-(id)initWithAnimationSettings:(id)arg0 drawingFence:(id)arg1 preventTouchCancellation:(BOOL)arg2 ;
-(id)initWithSettingsActuationContext:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif