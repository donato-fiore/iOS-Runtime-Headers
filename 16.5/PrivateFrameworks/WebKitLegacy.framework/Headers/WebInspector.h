// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBINSPECTOR_H
#define WEBINSPECTOR_H


#import <Foundation/Foundation.h>

#import "WebView.h"
#import "WebInspectorFrontend.h"

@interface WebInspector : NSObject {
    WebView *_inspectedWebView;
    WebInspectorFrontend *_frontend;
}


@property (readonly, nonatomic, getter=isOpen) BOOL open;


-(BOOL)isDebuggingJavaScript;
-(BOOL)isJavaScriptProfilingEnabled;
-(BOOL)isProfilingJavaScript;
-(BOOL)isTimelineProfilingEnabled;
-(id)initWithInspectedWebView:(id)arg0 ;
-(void)attach:(id)arg0 ;
-(void)close:(id)arg0 ;
-(void)dealloc;
-(void)detach:(id)arg0 ;
-(void)evaluateInFrontend:(id)arg0 script:(id)arg1 ;
-(void)inspectedWebViewClosed;
-(void)releaseFrontend;
-(void)setFrontend:(id)arg0 ;
-(void)setJavaScriptProfilingEnabled:(BOOL)arg0 ;
-(void)setTimelineProfilingEnabled:(BOOL)arg0 ;
-(void)show:(id)arg0 ;
-(void)showConsole:(id)arg0 ;
-(void)showWindow;
-(void)startDebuggingJavaScript:(id)arg0 ;
-(void)startProfilingJavaScript:(id)arg0 ;
-(void)stopDebuggingJavaScript:(id)arg0 ;
-(void)stopProfilingJavaScript:(id)arg0 ;
-(void)toggleDebuggingJavaScript:(id)arg0 ;
-(void)toggleProfilingJavaScript:(id)arg0 ;


@end


#endif