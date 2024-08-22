// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGEPARSEDBEACON_H
#define WIFIUSAGEPARSEDBEACON_H

@class NSString, NSMutableDictionary, NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface WiFiUsageParsedBeacon : NSObject

@property (retain, nonatomic) NSString *apName; // ivar: _apName
@property (nonatomic) unsigned char band; // ivar: _band
@property (nonatomic) unsigned short beaconInterval; // ivar: _beaconInterval
@property (retain, nonatomic) NSString *bssid; // ivar: _bssid
@property (nonatomic) unsigned short capabilities; // ivar: _capabilities
@property (nonatomic) unsigned char channel; // ivar: _channel
@property (nonatomic) unsigned char colocated6Ghz; // ivar: _colocated6Ghz
@property (nonatomic) unsigned char colocated6GhzIsPSC; // ivar: _colocated6GhzIsPSC
@property (retain, nonatomic) NSMutableDictionary *extendedIEList; // ivar: _extendedIEList
@property (nonatomic) BOOL hasHE; // ivar: _hasHE
@property (nonatomic) BOOL hasHT; // ivar: _hasHT
@property (nonatomic) BOOL hasVHT; // ivar: _hasVHT
@property (retain, nonatomic) NSData *heMACInfo; // ivar: _heMACInfo
@property (retain, nonatomic) NSData *hePHYInfo; // ivar: _hePHYInfo
@property (nonatomic) unsigned short heRxMCSMap160MHz; // ivar: _heRxMCSMap160MHz
@property (nonatomic) unsigned short heRxMCSMap8080MHz; // ivar: _heRxMCSMap8080MHz
@property (nonatomic) unsigned short heRxMCSMap80MHz; // ivar: _heRxMCSMap80MHz
@property (nonatomic) unsigned char heRxNSS; // ivar: _heRxNSS
@property (nonatomic) unsigned short heTxMCSMap160MHz; // ivar: _heTxMCSMap160MHz
@property (nonatomic) unsigned short heTxMCSMap8080MHz; // ivar: _heTxMCSMap8080MHz
@property (nonatomic) unsigned short heTxMCSMap80MHz; // ivar: _heTxMCSMap80MHz
@property (nonatomic) unsigned char heTxNSS; // ivar: _heTxNSS
@property (nonatomic) unsigned char htAMPDUParams; // ivar: _htAMPDUParams
@property (nonatomic) unsigned char htAntennaSelection; // ivar: _htAntennaSelection
@property (nonatomic) unsigned short htExtendedCapabilities; // ivar: _htExtendedCapabilities
@property (nonatomic) unsigned short htInfo; // ivar: _htInfo
@property (readonly, nonatomic) NSData *htMCSSet; // ivar: _htMCSSet
@property (nonatomic) unsigned char htRxNSS; // ivar: _htRxNSS
@property (nonatomic) unsigned int htTxBFCapabilities; // ivar: _htTxBFCapabilities
@property (nonatomic) unsigned char htTxNSS; // ivar: _htTxNSS
@property (nonatomic) NSNumber *isBeaconAtHeRate; // ivar: _isBeaconAtHeRate
@property (nonatomic) BOOL parsingSuccessful; // ivar: _parsingSuccessful
@property (retain, nonatomic) NSMutableDictionary *taggedIEList; // ivar: _taggedIEList
@property (retain, nonatomic) NSMutableDictionary *vendorIEList; // ivar: _vendorIEList
@property (nonatomic) unsigned int vhtInfo; // ivar: _vhtInfo
@property (nonatomic) unsigned short vhtRxMCSMap; // ivar: _vhtRxMCSMap
@property (nonatomic) unsigned short vhtRxMaxRate; // ivar: _vhtRxMaxRate
@property (nonatomic) unsigned char vhtRxNSS; // ivar: _vhtRxNSS
@property (nonatomic) unsigned short vhtTxMCSMap; // ivar: _vhtTxMCSMap
@property (nonatomic) unsigned short vhtTxMaxRate; // ivar: _vhtTxMaxRate
@property (nonatomic) unsigned char vhtTxNSS; // ivar: _vhtTxNSS


+(id)config;
+(id)isValidIE:(unsigned char)arg0 ofLen:(unsigned char)arg1 withIsExtended:(BOOL)arg2 ;
+(void)defaults;
+(void)initialize;
+(void)updateConfig;
-(BOOL)parseBeaconIE:(char *)arg0 length:(NSUInteger)arg1 endOfBuffer:(char *)arg2 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithBeaconData:(id)arg0 andAdditionalMetadata:(id)arg1 ;


@end


#endif