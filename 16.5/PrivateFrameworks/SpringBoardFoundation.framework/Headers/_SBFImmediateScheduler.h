// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBFIMMEDIATESCHEDULER_H
#define _SBFIMMEDIATESCHEDULER_H

@class NSString;
@protocol SBFScheduler;

#import <Foundation/Foundation.h>


@interface _SBFImmediateScheduler : NSObject <SBFScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)performBlock:(id)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;


@end


#endif