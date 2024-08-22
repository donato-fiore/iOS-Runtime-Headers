// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTVERIFICATIONINFO_H
#define KTVERIFICATIONINFO_H

@class NSData, NSDictionary, NSError, NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTVerificationInfo : NSObject <NSSecureCoding>



@property (retain) NSData *accountKey; // ivar: _accountKey
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSError *failure; // ivar: _failure
@property (retain) NSDate *idsResponseTime; // ivar: _idsResponseTime
@property (retain) NSArray *serverLoggableDatas; // ivar: _serverLoggableDatas


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithAccountKey:(id)arg0 ;
-(id)initWithAccountKey:(id)arg0 serverLoggableDatas:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateServerLoggableDatas:(id)arg0 ;


@end


#endif