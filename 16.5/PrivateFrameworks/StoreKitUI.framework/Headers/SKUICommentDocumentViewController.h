// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOMMENTDOCUMENTVIEWCONTROLLER_H
#define SKUICOMMENTDOCUMENTVIEWCONTROLLER_H

@class NSArray, NSMutableSet, NSString;
@protocol SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUICommentDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIMediaSocialAuthor.h"
#import "SKUIStackDocumentViewController.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUICommentPostBarView.h"
#import "SKUIStackTemplateElement.h"
#import "SKUICommentTemplateViewElement.h"
#import "SKUILayoutCache.h"

@interface SKUICommentDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUICommentDelegate, SKUIDocumentViewController>

 {
    SKUIMediaSocialAuthor *_authorForActiveAccount;
    SKUIStackDocumentViewController *_childViewController;
    NSArray *_commenters;
    BOOL _didShowKeyboard;
    BOOL _keyboardVisible;
    CGRect _keyboardRect;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableSet *_observedArtworkRequestIDs;
    SKUICommentPostBarView *_postView;
    BOOL _scrollNewCommentToView;
    NSInteger _selectedCommenter;
    SKUIStackTemplateElement *_stackTemplateElement;
    SKUICommentTemplateViewElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_loadImageForURL:(id)arg0 cacheKey:(id)arg1 dataConsumer:(id)arg2 reason:(NSInteger)arg3 ;
-(id)_backgroundColor;
-(id)_getSelectedCommenter;
-(id)_layoutContext;
-(id)initWithTemplateElement:(id)arg0 ;
-(void)_changeCommenter;
-(void)_checkAdminStatus;
-(void)_keyboardDidHideChangeNotification:(id)arg0 ;
-(void)_keyboardWillChangeFrameNotification:(id)arg0 ;
-(void)_keyboardWillChangeNotification:(id)arg0 accountForGuideLines:(BOOL)arg1 applyKeyboardOffset:(BOOL)arg2 ;
-(void)_keyboardWillHideNotification:(id)arg0 ;
-(void)_keyboardWillShowNotification:(id)arg0 ;
-(void)_layoutKeyboard;
-(void)_layoutScrollView:(CGFloat)arg0 ;
-(void)_preloadCommenterImages;
-(void)_reloadContentSize:(CGFloat)arg0 ;
-(void)_setSelectedCommenter:(NSInteger)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)commentPostBarView:(id)arg0 changeCommenter:(id)arg1 ;
-(void)commentPostBarView:(id)arg0 text:(id)arg1 as:(id)arg2 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)layoutCacheDidFinishBatch:(id)arg0 ;
-(void)loadView;
-(void)updateStackElement:(id)arg0 withView:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif