// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIAPPDOCUMENTUPDATEEVENTDESCRIPTOR_H
#define VUIAPPDOCUMENTUPDATEEVENTDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL animated; // ivar: _animated
@property (nonatomic) NSUInteger type; // ivar: _type


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
+(id)postPlay;
+(id)preferredVideoFormat;
+(id)purchases;
+(id)removeFromPlayHistory;
+(id)restrictions;
+(id)settings;
+(id)upNext;
+(id)upNextLockupArtSettingChanged;
+(id)utsk;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEventType:(NSUInteger)arg0 ;


@end


#endif