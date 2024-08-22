// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQOFFERUPDATEREQUESTCONTEXT_H
#define ICQOFFERUPDATEREQUESTCONTEXT_H

@class ACAccount, ACAccountStore, NSString;

#import <Foundation/Foundation.h>


@interface ICQOfferUpdateRequestContext : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (copy, nonatomic) NSString *buttonId; // ivar: _buttonId
@property (retain, nonatomic) NSString *offerId; // ivar: _offerId
@property (nonatomic, getter=isZeroAction) BOOL zeroAction; // ivar: _zeroAction




@end


#endif