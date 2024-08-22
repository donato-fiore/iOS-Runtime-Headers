// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUITEMTABLEVIEWCONTROLLER_H
#define SUITEMTABLEVIEWCONTROLLER_H



#import "SUTableViewController.h"
#import "SUDocumentInteractionSession.h"

@interface SUItemTableViewController : SUTableViewController {
    SUDocumentInteractionSession *_documentInteractionSession;
}




-(BOOL)openDocumentForItemAtIndexPath:(id)arg0 withApplication:(id)arg1 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg0 ;
-(id)_preferredApplicationFromCandidates:(id)arg0 ;
-(id)_tableCellForButton:(id)arg0 ;
-(id)init;
-(id)itemAtIndexPath:(id)arg0 ;
-(void)_chooseApplicationToOpenDocumentAtIndexPath:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_hidePurchaseConfirmationForButton:(id)arg0 ;
-(void)_promptToOpenUTI:(id)arg0 fromIndexPath:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_purchasedItemSetChangedNotification:(id)arg0 ;
-(void)_removeTouchCaptureView;
-(void)_restrictionsChangedNotification:(id)arg0 ;
-(void)_showPurchaseConfirmationForButton:(id)arg0 ;
-(void)_touchCaptureAction:(id)arg0 ;
-(void)dealloc;
-(void)itemOfferButtonAction:(id)arg0 ;
-(void)reloadData;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif