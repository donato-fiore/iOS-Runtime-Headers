// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCENTERICONZOOMANIMATOR_H
#define SBCENTERICONZOOMANIMATOR_H

@class UIView, NSArray, NSString;
@protocol SBIconListLayoutDelegate, SBIconListModelObserver, SBDockOffscreenFractionModifying;


#import "SBIconZoomAnimator.h"
#import "SBFolderController.h"
#import "SBHCenterZoomSettings.h"

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate, SBIconListModelObserver>

 {
    UIView *_folderView;
    CGFloat _iconZoomedZ;
    NSArray *_extraViewsContainers;
    NSArray *_extraViews;
}


@property (readonly, nonatomic) BOOL animatingIcons; // ivar: _animatingIcons
@property (readonly, nonatomic) CGPoint cameraPosition; // ivar: _cameraPosition
@property (readonly, nonatomic) CGFloat centerCol; // ivar: _centerCol
@property (readonly, nonatomic) CGFloat centerRow; // ivar: _centerRow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SBDockOffscreenFractionModifying> *dockOffscreenFractionModifier; // ivar: _dockOffscreenFractionModifier
@property (readonly, nonatomic) SBFolderController *folderController;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHCenterZoomSettings *settings;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *zoomView; // ivar: _zoomView


-(CGFloat)_iconZoomDelay;
-(CGFloat)_zPositionForView:(id)arg0 center:(struct CGPoint )arg1 andFraction:(CGFloat)arg2 ;
-(NSUInteger)_numberOfSignificantAnimations;
-(id)_animationFactoryForDock;
-(id)_animationFactoryForFolderView;
-(id)_animationFactoryForIcon:(id)arg0 ;
-(id)initWithFolderController:(id)arg0 ;
-(struct CGPoint )iconListView:(id)arg0 centerForIconCoordinate:(struct SBIconCoordinate )arg1 metrics:(id)arg2 proposedCenter:(struct CGPoint )arg3 ;
-(struct CGPoint )iconListView:(id)arg0 originForIconCoordinate:(struct SBIconCoordinate )arg1 metrics:(id)arg2 proposedOrigin:(struct CGPoint )arg3 ;
-(void)_calculateCenters;
-(void)_calculateCentersAndCameraPosition;
-(void)_cleanupAnimation;
-(void)_cleanupAnimationIncludingDock:(BOOL)arg0 ;
-(void)_performAnimationToFraction:(CGFloat)arg0 withCentralAnimationSettings:(id)arg1 delay:(CGFloat)arg2 alreadyAnimating:(BOOL)arg3 sharedCompletion:(id)arg4 ;
-(void)_positionView:(id)arg0 forIcon:(id)arg1 ;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;
-(void)_setAnimationFraction:(CGFloat)arg0 withCenter:(struct CGPoint )arg1 ;
-(void)_updateDockForFraction:(CGFloat)arg0 ;
-(void)iconList:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)setFraction:(CGFloat)arg0 withCenter:(struct CGPoint )arg1 ;


@end


#endif