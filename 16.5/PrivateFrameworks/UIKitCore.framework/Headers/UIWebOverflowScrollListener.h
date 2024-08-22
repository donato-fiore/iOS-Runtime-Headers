// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBOVERFLOWSCROLLLISTENER_H
#define UIWEBOVERFLOWSCROLLLISTENER_H

@class NSString;
@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>

#import "UIWebOverflowScrollView.h"

@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate>

 {
    UIWebOverflowScrollView *_scrollView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithScrollView:(id)arg0 ;
-(void)_didCompleteScrolling;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;


@end


#endif