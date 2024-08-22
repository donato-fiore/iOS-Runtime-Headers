// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBTUTORIALMULTIPAGEVIEW_H
#define UIKBTUTORIALMULTIPAGEVIEW_H

@class NSString, NSTimer, NSArray;
@protocol UIScrollViewDelegate;


#import "UIView.h"
#import "UIPageControl.h"
#import "UIScrollView.h"

@interface UIKBTutorialMultipageView : UIView <UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *nextPageScrollTimer; // ivar: _nextPageScrollTimer
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (retain, nonatomic) UIScrollView *pageScrollView; // ivar: _pageScrollView
@property (retain, nonatomic) NSArray *pageViews; // ivar: _pageViews
@property (nonatomic) CGFloat pagingInterval; // ivar: _pagingInterval
@property (readonly) Class superclass;


-(id)initWithPageViews:(id)arg0 pagingInterval:(CGFloat)arg1 ;
-(void)configMediaView;
-(void)layoutSubviews;
-(void)resetPageScrolling;
-(void)scrollToNextPage;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;


@end


#endif