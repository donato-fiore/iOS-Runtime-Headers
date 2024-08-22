// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQINTERNETPRIVACYSHEETPRESENTER_H
#define ICQINTERNETPRIVACYSHEETPRESENTER_H

@class UINavigationController, UIViewController;

#import <Foundation/Foundation.h>

#import "ICQInternetPrivacySheet.h"

@interface ICQInternetPrivacySheetPresenter : NSObject

@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) ICQInternetPrivacySheet *sheet; // ivar: _sheet


+(id)presenterWithIdentifier:(id)arg0 viewModel:(id)arg1 ;
-(void)present;


@end


#endif