// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCONTEXTUALINFO_H
#define TPSCONTEXTUALINFO_H

@class TPSSerializableObject, TPSContextualCondition, NSArray, NSString, TPSMonitoringEvents;



@interface TPSContextualInfo : TPSSerializableObject

@property (nonatomic) NSInteger customizationID; // ivar: _customizationID
@property (copy, nonatomic) TPSContextualCondition *desiredOutcomeCondition; // ivar: _desiredOutcomeCondition
@property (copy, nonatomic) NSArray *displayBundleIDs; // ivar: _displayBundleIDs
@property (nonatomic) NSInteger displayMaxCount; // ivar: _displayMaxCount
@property (copy, nonatomic) NSArray *eligibleContext; // ivar: _eligibleContext
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger lastModifiedDate; // ivar: _lastModifiedDate
@property (copy, nonatomic) TPSMonitoringEvents *monitoringEvents; // ivar: _monitoringEvents
@property (readonly, nonatomic) int priority; // ivar: _priority
@property (copy, nonatomic) TPSContextualCondition *triggerCondition; // ivar: _triggerCondition
@property (copy, nonatomic) NSArray *usageEvents; // ivar: _usageEvents


+(BOOL)supportsSecureCoding;
+(id)contentDictionaryWithTipDeliveryInfoId:(id)arg0 deliveryInfoMap:(id)arg1 ;
+(id)identifierFromDictionary:(id)arg0 ;
+(void)eventsInfoArrayForContextualInfoDictionary:(id)arg0 triggerEvents:(*id)arg1 desiredOutcomeEvents:(*id)arg2 ;
-(BOOL)hasChangesFromDictionary:(id)arg0 ;
-(NSInteger)_lastModifiedDateFromDictionary:(id)arg0 ;
-(id)conditionForType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)desiredOutcomeEventIdentifiers;
-(id)displayBundleID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)triggerEventIdentifiers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)restartDesiredOutcomeTracking;
-(void)restartTriggerTracking;


@end


#endif