// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICQACCOUNTMANAGER_H
#define _ICQACCOUNTMANAGER_H

@class ACAccountStore;

#import <Foundation/Foundation.h>


@interface _ICQAccountManager : NSObject

@property (readonly) ACAccountStore *accountStore; // ivar: _accountStore


-(id)init;
-(id)initWithAccountStore:(id)arg0 ;


@end


#endif