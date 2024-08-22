// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIENTITIESSORTEDBYDATEVALUETRANSFORMER_H
#define VUIENTITIESSORTEDBYDATEVALUETRANSFORMER_H

@class NSValueTransformer, NSDate;



@interface VUIEntitiesSortedByDateValueTransformer : NSValueTransformer

@property (copy, nonatomic) id *dateForEntityBlock; // ivar: _dateForEntityBlock
@property (copy, nonatomic) NSDate *earliestDate; // ivar: _earliestDate
@property (nonatomic) NSUInteger maxEntities; // ivar: _maxEntities


+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)initWithDateForEntityBlock:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif