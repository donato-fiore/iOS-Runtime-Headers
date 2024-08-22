// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSRECOGNITIONRESULTHANDLINGTHREAD_H
#define VSRECOGNITIONRESULTHANDLINGTHREAD_H

@class NSMutableArray, NSConditionLock;
@protocol VSRecognitionResultHandlingThreadDelegate;

#import <Foundation/Foundation.h>


@interface VSRecognitionResultHandlingThread : NSObject {
    id<VSRecognitionResultHandlingThreadDelegate> *_delegate;
    NSMutableArray *_requests;
    NSConditionLock *_lock;
    ? _resultHandlingFlags;
}




-(id)init;
-(void)_handleRequests;
-(void)_notifyRequestHandled:(id)arg0 ;
-(void)dealloc;
-(void)handleResults:(id)arg0 withHandler:(id)arg1 ;
-(void)invalidate;
-(void)setDelegate:(id)arg0 ;


@end


#endif