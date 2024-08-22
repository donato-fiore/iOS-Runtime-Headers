// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYRATEANDAGGREGATION_H
#define WIFIANALYTICSAWDWIFINWACTIVITYRATEANDAGGREGATION_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation : PBCodable <NSCopying>

 {
    ? _ampduAGGs;
    ? _rxHESuccess;
    ? _rxMCSSuccess;
    ? _rxVHTSuccess;
    ? _rxampduMUMIMOs;
    ? _rxampduOFDMAs;
    ? _rxampduSUs;
    ? _txHESuccess;
    ? _txMCSSuccess;
    ? _txVHTSuccess;
    ? _txampduMUMIMOs;
    ? _txampduOFDMAs;
    ? _txampduSUs;
}


@property (readonly, nonatomic) *NSUInteger ampduAGGs;
@property (readonly, nonatomic) NSUInteger ampduAGGsCount;
@property (readonly, nonatomic) *NSUInteger rxHESuccess;
@property (readonly, nonatomic) NSUInteger rxHESuccessCount;
@property (readonly, nonatomic) *NSUInteger rxMCSSuccess;
@property (readonly, nonatomic) NSUInteger rxMCSSuccessCount;
@property (readonly, nonatomic) *NSUInteger rxVHTSuccess;
@property (readonly, nonatomic) NSUInteger rxVHTSuccessCount;
@property (readonly, nonatomic) *NSUInteger rxampduMUMIMOs;
@property (readonly, nonatomic) NSUInteger rxampduMUMIMOsCount;
@property (readonly, nonatomic) *NSUInteger rxampduOFDMAs;
@property (readonly, nonatomic) NSUInteger rxampduOFDMAsCount;
@property (readonly, nonatomic) *NSUInteger rxampduSUs;
@property (readonly, nonatomic) NSUInteger rxampduSUsCount;
@property (readonly, nonatomic) *NSUInteger txHESuccess;
@property (readonly, nonatomic) NSUInteger txHESuccessCount;
@property (readonly, nonatomic) *NSUInteger txMCSSuccess;
@property (readonly, nonatomic) NSUInteger txMCSSuccessCount;
@property (readonly, nonatomic) *NSUInteger txVHTSuccess;
@property (readonly, nonatomic) NSUInteger txVHTSuccessCount;
@property (readonly, nonatomic) *NSUInteger txampduMUMIMOs;
@property (readonly, nonatomic) NSUInteger txampduMUMIMOsCount;
@property (readonly, nonatomic) *NSUInteger txampduOFDMAs;
@property (readonly, nonatomic) NSUInteger txampduOFDMAsCount;
@property (readonly, nonatomic) *NSUInteger txampduSUs;
@property (readonly, nonatomic) NSUInteger txampduSUsCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)ampduAGGAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)rxHESuccessAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)rxMCSSuccessAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)rxVHTSuccessAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)rxampduMUMIMOAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)rxampduOFDMAAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)rxampduSUAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)txHESuccessAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)txMCSSuccessAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)txVHTSuccessAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)txampduMUMIMOAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)txampduOFDMAAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)txampduSUAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAmpduAGG:(NSUInteger)arg0 ;
-(void)addRxHESuccess:(NSUInteger)arg0 ;
-(void)addRxMCSSuccess:(NSUInteger)arg0 ;
-(void)addRxVHTSuccess:(NSUInteger)arg0 ;
-(void)addRxampduMUMIMO:(NSUInteger)arg0 ;
-(void)addRxampduOFDMA:(NSUInteger)arg0 ;
-(void)addRxampduSU:(NSUInteger)arg0 ;
-(void)addTxHESuccess:(NSUInteger)arg0 ;
-(void)addTxMCSSuccess:(NSUInteger)arg0 ;
-(void)addTxVHTSuccess:(NSUInteger)arg0 ;
-(void)addTxampduMUMIMO:(NSUInteger)arg0 ;
-(void)addTxampduOFDMA:(NSUInteger)arg0 ;
-(void)addTxampduSU:(NSUInteger)arg0 ;
-(void)clearAmpduAGGs;
-(void)clearRxHESuccess;
-(void)clearRxMCSSuccess;
-(void)clearRxVHTSuccess;
-(void)clearRxampduMUMIMOs;
-(void)clearRxampduOFDMAs;
-(void)clearRxampduSUs;
-(void)clearTxHESuccess;
-(void)clearTxMCSSuccess;
-(void)clearTxVHTSuccess;
-(void)clearTxampduMUMIMOs;
-(void)clearTxampduOFDMAs;
-(void)clearTxampduSUs;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif