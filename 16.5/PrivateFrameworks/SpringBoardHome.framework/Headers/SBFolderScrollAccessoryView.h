// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFOLDERSCROLLACCESSORYVIEW_H
#define SBFOLDERSCROLLACCESSORYVIEW_H

@class UIView, SBFFluidBehaviorSettings, UIPageControl, UIViewFloatAnimatableProperty;


#import "SBFolder.h"
#import "SBIconListPageControl.h"

@interface SBFolderScrollAccessoryView : UIView

@property (retain, nonatomic) UIView *auxiliaryView; // ivar: _auxiliaryView
@property (readonly, nonatomic) SBFFluidBehaviorSettings *auxiliaryViewFadeInSettings; // ivar: _auxiliaryViewFadeInSettings
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) SBFolder *folder; // ivar: _folder
@property (retain, nonatomic) UIPageControl *layoutPageControl; // ivar: _layoutPageControl
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *modeAnimatableProperty; // ivar: _modeAnimatableProperty
@property (readonly, nonatomic) SBIconListPageControl *pageControl; // ivar: _pageControl
@property (readonly, nonatomic) SBFFluidBehaviorSettings *pageControlFadeInSettings; // ivar: _pageControlFadeInSettings


-(NSInteger)_numberOfPagesForWidth:(CGFloat)arg0 maxPageCount:(NSUInteger)arg1 ;
-(id)_layoutPageControlMatchingPageControl:(id)arg0 ;
-(id)_pageIndicatorsView;
-(id)initWithFolder:(id)arg0 pageControl:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_applyCurrentMode;
-(void)_applyMatchingAnimationsForAuxiliaryViewMatchingContentView:(id)arg0 ;
-(void)_clearMatchingAnimationsForAuxiliaryView;
-(void)_setUpAnimation;
-(void)_updateForModePropertyChanged;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif