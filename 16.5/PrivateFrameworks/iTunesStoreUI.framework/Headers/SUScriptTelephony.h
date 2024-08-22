// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTTELEPHONY_H
#define SUSCRIPTTELEPHONY_H

@class NSString;


#import "SUScriptObject.h"

@interface SUScriptTelephony : SUScriptObject

@property (readonly, nonatomic, getter=isCellularRoaming) id *cellularRoaming;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic, getter=isGreenTea) id *greenTea;
@property (readonly, nonatomic) NSString *mobileCountryCode;
@property (readonly, nonatomic) NSString *mobileNetworkCode;
@property (readonly, nonatomic) NSString *operatorName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *providerName;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)_checkIfIsAllowed;
-(id)_className;
-(id)attributeKeys;
-(id)formattedPhoneNumber:(id)arg0 ;
-(id)init;
-(id)scriptAttributeKeys;
-(id)sendSMSWithBodyText:(id)arg0 digits:(id)arg1 countryCode:(id)arg2 ;
-(void)_handleOperatorNameChangedNotification:(id)arg0 ;
-(void)_handlePhoneNumberChangedNotification:(id)arg0 ;
-(void)_handleRegistrationChangedNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif