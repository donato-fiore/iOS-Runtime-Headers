// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGIFTRESULTVIEWCONTROLLER_H
#define SKUIGIFTRESULTVIEWCONTROLLER_H

@class UIButton, UIImage;


#import "SKUIGiftStepViewController.h"
#import "SKUIGiftItemView.h"

@interface SKUIGiftResultViewController : SKUIGiftStepViewController {
    UIButton *_giftAgainButton;
    UIImage *_itemImage;
    SKUIGiftItemView *_itemView;
}




-(id)_itemImage;
-(id)_itemView;
-(id)initWithGift:(id)arg0 configuration:(id)arg1 ;
-(void)_doneButtonAction:(id)arg0 ;
-(void)_giftAgainAction:(id)arg0 ;
-(void)_setItemImage:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif