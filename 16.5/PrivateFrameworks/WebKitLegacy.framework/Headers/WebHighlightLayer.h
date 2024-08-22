// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBHIGHLIGHTLAYER_H
#define WEBHIGHLIGHTLAYER_H

@class CALayer;


#import "WebNodeHighlightView.h"
#import "WebView.h"

@interface WebHighlightLayer : CALayer {
    WebNodeHighlightView *_view;
    WebView *_webView;
}




-(id)actionForKey:(id)arg0 ;
-(id)initWithHighlightView:(id)arg0 webView:(id)arg1 ;
-(void)layoutSublayers;


@end


#endif