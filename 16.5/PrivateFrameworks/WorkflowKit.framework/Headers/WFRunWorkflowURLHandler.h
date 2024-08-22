// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFRUNWORKFLOWURLHANDLER_H
#define WFRUNWORKFLOWURLHANDLER_H


#import <Foundation/Foundation.h>


@interface WFRunWorkflowURLHandler : NSObject



+(id)workflowWithInputParameters:(id)arg0 error:(*id)arg1 ;
+(id)workflowWithName:(id)arg0 identifier:(id)arg1 error:(*id)arg2 ;
+(void)registerOpenWorkflowHandler:(id)arg0 ;
+(void)registerRunWorkflowHandler:(id)arg0 ;


@end


#endif