// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIAPPCONTEXT_H
#define VUIAPPCONTEXT_H

@class JSContext, NSString, NSMutableArray, NSError;
@protocol OS_dispatch_source, VUIApplication, VUIAppContextDelegate;

#import <Foundation/Foundation.h>

#import "VUIJSApplication.h"
#import "VUIJSFoundation.h"
#import "VUIAppReloadContext.h"

@interface VUIAppContext : NSObject {
    BOOL _respondsToTraitCollection;
    *__CFRunLoop _jsThreadRunLoop;
    *__CFRunLoopSource _jsThreadRunLoopSource;
    NSObject<OS_dispatch_source> *_lowMemoryWarningSource;
}


@property (readonly, weak, nonatomic) NSObject<VUIApplication> *app; // ivar: _app
@property (nonatomic) CGFloat appScriptTimeoutInterval; // ivar: _appScriptTimeoutInterval
@property (nonatomic) BOOL canAccessPendingQueue; // ivar: _canAccessPendingQueue
@property (readonly, weak, nonatomic) NSObject<VUIAppContextDelegate> *delegate; // ivar: _delegate
@property BOOL isValid; // ivar: _isValid
@property (retain, nonatomic) VUIJSApplication *jsApp; // ivar: _jsApp
@property (retain, nonatomic) JSContext *jsContext; // ivar: _jsContext
@property (retain, nonatomic) VUIJSFoundation *jsFoundation; // ivar: _jsFoundation
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (copy, nonatomic) NSString *nextJSChecksum; // ivar: _nextJSChecksum
@property (readonly, nonatomic) NSMutableArray *onStartQueue; // ivar: _onStartQueue
@property (retain, nonatomic) NSMutableArray *pendingQueue; // ivar: _pendingQueue
@property (retain, nonatomic) NSMutableArray *postEvaluationBlocks; // ivar: _postEvaluationBlocks
@property (retain, nonatomic) VUIAppReloadContext *reloadContext; // ivar: _reloadContext
@property (nonatomic) BOOL remoteInspectionEnabled; // ivar: _remoteInspectionEnabled
@property (retain, nonatomic) NSError *responseError; // ivar: _responseError
@property (copy, nonatomic) NSString *responseScript; // ivar: _responseScript
@property (getter=isRunning) BOOL running; // ivar: _running


+(id)currentAppContext;
-(BOOL)_prepareStartWithURL:(id)arg0 ;
-(id)_errorWithMessage:(id)arg0 ;
-(id)initWithApplication:(id)arg0 mode:(NSUInteger)arg1 delegate:(id)arg2 ;
-(void)_addPrivateInterfaces;
-(void)_addStopRecordToPendingQueueWithReload:(BOOL)arg0 ;
-(void)_dispatchError:(id)arg0 ;
-(void)_doEvaluate:(id)arg0 ;
-(void)_drainOnStartQueue;
-(void)_enqueueOnStartOrExecute:(id)arg0 ;
-(void)_evaluate:(id)arg0 ;
-(void)_invalidateJSThread;
-(void)_jsThreadMain;
-(void)_sourceCanceledOnRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)_sourcePerform;
-(void)_sourceScheduledOnRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)_startWithScript:(id)arg0 scriptUrl:(id)arg1 ;
-(void)_startWithURL:(id)arg0 ;
-(void)_stopAndReload:(BOOL)arg0 ;
-(void)addPostEvaluateBlock:(id)arg0 ;
-(void)contextDidFailWithError:(id)arg0 ;
-(void)contextDidStartWithJS:(id)arg0 options:(id)arg1 ;
-(void)contextDidStopWithOptions:(id)arg0 ;
-(void)dealloc;
// -(void)evaluate:(id)arg0 completionBlock:(unk)arg1  ;
-(void)evaluateDelegateBlockSync:(id)arg0 ;
-(void)evaluateFoundationJS;
-(void)exitAppWithOptions:(id)arg0 ;
-(void)handleReloadWithUrgencyType:(NSUInteger)arg0 minInterval:(CGFloat)arg1 data:(id)arg2 ;
-(void)launchAppWithOptions:(id)arg0 ;
-(void)openURLWithOptions:(id)arg0 ;
-(void)reload;
-(void)resumeWithOptions:(id)arg0 ;
-(void)setException:(id)arg0 withErrorMessage:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)suspendWithOptions:(id)arg0 ;


@end


#endif