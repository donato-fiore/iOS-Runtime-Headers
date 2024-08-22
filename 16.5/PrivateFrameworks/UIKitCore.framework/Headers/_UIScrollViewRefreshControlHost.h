// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCROLLVIEWREFRESHCONTROLHOST_H
#define _UISCROLLVIEWREFRESHCONTROLHOST_H

@class NSString;
@protocol _UIRefreshControlHosting;

#import <Foundation/Foundation.h>

#import "UIScrollView.h"

@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting>

 {
    UIScrollView *_scrollView;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding;
@property (readonly, weak) UIScrollView *scrollView;
@property (readonly) Class superclass;


-(id)initWithScrollView:(id)arg0 ;
-(void)decrementInsetHeight:(CGFloat)arg0 ;
-(void)incrementInsetHeight:(CGFloat)arg0 ;
-(void)refreshControl:(id)arg0 didChangeToState:(NSInteger)arg1 fromState:(NSInteger)arg2 ;


@end


#endif