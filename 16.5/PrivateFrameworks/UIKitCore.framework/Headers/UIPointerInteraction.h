// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPOINTERINTERACTION_H
#define UIPOINTERINTERACTION_H

@class NSString, NSArray;
@protocol _UIPointerInteractionDriverSink, UIInteraction_Internal, UIInteraction, UIPointerInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIPointerRegion.h"
#import "UIView.h"

@interface UIPointerInteraction : NSObject <_UIPointerInteractionDriverSink, UIInteraction_Internal, UIInteraction>

 {
    ? _delegateImplements;
    NSUInteger _generationID;
    BOOL _observingPresentationNotification;
}


@property (nonatomic) BOOL _delegateProvidesRegionsAsynchronously; // ivar: __delegateProvidesRegionsAsynchronously
@property (nonatomic) NSInteger currentModifiers; // ivar: _currentModifiers
@property (copy, nonatomic) UIPointerRegion *currentRegion; // ivar: _currentRegion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIPointerRegion *defaultRegion; // ivar: _defaultRegion
@property (readonly, weak, nonatomic) NSObject<UIPointerInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *drivers; // ivar: _drivers
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIPointerRegion *mostRecentRegion; // ivar: _mostRecentRegion
@property (nonatomic, getter=_pausesPointerUpdatesWhilePanning, setter=_setPausesPointerUpdatesWhilePanning:) BOOL pausesPointerUpdatesWhilePanning; // ivar: _pausesPointerUpdatesWhilePanning
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


+(Class)_driverClass;
+(Class)_pencilDriverClass;
-(BOOL)_regionContainsCurrentHoverLocation:(id)arg0 ;
-(BOOL)_supportsAssociation;
-(id)_notifyDelegate_willEnterRegion:(id)arg0 ;
-(id)_notifyDelegate_willExitRegion:(id)arg0 ;
-(id)_pointerRegionAtPoint:(struct CGPoint )arg0 modifiers:(NSInteger)arg1 ;
-(id)_pointerStyleForRegion:(id)arg0 ;
-(id)_targetedPreviewForContinuingEffectWithPreview:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_applyPointerStyle:(id)arg0 forRegion:(id)arg1 animator:(id)arg2 ;
-(void)_handlePresentationNotification:(id)arg0 ;
-(void)_modifiersDidChangeInRegion:(id)arg0 update:(struct ? )arg1 ;
-(void)_pointerDidEnterRegion:(id)arg0 update:(struct ? )arg1 ;
-(void)_pointerDidExit;
-(void)_pointerDidExitRegion:(id)arg0 willEnterNewRegion:(BOOL)arg1 ;
// -(void)_queryDelegateForRegionWithRequest:(id)arg0 completion:(id)arg1 forceSynchronous:(unk)arg2  ;
-(void)_runAlongsideAnimator:(id)arg0 ;
-(void)_updateCurrentRegionIfNecessary:(id)arg0 update:(struct ? )arg1 ;
-(void)_updateDebugUIForRegionIfEnabled:(id)arg0 ;
-(void)_updateInteractionIsEnabled;
-(void)_updatePointerStyleForRegion:(id)arg0 update:(struct ? )arg1 animator:(id)arg2 ;
-(void)_viewTraitCollectionDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)driver:(id)arg0 didIssueUpdate:(struct ? )arg1 ;
-(void)driver:(id)arg0 willAttachHoverGestureRecognizer:(id)arg1 toView:(id)arg2 ;
-(void)driverDidExit:(id)arg0 ;
-(void)invalidate;
-(void)willMoveToView:(id)arg0 ;


@end


#endif