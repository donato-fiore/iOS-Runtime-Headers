// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUREPORTCONCERNVIEWCONTROLLER_H
#define SUREPORTCONCERNVIEWCONTROLLER_H



#import "SUTableViewController.h"

@interface SUReportConcernViewController : SUTableViewController {
    BOOL _animatingKeyboard;
    UIEdgeInsets _originalTableInsets;
}


@property (readonly, nonatomic) NSUInteger itemIdentifier; // ivar: _itemIdentifier


-(BOOL)handleSelectionForIndexPath:(id)arg0 tapCount:(NSInteger)arg1 ;
-(id)initWithItemIdentifier:(NSUInteger)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_fetchConcerns;
-(void)_hideKeyboardDidStop:(id)arg0 finished:(id)arg1 context:(*void)arg2 ;
-(void)_showKeyboardDidStop:(id)arg0 finished:(id)arg1 context:(*void)arg2 ;
-(void)_submit:(id)arg0 ;
-(void)keyboardWillHideWithInfo:(id)arg0 ;
-(void)keyboardWillShowWithInfo:(id)arg0 ;
-(void)loadView;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif