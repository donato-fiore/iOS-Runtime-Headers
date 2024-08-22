// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBNODEHIGHLIGHTER_H
#define WEBNODEHIGHLIGHTER_H


#import <Foundation/Foundation.h>

#import "WebView.h"
#import "WebNodeHighlight.h"

@interface WebNodeHighlighter : NSObject {
    WebView *_inspectedWebView;
    WebNodeHighlight *_currentHighlight;
}




-(id)initWithInspectedWebView:(id)arg0 ;
-(void)dealloc;
-(void)didAttachWebNodeHighlight:(id)arg0 ;
-(void)hideHighlight;
-(void)highlight;
-(void)willDetachWebNodeHighlight:(id)arg0 ;


@end


#endif