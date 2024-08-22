// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBINDICATELAYER_H
#define WEBINDICATELAYER_H

@class CALayer;


#import "WebView.h"

@interface WebIndicateLayer : CALayer {
    WebView *_webView;
}




-(id)actionForKey:(id)arg0 ;
-(id)initWithWebView:(id)arg0 ;
-(void)layoutSublayers;


@end


#endif