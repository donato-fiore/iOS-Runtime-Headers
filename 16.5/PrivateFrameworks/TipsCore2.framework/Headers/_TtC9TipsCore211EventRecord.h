// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9TIPSCORE211EVENTRECORD_H
#define _TTC9TIPSCORE211EVENTRECORD_H

@class NSManagedObject, NSSet, NSDictionary, NSString;


#import "_TtC9TipsCore29TipRecord.h"

@interface _TtC9TipsCore211EventRecord : NSManagedObject

@property (nonatomic, copy) NSSet *donations;
@property (nonatomic, copy) NSDictionary *eventInfo;
@property (nonatomic, copy) NSString *id;
@property (nonatomic) NSInteger optionsValue;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, retain) _TtC9TipsCore29TipRecord *tip;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif