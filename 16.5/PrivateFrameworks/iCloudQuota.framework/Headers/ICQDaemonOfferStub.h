// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQDAEMONOFFERSTUB_H
#define ICQDAEMONOFFERSTUB_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "ICQDaemonOfferConditions.h"
#import "ICQDaemonOfferCriteria.h"

@interface ICQDaemonOfferStub : NSObject {
    NSDictionary *_serverDict;
}


@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (copy, nonatomic) ICQDaemonOfferConditions *conditionsWhenChosen; // ivar: _conditionsWhenChosen
@property (readonly, nonatomic) ICQDaemonOfferCriteria *criteria;
@property (readonly, nonatomic, getter=isDefaultOffer) BOOL defaultOffer;
@property (readonly, nonatomic) NSString *offerId;
@property (readonly, nonatomic) NSDictionary *offerResetPayload;
@property (readonly, nonatomic) NSString *offerResetURL;
@property (readonly, nonatomic, getter=isPremiumOffer) BOOL premiumOffer;
@property (readonly, nonatomic) NSDictionary *serverDictionary;


-(Class)offerClass;
-(NSInteger)requestType;
-(id)initWithServerDictionary:(id)arg0 ;
-(id)persistedOffer;


@end


#endif