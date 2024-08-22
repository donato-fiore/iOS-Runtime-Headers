// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVISUALEFFECTBACKINGFAKEVIEW_H
#define _UIVISUALEFFECTBACKINGFAKEVIEW_H

@class UIView<_UIVisualEffectViewParticipating>, NSString, NSArray;
@protocol _UIVisualEffectViewParticipating;


#import "UIView.h"
#import "_UIVisualEffectViewBackdropCaptureGroup.h"

@interface _UIVisualEffectBackingFakeView : UIView <_UIVisualEffectViewParticipating>



@property (weak, nonatomic) UIView *clientView; // ivar: _clientView
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView; // ivar: _containedView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // ivar: _primaryCaptureGroup
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewEffects; // ivar: _viewEffects


-(id)initWithClientView:(id)arg0 ;
-(void)_receiveVisitor:(id)arg0 ;
-(void)applyIdentityFilterEffects;
-(void)applyIdentityViewEffects;
-(void)applyRequestedFilterEffects;
-(void)applyRequestedViewEffects;


@end


#endif