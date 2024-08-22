// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIANALYTICSAWDWIFIDPSSNAPSHOT_H
#define WIFIANALYTICSAWDWIFIDPSSNAPSHOT_H

@class PBCodable;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiDPSAWDLSnapshot.h"
#import "WiFiAnalyticsAWDWiFiDPSBTSnapshot.h"
#import "WiFiAnalyticsAWDWiFiUsageSnapshot.h"
#import "WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot.h"

@interface WiFiAnalyticsAWDWiFiDPSSnapshot : PBCodable <NSCopying>



@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSAWDLSnapshot *awdlSnapshot; // ivar: _awdlSnapshot
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSBTSnapshot *btSnapshot; // ivar: _btSnapshot
@property (readonly, nonatomic) BOOL hasAwdlSnapshot;
@property (readonly, nonatomic) BOOL hasBtSnapshot;
@property (readonly, nonatomic) BOOL hasLteSnapshot;
@property (readonly, nonatomic) BOOL hasRc1Snapshot;
@property (readonly, nonatomic) BOOL hasRc2Snapshot;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotBE;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotBK;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotVI;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotVO;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiUsageSnapshot *lteSnapshot; // ivar: _lteSnapshot
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiUsageSnapshot *rc1Snapshot; // ivar: _rc1Snapshot
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiUsageSnapshot *rc2Snapshot; // ivar: _rc2Snapshot
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBE; // ivar: _txCompletionSnapshotBE
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBK; // ivar: _txCompletionSnapshotBK
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVI; // ivar: _txCompletionSnapshotVI
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVO; // ivar: _txCompletionSnapshotVO


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