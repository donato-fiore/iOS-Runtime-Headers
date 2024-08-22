// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTSELFVERIFICATIONINFO_H
#define KTSELFVERIFICATIONINFO_H

@class NSDictionary, NSError, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTSelfVerificationInfo : NSObject <NSSecureCoding>



@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSError *failure; // ivar: _failure
@property (retain) NSData *selfDeviceID; // ivar: _selfDeviceID
@property (retain) NSArray *syncedLoggableDatas; // ivar: _syncedLoggableDatas
@property (retain) NSDictionary *uriToServerLoggableDatas; // ivar: _uriToServerLoggableDatas


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSyncedLoggableDatas:(id)arg0 uriToServerLoggableDatas:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateUri:(id)arg0 serverLoggableDatas:(id)arg1 ;


@end


#endif