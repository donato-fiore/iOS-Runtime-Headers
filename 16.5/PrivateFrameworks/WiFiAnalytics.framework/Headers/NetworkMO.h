// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETWORKMO_H
#define NETWORKMO_H

@class NSManagedObject, NSSet, NSUUID, NSString;

#import <Foundation/Foundation.h>

#import "BlacklistMO.h"

@interface NetworkMO : NSManagedObject

@property (nonatomic) int authFlags;
@property (retain, nonatomic) BlacklistMO *blacklist;
@property (retain, nonatomic) NSSet *bss;
@property (retain, nonatomic) NSObject *channels;
@property (copy, nonatomic) NSUUID *colocatedScopeId;
@property (nonatomic) NSInteger colocatedState;
@property (nonatomic) BOOL didDeploymentChange;
@property (nonatomic) BOOL isHome;
@property (nonatomic) BOOL isLongTermNetwork;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL isOmnipresent;
@property (nonatomic) BOOL isTCPGood;
@property (nonatomic) BOOL isWork;
@property (nonatomic) NSInteger networkScore;
@property (readonly, nonatomic) NSInteger numBSS;
@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) NSInteger switchedAwayFromCount;
@property (nonatomic) NSInteger switchedToCount;
@property (nonatomic) int usageRank;
@property (nonatomic) NSInteger usageTime;


+(BOOL)coalesceSsidsIntoColocatedScope:(id)arg0 moc:(id)arg1 ;
+(BOOL)invalidateColocatedScopeForSsidArray:(id)arg0 moc:(id)arg1 ;
+(BOOL)removeNetwork:(id)arg0 moc:(id)arg1 ;
+(BOOL)setNetworkManagedObjectPropertyValueForKey:(id)arg0 forKey:(id)arg1 withValue:(id)arg2 ;
+(NSInteger)getTotalScore:(id)arg0 moc:(id)arg1 ;
+(id)allStoredSsids:(id)arg0 ;
+(id)copyAllSsids:(id)arg0 ;
+(id)copyAllSsidsWithColocatedScopeId:(id)arg0 moc:(id)arg1 ;
+(id)copyAllSsidsWithColocatedScopeIdStr:(id)arg0 moc:(id)arg1 ;
+(id)copyAllSsidsWithTrait:(id)arg0 trait:(NSUInteger)arg1 ;
+(id)entityName;
+(id)fetchRequest;
+(id)generateInstance:(id)arg0 created:(*BOOL)arg1 moc:(id)arg2 ;
+(id)getFirstColocatedScopeUuidForSsids:(id)arg0 moc:(id)arg1 ;
+(id)getInstance:(id)arg0 moc:(id)arg1 ;
+(id)networkManagedObjectPropertyValue:(id)arg0 forKey:(id)arg1 ;
+(void)classifyTraitsForNetwork:(id)arg0 distanceFilter:(CGFloat)arg1 moc:(id)arg2 ;


@end


#endif