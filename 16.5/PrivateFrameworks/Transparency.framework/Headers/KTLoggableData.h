// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTLOGGABLEDATA_H
#define KTLOGGABLEDATA_H

@class NSString, NSData, NSError, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTLoggableData : NSObject <NSSecureCoding>



@property (copy) NSString *build; // ivar: _build
@property (retain) NSData *clientData; // ivar: _clientData
@property (retain) NSData *clientDataHash; // ivar: _clientDataHash
@property (copy) NSData *deviceID; // ivar: _deviceID
@property (retain) NSData *deviceIdHash; // ivar: _deviceIdHash
@property (retain) NSError *failure; // ivar: _failure
@property BOOL ktCapable; // ivar: _ktCapable
@property BOOL marked; // ivar: _marked
@property BOOL notInSyncedData; // ivar: _notInSyncedData
@property (copy) NSString *product; // ivar: _product
@property NSUInteger result; // ivar: _result
@property (copy) NSData *signature; // ivar: _signature
@property BOOL successfulSync; // ivar: _successfulSync
@property (copy) NSNumber *version; // ivar: _version


+(BOOL)isAccountKTCapable:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(void)loggableDataForDeviceID:(id)arg0 application:(id)arg1 completionBlock:(id)arg2 ;
+(void)loggableDataForDeviceID:(id)arg0 completionBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)diagnosticsJsonDictionary;
-(id)initWithClientData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif