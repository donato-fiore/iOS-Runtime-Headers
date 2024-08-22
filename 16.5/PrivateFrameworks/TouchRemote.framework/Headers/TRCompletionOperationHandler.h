// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRCOMPLETIONOPERATIONHANDLER_H
#define TRCOMPLETIONOPERATIONHANDLER_H

@class NSString;
@protocol TROperationHandler;

#import <Foundation/Foundation.h>


@interface TRCompletionOperationHandler : NSObject <TROperationHandler>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCompletionHandler:(id)arg0 ;
-(void)_handleCompletionRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg0 ;


@end


#endif