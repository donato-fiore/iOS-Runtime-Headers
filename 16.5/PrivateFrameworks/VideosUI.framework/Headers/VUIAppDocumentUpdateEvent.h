// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIAPPDOCUMENTUPDATEEVENT_H
#define VUIAPPDOCUMENTUPDATEEVENT_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VUIAppDocumentUpdateEventDescriptor.h"

@interface VUIAppDocumentUpdateEvent : NSObject <NSCopying>



@property (retain, nonatomic) VUIAppDocumentUpdateEventDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;


+(id)accountChanged;
+(id)appDidBecomeActive;
+(id)appRefresh;
+(id)clearPlayHistory;
+(id)deviceDiscoveryDataAvailable;
+(id)entitlements;
+(id)favorites;
+(id)favoritesSyncCompleted;
+(id)groupRecoCollectionVisiblityChanged;
+(id)groupRecoUsersChanged;
+(id)highlightsChanged;
+(id)iamMessageReceived;
+(id)locationAuthorizationChanged;
+(id)locationRetrieved;
+(id)playActivity;
+(id)playHistoryUpdated;
+(id)preferredVideoFormat;
+(id)purchases;
+(id)removeFromPlayHistory;
+(id)restrictions;
+(id)settings;
+(id)upNextLockupArtSettingChanged;
+(id)utsk;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)coalescedEvent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDescriptor:(id)arg0 ;


@end


#endif