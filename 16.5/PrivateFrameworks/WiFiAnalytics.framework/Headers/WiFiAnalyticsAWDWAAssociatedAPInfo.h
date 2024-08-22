// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWAASSOCIATEDAPINFO_H
#define WIFIANALYTICSAWDWAASSOCIATEDAPINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWAAssociatedAPInfo : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *deviceNameData; // ivar: _deviceNameData
@property (retain, nonatomic) NSString *deviceNameElement; // ivar: _deviceNameElement
@property (readonly, nonatomic) BOOL hasDeviceNameData;
@property (readonly, nonatomic) BOOL hasDeviceNameElement;
@property (readonly, nonatomic) BOOL hasManufacturerElement;
@property (readonly, nonatomic) BOOL hasModelName;
@property (readonly, nonatomic) BOOL hasModelNumber;
@property (retain, nonatomic) NSString *manufacturerElement; // ivar: _manufacturerElement
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName
@property (retain, nonatomic) NSString *modelNumber; // ivar: _modelNumber


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif