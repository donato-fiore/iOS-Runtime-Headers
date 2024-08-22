// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBSCRIPTCALLFRAME_H
#define WEBSCRIPTCALLFRAME_H


#import <Foundation/Foundation.h>

#import "WebScriptCallFramePrivate.h"

@interface WebScriptCallFrame : NSObject {
    WebScriptCallFramePrivate *_private;
    id *_userInfo;
}




-(?)_convertValueToObjcValue;
-(?)_initWithGlobalObject:(?)arg0 functionNameexceptionValue;
-(id)exception;
-(id)functionName;
-(id)userInfo;
-(void)dealloc;
-(void)setUserInfo:(id)arg0 ;


@end


#endif