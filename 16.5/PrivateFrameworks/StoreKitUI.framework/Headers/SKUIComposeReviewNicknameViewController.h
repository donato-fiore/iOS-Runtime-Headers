// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOMPOSEREVIEWNICKNAMEVIEWCONTROLLER_H
#define SKUICOMPOSEREVIEWNICKNAMEVIEWCONTROLLER_H

@class SUViewController, NSString, UIScrollView;
@protocol SKUIComposeReviewNicknameDelegate;


#import "SKUIComposeReviewNicknameView.h"

@interface SKUIComposeReviewNicknameViewController : SUViewController <SKUIComposeReviewNicknameDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIComposeReviewNicknameDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIComposeReviewNicknameView *nicknameView; // ivar: _nicknameView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(void)_cancel;
-(void)_setupBarButtonItems;
-(void)_setupNicknameView;
-(void)_setupScrollView;
-(void)_submit;
-(void)_updateConfirmState;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif