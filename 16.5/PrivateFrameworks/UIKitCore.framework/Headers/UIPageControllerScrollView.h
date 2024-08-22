// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPAGECONTROLLERSCROLLVIEW_H
#define UIPAGECONTROLLERSCROLLVIEW_H



#import "UIScrollView.h"
#import "UIPageController.h"

@interface UIPageControllerScrollView : UIScrollView

@property (nonatomic) UIPageController *pageController; // ivar: _pageController


-(NSUInteger)_abuttedPagingEdges;
-(void)_scrollViewAnimationEnded:(id)arg0 finished:(BOOL)arg1 ;
-(void)_scrollViewDidEndDecelerating;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg0 ;
-(void)_scrollViewWillBeginDragging;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif