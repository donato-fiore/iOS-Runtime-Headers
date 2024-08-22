// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WQAOVERLAYCOORDINATOR_H
#define WQAOVERLAYCOORDINATOR_H

@class NSArray, NSString, NSMutableArray;
@protocol BLSBacklightStateObserving, WQAOverlayDataSource;

#import <Foundation/Foundation.h>


@interface WQAOverlayCoordinator : NSObject <BLSBacklightStateObserving>



@property (retain, nonatomic) NSArray *currentShapeLayersForHint; // ivar: _currentShapeLayersForHint
@property (weak, nonatomic) NSObject<WQAOverlayDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *quickActionShapeLayers; // ivar: _quickActionShapeLayers
@property (readonly) Class superclass;


-(BOOL)_astFocusRingIsVisible;
-(BOOL)_shouldShowHintsForQuickActions:(id)arg0 ;
-(id)_createNonAnimatingShapeLayerFromPath:(id)arg0 ;
-(id)_localizedBannerInstructionText;
-(id)initWithDataSource:(id)arg0 ;
-(void)_mainQueue_addAnimatedShapeLayerForQuickAction:(id)arg0 ;
-(void)_mainQueue_backlightDidTurnOff;
-(void)_mainQueue_backlightDidTurnOn;
-(void)_mainQueue_cleanupHintViews;
-(void)_mainQueue_cleanupShapeLayers;
-(void)_mainQueue_removeShapeLayer:(id)arg0 ;
-(void)_mainQueue_showHintsWithPrimaryQuickActions:(id)arg0 completion:(id)arg1 ;
-(void)_mainQueue_showUIForQuickActions:(id)arg0 ;
-(void)animateConfirmationForQuickAction:(id)arg0 completion:(id)arg1 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)dealloc;
-(void)refreshOverlaysIfNecessary;
-(void)stopCurrentOverlays;


@end


#endif