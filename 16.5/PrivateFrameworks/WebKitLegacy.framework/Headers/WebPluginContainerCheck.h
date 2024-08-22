// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBPLUGINCONTAINERCHECK_H
#define WEBPLUGINCONTAINERCHECK_H

@class NSURLRequest, NSString;
@protocol WebPluginContainerCheckController;

#import <Foundation/Foundation.h>

#import "WebPolicyDecisionListener.h"

@interface WebPluginContainerCheck : NSObject {
    NSURLRequest *_request;
    NSString *_target;
    id<WebPluginContainerCheckController> *_controller;
    id *_resultObject;
    SEL _resultSelector;
    id *_contextInfo;
    BOOL _done;
    WebPolicyDecisionListener *_listener;
}




+(id)checkWithRequest:(id)arg0 target:(id)arg1 resultObject:(id)arg2 selector:(SEL)arg3 controller:(id)arg4 contextInfo:(id)arg5 ;
-(BOOL)_isForbiddenFileLoad;
-(id)_actionInformationWithURL:(id)arg0 ;
-(id)contextInfo;
-(id)initWithRequest:(id)arg0 target:(id)arg1 resultObject:(id)arg2 selector:(SEL)arg3 controller:(id)arg4 contextInfo:(id)arg5 ;
-(void)_askPolicyDelegate;
-(void)_continueWithPolicy:(unsigned char)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif