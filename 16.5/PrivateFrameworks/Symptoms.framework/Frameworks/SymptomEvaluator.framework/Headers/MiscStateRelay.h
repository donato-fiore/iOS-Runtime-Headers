// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MISCSTATERELAY_H
#define MISCSTATERELAY_H


#import <Foundation/Foundation.h>


@interface MiscStateRelay : NSObject {
    BOOL _cellPrivateNetworkActive;
    NSUInteger _cellWRMStatus;
    BOOL _cellWRMStatusProlongedBad;
    BOOL _cellWRMExpensive;
    BOOL _wifiDnsProlongedOut;
    BOOL _wifiGoodSecurity;
    BOOL _wifiHotspot20;
    BOOL _wifiManuallyJoined;
    BOOL _wifiPolledFlowsCurrentlyBad;
    BOOL _wifiPolledFlowsProlongedBad;
    BOOL _wifiProfileBased;
    BOOL _wifiPublic;
    NSUInteger _wifiWRMStatus;
    BOOL _LOIUseAuthorized;
    BOOL _homeLocationIsKnown;
    BOOL _wifiHome;
}


@property (nonatomic) BOOL LOIUseAuthorized;
@property (nonatomic) BOOL cellPrivateNetworkActive;
@property (nonatomic) BOOL cellWRMExpensive;
@property (nonatomic) NSUInteger cellWRMStatus;
@property (nonatomic) BOOL cellWRMStatusProlongedBad;
@property (nonatomic) BOOL homeLocationIsKnown;
@property (nonatomic) BOOL wifiActive; // ivar: _wifiActive
@property (nonatomic) BOOL wifiDnsProlongedOut;
@property (nonatomic) BOOL wifiGoodSecurity;
@property (nonatomic) BOOL wifiHotspot20;
@property (nonatomic) BOOL wifiManuallyJoined;
@property (nonatomic) BOOL wifiPolledFlowsCurrentlyBad;
@property (nonatomic) BOOL wifiPolledFlowsProlongedBad;
@property (nonatomic) BOOL wifiProfileBased;
@property (nonatomic) BOOL wifiPublic;
@property (nonatomic) BOOL wifiSporadic; // ivar: _wifiSporadic
@property (nonatomic) NSUInteger wifiWRMStatus;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)wifiHome;
-(void)setWifiHome:(BOOL)arg0 ;


@end


#endif