// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHTABLEVIEWCONTROLLER_H
#define SBHTABLEVIEWCONTROLLER_H

@class UITableViewController;



@interface SBHTableViewController : UITableViewController {
    NSInteger _styleBeforeShowingNoResults;
    CGRect _rawKeyboardFrame;
}


@property (readonly, nonatomic) CGRect keyboardFrame;
@property (nonatomic) BOOL showNoResultsView; // ivar: _showNoResultsView


+(Class)tableViewClass;
-(CGFloat)headerTopOccludingInset;
-(void)_keyboardWillDismiss:(id)arg0 ;
-(void)_keyboardWillResize:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_reloadNoResultsViewForKeyboardNotification:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif