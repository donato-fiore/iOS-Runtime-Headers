// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQREQUESTPROVIDER_H
#define ICQREQUESTPROVIDER_H

@class ACAccount;

#import <Foundation/Foundation.h>


@interface ICQRequestProvider : NSObject {
    ACAccount *_account;
}




+(BOOL)_keyIsEligibleForURLStringReplacement:(id)arg0 ;
+(BOOL)attemptSetRequest:(id)arg0 toPostWithJSONDict:(id)arg1 ;
+(id)_newAccountBagKeyForOldKey:(id)arg0 ;
+(id)_urlReplacementDictionaryForKey:(id)arg0 withOfferID:(id)arg1 withNotificationID:(id)arg2 ;
+(void)addEntriesToPostDictionary:(id)arg0 forStub:(id)arg1 ;
-(BOOL)willUseNewKey:(id)arg0 offerID:(id)arg1 notificationID:(id)arg2 ;
-(id)_bagURLForKey:(id)arg0 withOfferID:(id)arg1 withNotificationID:(id)arg2 ;
-(id)_stringTimeOfLastBackup;
-(id)_urlForQuotaKey:(id)arg0 offerID:(id)arg1 notificationID:(id)arg2 ;
-(id)getBackupDeviceUUID;
-(id)httpMethodForKey:(id)arg0 offerID:(id)arg1 notificationID:(id)arg2 ;
-(id)initWithAccount:(id)arg0 ;
-(id)urlForQuotaKey:(id)arg0 offerStub:(id)arg1 notificationID:(id)arg2 ;
-(id)urlForUpdateOfferWithContext:(id)arg0 ;
-(void)addBasicAndCloudBackupHeadersToRequest:(id)arg0 ;
-(void)addBasicHeadersToRequest:(id)arg0 ;
-(void)addCommonHeadersToRequest:(id)arg0 ;


@end


#endif