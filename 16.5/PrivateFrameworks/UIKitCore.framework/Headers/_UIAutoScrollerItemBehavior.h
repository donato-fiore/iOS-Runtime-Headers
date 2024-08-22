// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIAUTOSCROLLERITEMBEHAVIOR_H
#define _UIAUTOSCROLLERITEMBEHAVIOR_H

@class NSString;
@protocol _UIAutoScrollBehavior;

#import <Foundation/Foundation.h>


@interface _UIAutoScrollerItemBehavior : NSObject <_UIAutoScrollBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct ? )offsetForAutoScroller:(id)arg0 timeDelta:(CGFloat)arg1 ;


@end


#endif