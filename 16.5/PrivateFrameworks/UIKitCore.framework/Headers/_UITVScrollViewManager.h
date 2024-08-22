// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITVSCROLLVIEWMANAGER_H
#define _UITVSCROLLVIEWMANAGER_H

@class NSString, CASpringAnimation;
@protocol _UIScrollViewScrollObserver, _UITVScrollViewManagerDelegate;

#import <Foundation/Foundation.h>

#import "UIScrollView.h"
#import "UIView.h"

@interface _UITVScrollViewManager : NSObject <_UIScrollViewScrollObserver>

 {
    BOOL _delegateScrollViewManagerDidFinishScrolling;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UITVScrollViewManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CASpringAnimation *scrollAnimation; // ivar: _scrollAnimation
@property (nonatomic) NSInteger scrollStyle; // ivar: _scrollStyle
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UIView *snapshotViewForWindow; // ivar: _snapshotViewForWindow
@property (readonly) Class superclass;
@property (nonatomic) CGPoint targetOffset; // ivar: _targetOffset
@property (nonatomic) BOOL useCustomMaskForScrolling; // ivar: _useCustomMaskForScrolling


-(id)_customScrollingMaskForScrollView:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)initWithScrollView:(id)arg0 scrollStyle:(NSInteger)arg1 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_removeScreenshotViewIfNeeded;
-(void)_scroll:(id)arg0 toContentOffset:(struct CGPoint )arg1 ;
-(void)_scrollAnimationDidEnd:(id)arg0 ;
-(void)_tearDown:(id)arg0 ;
-(void)dealloc;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif