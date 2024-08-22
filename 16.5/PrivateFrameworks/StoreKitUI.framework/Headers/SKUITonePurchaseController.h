// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITONEPURCHASECONTROLLER_H
#define SKUITONEPURCHASECONTROLLER_H

@class CNContactPickerViewController, NSString, UIViewController;
@protocol CNContactPickerDelegate;

#import <Foundation/Foundation.h>

#import "SKUIItem.h"
#import "SKUIClientContext.h"

@interface SKUITonePurchaseController : NSObject <CNContactPickerDelegate>

 {
    CNContactPickerViewController *_contactPickerController;
    id *_completionBlock;
    SKUIItem *_item;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly) Class superclass;


-(id)initWithItem:(id)arg0 ;
-(void)_dismissContactPicker;
-(void)_finishContactPicker:(id)arg0 withContact:(id)arg1 ;
-(void)_finishWithTonePurchase:(id)arg0 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_showContactPicker;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dealloc;
-(void)showPurchaseFlowWithCompletionBlock:(id)arg0 ;


@end


#endif