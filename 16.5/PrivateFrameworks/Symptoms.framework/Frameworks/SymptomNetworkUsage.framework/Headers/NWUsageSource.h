// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWUSAGESOURCE_H
#define NWUSAGESOURCE_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NWUsageSource : NSObject {
    update_subset_for_deltas _prevItems;
}


@property (retain) NSString *attributedEntity; // ivar: _attributedEntity
@property int attributionReason; // ivar: _attributionReason
@property CGFloat creationTimestamp; // ivar: _creationTimestamp
@property (retain) NSString *delegateName; // ivar: _delegateName
@property (retain, nonatomic) NSString *domainAttributedBundleId; // ivar: _domainAttributedBundleId
@property (retain, nonatomic) NSString *domainName; // ivar: _domainName
@property (retain, nonatomic) NSString *domainOwner; // ivar: _domainOwner
@property (retain, nonatomic) NSString *domainTrackerContext; // ivar: _domainTrackerContext
@property int epidForAttribution; // ivar: _epidForAttribution
@property (retain, nonatomic) NSMutableDictionary *extensions; // ivar: _extensions
@property unsigned int flowFlags; // ivar: _flowFlags
@property BOOL isADaemon; // ivar: _isADaemon
@property (nonatomic) BOOL isNonAppInitiated; // ivar: _isNonAppInitiated
@property (nonatomic) BOOL isSilent; // ivar: _isSilent
@property (nonatomic) BOOL isTracker; // ivar: _isTracker
@property BOOL newSnapshotAvailable; // ivar: _newSnapshotAvailable
@property int pidForAttribution; // ivar: _pidForAttribution
@property (readonly, nonatomic) *update_subset_for_deltas prevItemsPtr;
@property BOOL removed; // ivar: _removed
@property BOOL removing; // ivar: _removing
@property unsigned int seqno; // ivar: _seqno
@property NSUInteger snapshotRevision; // ivar: _snapshotRevision
@property BOOL startAppStateIsForeground; // ivar: _startAppStateIsForeground
@property BOOL startScreenStateOn; // ivar: _startScreenStateOn
@property BOOL updateAppStateIsForeground; // ivar: _updateAppStateIsForeground
@property BOOL updateScreenStateOn; // ivar: _updateScreenStateOn


-(BOOL)bundleNameImpliesNonAppInitiated:(id)arg0 ;
-(BOOL)handleDomainUpdate:(struct nstat_domain_info *)arg0 ;
-(BOOL)handleUnknownExtension:(unsigned int)arg0 data:(id)arg1 ;
-(BOOL)processExtendedUpdate:(struct nstat_msg_src_extended_item_hdr *)arg0 length:(NSInteger)arg1 ;
-(BOOL)updateWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 length:(NSInteger)arg1 monitor:(id)arg2 ;
-(id)_createNSUUIDForBytes:(unsigned char)arg0 ;
-(id)createSnapshot:(int)arg0 firstOccurrence:(BOOL)arg1 ;
-(id)initWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 length:(NSInteger)arg1 monitor:(id)arg2 ;
-(unsigned int)flagsForProvider:(unsigned int)arg0 ;
-(unsigned int)flagsForProvider:(unsigned int)arg0 sockaddr:(struct sockaddr *)arg1 ;
-(void)logAttributionChangeOn:(NSUInteger)arg0 oldProcName:(char *)arg1 newProcName:(char *)arg2 oldPid:(int)arg3 newPid:(int)arg4 oldEPid:(int)arg5 newEPid:(int)arg6 oldUUID:(unsigned char)arg7 newUUID:(unsigned char)arg8 oldEUUID:(unsigned char)arg9 newEUUID:(unsigned char)arg10 monitor:(id)arg11 ;
-(void)saveOldValues:(struct nstat_counts *)arg0 ;
-(void)setAttribution:(id)arg0 derivation:(int)arg1 delegateName:(id)arg2 isADaemon:(BOOL)arg3 ;


@end


#endif