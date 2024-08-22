// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVPBPLAYACTIVITYENQUEUERPROPERTIES_H
#define SSVPBPLAYACTIVITYENQUEUERPROPERTIES_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SSVPBPlayActivityEnqueuerProperties : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSString *deviceGUID; // ivar: _deviceGUID
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (readonly, nonatomic) BOOL hasDeviceGUID;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (nonatomic) BOOL hasPrivateListeningEnabled;
@property (nonatomic) BOOL hasSBEnabled;
@property (nonatomic) BOOL hasStoreAccountID;
@property (readonly, nonatomic) BOOL hasStoreFrontID;
@property (nonatomic) BOOL hasSystemReleaseType;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (nonatomic) BOOL privateListeningEnabled; // ivar: _privateListeningEnabled
@property (nonatomic) BOOL sBEnabled; // ivar: _sBEnabled
@property (nonatomic) NSUInteger storeAccountID; // ivar: _storeAccountID
@property (retain, nonatomic) NSString *storeFrontID; // ivar: _storeFrontID
@property (nonatomic) int systemReleaseType; // ivar: _systemReleaseType
@property (retain, nonatomic) NSString *timeZoneName; // ivar: _timeZoneName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)systemReleaseTypeAsString:(int)arg0 ;
-(int)StringAsSystemReleaseType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif