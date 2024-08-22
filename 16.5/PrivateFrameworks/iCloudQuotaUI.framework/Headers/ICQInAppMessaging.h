// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQINAPPMESSAGING_H
#define ICQINAPPMESSAGING_H

@class ICQOffer, NSUserDefaults, ICQPremiumOffer, RadiosPreferences, ICQOfferManager, ICQUnfairLock;
@protocol RadiosPreferencesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICQInAppMessage.h"

@interface ICQInAppMessaging : NSObject <RadiosPreferencesDelegate>

 {
    NSObject<OS_dispatch_queue> *_messageQueue;
}


@property (retain, nonatomic) ICQOffer *defaultOffer; // ivar: _defaultOffer
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (nonatomic, getter=isICloudReachable) BOOL iCloudReachable; // ivar: _iCloudReachable
@property (retain, nonatomic) ICQInAppMessage *lastMessage; // ivar: _lastMessage
@property (retain, nonatomic) ICQInAppMessage *mockMessage; // ivar: _mockMessage
@property (retain, nonatomic) ICQPremiumOffer *premiumOffer; // ivar: _premiumOffer
@property (retain, nonatomic) RadiosPreferences *radioPrefs; // ivar: _radioPrefs
@property (retain, nonatomic) id *reachabilityObserver; // ivar: _reachabilityObserver
@property (retain, nonatomic) ICQOffer *regularOffer; // ivar: _regularOffer
@property (retain, nonatomic) ICQOfferManager *sharedOfferManager; // ivar: _sharedOfferManager
@property (retain, nonatomic) ICQUnfairLock *unfairLock; // ivar: _unfairLock


+(id)shared;
-(NSUInteger)_contentTypeForQuotaOffer:(id)arg0 ;
-(id)_actionsForBannerSpecification:(id)arg0 offer:(id)arg1 ;
-(id)_getBundleIdentifier;
-(id)_recalculateCurrentMessage;
-(id)_symbolNameForQuotaOffer:(id)arg0 ;
-(id)airplaneModeOnMessageFromDefaultOffer:(id)arg0 ;
-(id)init;
-(id)quotaMessageForOffer:(id)arg0 ;
-(id)serverUnreachableMessageFromDefaultOffer:(id)arg0 ;
-(void)_fetchDefaultOffer;
-(void)_fetchInitialOfferStates;
-(void)_fetchPremiumOffer;
-(void)_fetchRegularOffer;
-(void)_recalculateAndPostCurrentMessage;
-(void)airplaneModeChanged;
-(void)fetchMessageWithCompletion:(id)arg0 ;
-(void)observeUpdates;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)stopObservingUpdates;


@end


#endif