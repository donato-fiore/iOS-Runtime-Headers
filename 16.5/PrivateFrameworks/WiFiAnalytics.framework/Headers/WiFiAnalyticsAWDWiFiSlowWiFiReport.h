// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFISLOWWIFIREPORT_H
#define WIFIANALYTICSAWDWIFISLOWWIFIREPORT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "WiFiAnalyticsAWDSlowWiFiNotification.h"

@interface WiFiAnalyticsAWDWiFiSlowWiFiReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasSlowNotice;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSMutableArray *linkQualSamples; // ivar: _linkQualSamples
@property (retain, nonatomic) WiFiAnalyticsAWDSlowWiFiNotification *slowNotice; // ivar: _slowNotice
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSMutableArray *usbEvents; // ivar: _usbEvents


+(Class)linkQualSampleType;
+(Class)usbEventType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)linkQualSampleAtIndex:(NSUInteger)arg0 ;
-(id)usbEventAtIndex:(NSUInteger)arg0 ;
-(void)addLinkQualSample:(id)arg0 ;
-(void)addUsbEvent:(id)arg0 ;
-(void)clearLinkQualSamples;
-(void)clearUsbEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif