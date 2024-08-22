// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONCONTROLLERREFRESHCONTROLHOST_H
#define _UINAVIGATIONCONTROLLERREFRESHCONTROLHOST_H

@class NSString, NSArray;
@protocol _UIRefreshControlHosting, _UINavigationControllerRefreshControlHostDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UINavigationController.h"
#import "UIRefreshControl.h"
#import "UIScrollView.h"

@interface _UINavigationControllerRefreshControlHost : NSObject <_UIRefreshControlHosting>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UINavigationControllerRefreshControlHostDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat fullHeightOfRefreshControl;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *hostContainerView; // ivar: _hostContainerView
@property (readonly, weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (weak) UIRefreshControl *refreshControl; // ivar: _refreshControl
@property (retain) NSArray *refreshControlConstraints; // ivar: _refreshControlConstraints
@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
@property (nonatomic) CGFloat restingHeightOfRefreshControl; // ivar: _restingHeightOfRefreshControl
@property (readonly, weak) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (nonatomic) CGFloat unobstructedHeight; // ivar: _unobstructedHeight


+(BOOL)canHostRefreshControlOwnedByScrollView:(id)arg0 inNavigationController:(id)arg1 ;
-(BOOL)isHostingRefreshControlOwnedByScrollView:(id)arg0 ;
-(CGFloat)_alphaForRefreshingControlStateWithPossiblyObstructedContent;
-(CGFloat)_thresholdForObstructedContentFullAlpha;
-(CGFloat)_thresholdForObstructedContentZeroAlpha;
-(id)initWithNavigationController:(id)arg0 scrollView:(id)arg1 ;
-(void)_installRefreshControlIntoContainerView;
-(void)_notifyLayoutDidChange;
-(void)_removeRefreshControlFromContainerView;
-(void)_updateFadeOutProgress;
-(void)dealloc;
-(void)decrementInsetHeight:(CGFloat)arg0 ;
-(void)incrementInsetHeight:(CGFloat)arg0 ;
-(void)refreshControl:(id)arg0 didChangeToState:(NSInteger)arg1 fromState:(NSInteger)arg2 ;
-(void)stopAnimations;


@end


#endif