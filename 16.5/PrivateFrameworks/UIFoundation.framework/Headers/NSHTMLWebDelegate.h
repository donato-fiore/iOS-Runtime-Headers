// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSHTMLWEBDELEGATE_H
#define NSHTMLWEBDELEGATE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface NSHTMLWebDelegate : NSObject {
    BOOL _loadDidFinish;
    BOOL _loadDidSucceed;
    NSURL *_baseURL;
}




-(BOOL)loadDidFinish;
-(BOOL)loadDidSucceed;
-(id)init;
-(id)initWithBaseURL:(id)arg0 ;
-(id)webView:(id)arg0 identifierForInitialRequest:(id)arg1 fromDataSource:(id)arg2 ;
-(id)webView:(id)arg0 resource:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 fromDataSource:(id)arg4 ;
-(void)dealloc;
-(void)decidePolicyForRequest:(id)arg0 decisionListener:(id)arg1 ;
-(void)webView:(id)arg0 decidePolicyForMIMEType:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 decidePolicyForNewWindowAction:(id)arg1 request:(id)arg2 newFrameName:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFinishLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 resource:(id)arg1 didFailLoadingWithError:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 resource:(id)arg1 didFinishLoadingFromDataSource:(id)arg2 ;
-(void)webView:(id)arg0 resource:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 fromDataSource:(id)arg3 ;


@end


#endif