// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQREMOTEUPGRADEFLOWMANAGER_H
#define ICQREMOTEUPGRADEFLOWMANAGER_H

@class ICQLink, ICQOffer, ICQRemoteContext;
@protocol ICQUpgradeFlowManagerDelegate;

#import <Foundation/Foundation.h>

#import "ICQUpgradeFlowManager.h"
#import "ICQUpgradeFlowOptions.h"
#import "ICQRemoteUIDataLoader.h"

@interface ICQRemoteUpgradeFlowManager : NSObject {
    os_unfair_lock_s _presentationLock;
}


@property (weak, nonatomic) NSObject<ICQUpgradeFlowManagerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) ICQUpgradeFlowManager *flowManager; // ivar: _flowManager
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions; // ivar: _flowOptions
@property (nonatomic) BOOL isPresented; // ivar: _isPresented
@property (retain, nonatomic) ICQLink *link; // ivar: _link
@property (retain, nonatomic) ICQRemoteUIDataLoader *loader; // ivar: _loader
@property (retain, nonatomic) ICQOffer *offer; // ivar: _offer
@property (retain, nonatomic) ICQRemoteContext *remoteContext; // ivar: _remoteContext


+(id)sharedManager;
+(void)commonHeadersForRequest:(id)arg0 withCompletion:(id)arg1 ;
+(void)renewCredentialsWithCompletion:(id)arg0 ;
-(BOOL)canUseExtensionKitForURL:(id)arg0 ;
-(BOOL)isDefaultOfferFlow:(id)arg0 ;
-(id)init;
-(id)rootViewController;
-(void)beginDefaultRemoteFlow;
-(void)beginRemoteExtensionFlowWithViewController:(id)arg0 ;
-(void)beginRemoteFlow;
-(void)beginRemoteFlowWithViewController:(id)arg0 ;
-(void)startUpsellWithOffer:(id)arg0 link:(id)arg1 preloadedRemoteUIData:(id)arg2 error:(id)arg3 ;


@end


#endif