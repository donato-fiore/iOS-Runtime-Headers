// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPADVERTISINGREQUEST_H
#define WPADVERTISINGREQUEST_H

@class NSData, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WPAdvertisingRequest : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSData *advertisingData; // ivar: _advertisingData
@property (retain) NSDictionary *advertisingOptions; // ivar: _advertisingOptions
@property NSInteger advertisingRate; // ivar: _advertisingRate
@property (nonatomic) unsigned char clientType; // ivar: _clientType
@property BOOL connectable; // ivar: _connectable
@property BOOL holdVoucher; // ivar: _holdVoucher
@property BOOL isRanging; // ivar: _isRanging
@property NSInteger priorityValue; // ivar: _priorityValue
@property BOOL stopOnAdvertisingAddressChange; // ivar: _stopOnAdvertisingAddressChange
@property CGFloat updateTime; // ivar: _updateTime


+(BOOL)supportsSecureCoding;
+(id)requestForClientType:(unsigned char)arg0 ;
-(BOOL)isValidOnConnectableInstance;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)changePriorityValue:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif