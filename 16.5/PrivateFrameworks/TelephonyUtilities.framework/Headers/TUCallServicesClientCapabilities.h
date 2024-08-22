// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCALLSERVICESCLIENTCAPABILITIES_H
#define TUCALLSERVICESCLIENTCAPABILITIES_H

@protocol NSSecureCoding, TUCallServicesClientCapabilitiesActions;

#import <Foundation/Foundation.h>


@interface TUCallServicesClientCapabilities : NSObject <NSSecureCoding>



@property (weak, nonatomic) NSObject<TUCallServicesClientCapabilitiesActions> *delegate; // ivar: _delegate
@property (nonatomic) BOOL wantsCallDisconnectionOnInvalidation; // ivar: _wantsCallDisconnectionOnInvalidation
@property (nonatomic) BOOL wantsCallNotificationsDisabledWhileSuspended; // ivar: _wantsCallNotificationsDisabledWhileSuspended
@property (nonatomic) BOOL wantsCallStopStreamingOnInvalidation; // ivar: _wantsCallStopStreamingOnInvalidation
@property (nonatomic) BOOL wantsFrequencyChangeNotifications; // ivar: _wantsFrequencyChangeNotifications


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)save;


@end


#endif