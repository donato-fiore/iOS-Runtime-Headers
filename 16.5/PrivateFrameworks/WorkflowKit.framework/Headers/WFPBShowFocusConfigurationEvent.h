// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPBSHOWFOCUSCONFIGURATIONEVENT_H
#define WFPBSHOWFOCUSCONFIGURATIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBShowFocusConfigurationEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasIntentType;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSystemFilterType;
@property (retain, nonatomic) NSString *intentType; // ivar: _intentType
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *systemFilterType; // ivar: _systemFilterType


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