// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIOPENURLAPPLICATIONBSACTIONHANDLER_H
#define _UIOPENURLAPPLICATIONBSACTIONHANDLER_H

@class NSString;
@protocol _UIApplicationBSActionHandler;

#import <Foundation/Foundation.h>


@interface _UIOpenURLApplicationBSActionHandler : NSObject <_UIApplicationBSActionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_respondToApplicationActions:(id)arg0 fromTransitionContext:(id)arg1 ;


@end


#endif