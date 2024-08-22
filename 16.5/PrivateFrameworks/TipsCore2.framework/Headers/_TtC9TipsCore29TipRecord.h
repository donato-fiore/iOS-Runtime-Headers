// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9TIPSCORE29TIPRECORD_H
#define _TTC9TIPSCORE29TIPRECORD_H

@class NSManagedObject, NSArray, NSSet, NSString, NSDate, NSDictionary;


#import "_TtC9TipsCore25Asset.h"
#import "_TtC9TipsCore27Message.h"

@interface _TtC9TipsCore29TipRecord : NSManagedObject

@property (nonatomic) NSInteger actionPerformedCount;
@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, retain) _TtC9TipsCore25Asset *asset;
@property (nonatomic) NSInteger dismissalReasonValue;
@property (nonatomic) NSInteger displayCount;
@property (nonatomic, copy) NSArray *displayDates;
@property (nonatomic, copy) NSSet *events;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSDate *lastProcessedUsage;
@property (nonatomic) NSInteger maxDisplayCount;
@property (nonatomic, retain) _TtC9TipsCore27Message *message;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic) NSInteger statusValue;
@property (nonatomic, copy) NSDictionary *tipInfo;
@property (nonatomic, retain) _TtC9TipsCore27Message *title;


-(?)updateEligibilityIncompletionHandler;
-(BOOL)updateEligibilityIn:(id)arg0 error:(*id)arg1 ;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif