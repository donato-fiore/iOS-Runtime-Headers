// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUWEBDOCUMENTVIEW_H
#define SUWEBDOCUMENTVIEW_H

@class UIWebDocumentView, NSString;
@protocol WebPolicyDelegate;



@interface SUWebDocumentView : UIWebDocumentView <WebPolicyDelegate>

 {
    BOOL _adjustHeightToFit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) id *loadDelegate; // ivar: _loadDelegate
@property (retain, nonatomic) NSString *stylesheet; // ivar: _stylesheet
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)setHTMLFragment:(id)arg0 ;
-(void)setPlaintextString:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 didFinishLoadForFrame:(id)arg1 ;


@end


#endif