// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOMPOSEREVIEWVIEW_H
#define SKUICOMPOSEREVIEWVIEW_H

@class UIView, SULoadingView, UIScrollView, SUTextContentView, NSString;
@protocol SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate, SKUIComposeReviewViewDelegate;


#import "SKUIComposeReviewHeaderView.h"
#import "SKUIReviewMetadata.h"

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate>

 {
    NSInteger _currentBodyLength;
    SKUIComposeReviewHeaderView *_headerView;
    CGRect _keyboardFrame;
    CGRect _remoteKeyboardFrame;
    BOOL _loading;
    SULoadingView *_loadingView;
    SKUIReviewMetadata *_review;
    UIScrollView *_scrollView;
    SUTextContentView *_textContentView;
}


@property (readonly, nonatomic) NSInteger composeReviewStyle; // ivar: _style
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIComposeReviewViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) float rating;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)_composeReviewTextViewShouldChangeTextInRange:(struct _NSRange )arg0 replacementText:(id)arg1 ;
-(BOOL)_isReviewTextOptional;
-(BOOL)textContentView:(id)arg0 shouldChangeSizeForContentSize:(struct CGSize )arg1 ;
-(BOOL)textContentView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)textContentView:(id)arg0 shouldScrollForPendingContentSize:(struct CGSize )arg1 ;
-(id)_body;
-(id)_reviewPlaceholder;
-(id)copyReview;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_delayedUpdateReviewLength;
-(void)_keyboardVisibilityDidChangeNotification:(id)arg0 ;
-(void)_layoutComposeView;
-(void)_layoutLoadingView;
-(void)_remoteKeyboardVisibilityDidChangeNotification:(id)arg0 ;
-(void)_showComposeView;
-(void)_showLoadingView;
-(void)_updateContentSize;
-(void)composeHeaderViewValidityDidChange:(id)arg0 ;
-(void)composeHeaderViewValuesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setReview:(id)arg0 ;
-(void)textContentView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)textContentViewDidChange:(id)arg0 ;


@end


#endif