// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAACCESSORYINFORMATION_H
#define TAACCESSORYINFORMATION_H

@class NSData, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TAAccessoryInformation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *accessoryCapabilities; // ivar: _accessoryCapabilities
@property (copy, nonatomic) NSData *accessoryCategory; // ivar: _accessoryCategory
@property (readonly, nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (copy, nonatomic) NSData *firmwareVersion; // ivar: _firmwareVersion
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSData *productData; // ivar: _productData
@property (readonly) unsigned int productId;
@property (readonly) unsigned int vendorId;


+(BOOL)supportsSecureCoding;
-(BOOL)isCapableOfPrecisionFinding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHawkeyeAudioAccessory;
-(id)accessoryTypeName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceUUID:(id)arg0 deviceType:(NSUInteger)arg1 productData:(id)arg2 manufacturerName:(id)arg3 modelName:(id)arg4 firmwareVersion:(id)arg5 accessoryCategory:(id)arg6 accessoryCapabilities:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif