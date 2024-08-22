// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGIFTRECIPIENTTABLEVIEWCELL_H
#define SKUIGIFTRECIPIENTTABLEVIEWCELL_H

@class UITableViewCell, CNContactStore, CNContactPickerViewController, UILabel, CNComposeRecipientTextView, UIView, NSAttributedString, NSString, NSArray;
@protocol CNContactPickerDelegate, CNComposeRecipientTextViewDelegate, SKUIGiftContactSearchDelegate;


#import "SKUIGiftContactSearchController.h"

@interface SKUIGiftRecipientTableViewCell : UITableViewCell <CNContactPickerDelegate, CNComposeRecipientTextViewDelegate, SKUIGiftContactSearchDelegate>

 {
    CNContactStore *_contactStore;
    CNContactPickerViewController *_contactPickerController;
    UILabel *_placeholderLabel;
    CNComposeRecipientTextView *_recipientView;
    SKUIGiftContactSearchController *_searchController;
    UIView *_topBorderView;
}


@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLayoutSubviews; // ivar: _didLayoutSubviews
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL leftToRight; // ivar: _leftToRight
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (readonly) Class superclass;


-(id)_contactStore;
-(id)composeRecipientView:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_resetSearchController;
-(void)_sendDidChangeRecipients;
-(void)_sendDidUpdateSearchController;
-(void)_sendDismissContactPicker;
-(void)composeHeaderView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg0 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg0 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)presentPeoplePickerPopover:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentSearchResultsPopover:(id)arg0 animated:(BOOL)arg1 ;
-(void)recipientViewDidResignFirstResponder:(id)arg0 ;
-(void)searchController:(id)arg0 didSelectRecipient:(id)arg1 ;
-(void)searchControllerDidFinishSearch:(id)arg0 ;


@end


#endif