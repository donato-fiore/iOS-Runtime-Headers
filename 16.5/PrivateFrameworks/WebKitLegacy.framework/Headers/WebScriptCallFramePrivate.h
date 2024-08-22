// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBSCRIPTCALLFRAMEPRIVATE_H
#define WEBSCRIPTCALLFRAMEPRIVATE_H

@class WebScriptObject;

#import <Foundation/Foundation.h>


@interface WebScriptCallFramePrivate : NSObject {
    WebScriptObject *globalObject;
    String functionName;
    JSValue exceptionValue;
}




-(void)dealloc;


@end


#endif