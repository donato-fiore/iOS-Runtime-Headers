// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISIGNINDOCUMENTVIEWCONTROLLER_H
#define SKUISIGNINDOCUMENTVIEWCONTROLLER_H

@class UIScrollView, NSString;
@protocol SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUISignInViewDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUISignInTemplateView.h"
#import "SKUISignInTemplateViewElement.h"
#import "SKUILayoutCache.h"

@interface SKUISignInDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUISignInViewDelegate, SKUIDocumentViewController>

 {
    CGRect _keyboardFrame;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUISignInTemplateView *_loginView;
    UIScrollView *_scrollView;
    SKUISignInTemplateViewElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_backgroundColor;
-(id)_layoutContext;
-(id)initWithTemplateElement:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_layoutScrollView;
-(void)_reloadContentSize;
-(void)_reloadPanelViewWithScrollViewSize:(struct CGSize )arg0 ;
-(void)_signInFailed:(id)arg0 error:(id)arg1 ;
-(void)_signInSuccess:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)layoutCacheDidFinishBatch:(id)arg0 ;
-(void)loadView;
-(void)signInEntryComplete:(id)arg0 accountName:(id)arg1 password:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif