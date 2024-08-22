// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TASPADVERTISEMENT_H
#define TASPADVERTISEMENT_H

@class NSData, NSString, NSDate, NSUUID;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>


@interface TASPAdvertisement : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, copy, nonatomic) NSData *address; // ivar: _address
@property (readonly, copy, nonatomic) NSData *advertisementData; // ivar: _advertisementData
@property (readonly) BOOL beepOnMoveHigh; // ivar: _beepOnMoveHigh
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *reserved; // ivar: _reserved
@property (readonly, nonatomic) NSInteger rssi; // ivar: _rssi
@property (readonly, copy, nonatomic) NSDate *scanDate; // ivar: _scanDate
@property (readonly, nonatomic) unsigned char status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)TASPAdvertisementDeviceTypeToString:(NSUInteger)arg0 ;
+(id)TASPAdvertisementTypeToString:(NSUInteger)arg0 ;
-(BOOL)hasHawkeyeAdvertisementPolicy;
-(BOOL)hasHawkeyeLowEnergyAdvertisementPolicy;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)getDeviceType;
-(NSUInteger)getType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithAddress:(id)arg0 advertisementData:(id)arg1 status:(unsigned char)arg2 reserved:(id)arg3 rssi:(NSInteger)arg4 scanDate:(id)arg5 ;
-(id)initWithAddress:(id)arg0 advertisementData:(id)arg1 status:(unsigned char)arg2 reserved:(id)arg3 rssi:(NSInteger)arg4 scanDate:(id)arg5 uuid:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif