// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBVIEWINTERNAL_H
#define UIWEBVIEWINTERNAL_H

@class NSURLRequest;
@protocol UIWebViewDelegate;

#import <Foundation/Foundation.h>

#import "UIScrollView.h"
#import "UIWebBrowserView.h"
#import "UICheckeredPatternView.h"
#import "UIWebViewWebViewDelegate.h"
#import "UIWebPDFViewHandler.h"

@interface UIWebViewInternal : NSObject {
    UIScrollView *scroller;
    UIWebBrowserView *browserView;
    UICheckeredPatternView *checkeredPatternView;
    id<UIWebViewDelegate> *delegate;
    BOOL scalesPageToFit;
    BOOL isLoading;
    BOOL hasOverriddenOrientationChangeEventHandling;
    BOOL drawsCheckeredPattern;
    BOOL selectionEnabled;
    BOOL drawInWebThread;
    BOOL inRotation;
    BOOL didRotateEnclosingScrollView;
    BOOL safeAreaShouldAffectObscuredInsets;
    NSURLRequest *request;
    NSInteger clickedAlertButtonIndex;
    UIWebViewWebViewDelegate *webViewDelegate;
    UIWebPDFViewHandler *pdfHandler;
}






@end


#endif