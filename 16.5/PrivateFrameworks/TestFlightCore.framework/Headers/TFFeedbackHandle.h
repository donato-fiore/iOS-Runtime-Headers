// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TFFEEDBACKHANDLE_H
#define TFFEEDBACKHANDLE_H

@class NSString, SBSRemoteAlertHandle;
@protocol SBSRemoteAlertHandleObserver;

#import <Foundation/Foundation.h>

#import "TFFeedbackHandleConfiguration.h"

@interface TFFeedbackHandle : NSObject <SBSRemoteAlertHandleObserver>



@property (readonly, nonatomic) TFFeedbackHandleConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBSRemoteAlertHandle *internalHandle; // ivar: _internalHandle
@property (readonly, copy, nonatomic) NSString *logKey; // ivar: _logKey
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 ;
-(void)invalidateFeedbackViewController;
-(void)presentFeedbackViewController;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif