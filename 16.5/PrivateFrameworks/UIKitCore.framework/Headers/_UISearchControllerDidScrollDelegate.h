// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHCONTROLLERDIDSCROLLDELEGATE_H
#define _UISEARCHCONTROLLERDIDSCROLLDELEGATE_H

@class NSString;
@protocol _UIScrollViewScrollObserver_Internal;

#import <Foundation/Foundation.h>

#import "UIScrollView.h"

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollViewScrollObserver_Internal>



@property (weak, nonatomic) NSObject<_UIScrollViewScrollObserver_Internal> *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(void)_didScroll;
-(void)_observeScrollViewDidScroll:(id)arg0 ;


@end


#endif