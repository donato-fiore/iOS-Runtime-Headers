// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBFBLOCKOBSERVER_H
#define _SBFBLOCKOBSERVER_H

@class NSString;
@protocol SBFObserver;

#import <Foundation/Foundation.h>


@interface _SBFBlockObserver : NSObject <SBFObserver>

 {
    id *_resultBlock;
    id *_completionBlock;
    id *_failureBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)initWithResultBlock:(id)arg0 completionBlock:(unk)arg1 failureBlock:(id)arg2  ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif