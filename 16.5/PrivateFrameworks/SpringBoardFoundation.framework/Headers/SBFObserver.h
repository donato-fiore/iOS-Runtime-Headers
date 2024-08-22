// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFOBSERVER_H
#define SBFOBSERVER_H


#import <Foundation/Foundation.h>


@interface SBFObserver : NSObject



+(id)observerWithResultBlock:(id)arg0 ;
// +(id)observerWithResultBlock:(id)arg0 completionBlock:(unk)arg1 failureBlock:(id)arg2  ;
+(void)sendArray:(id)arg0 error:(id)arg1 toObserver:(id)arg2 ;
+(void)sendObserver:(id)arg0 resultsOfBlock:(id)arg1 ;


@end


#endif