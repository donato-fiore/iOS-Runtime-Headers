// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKTEXTPOSITION_H
#define VKTEXTPOSITION_H



#import "VKBaseTextPosition.h"

@interface VKTextPosition : VKBaseTextPosition

@property (nonatomic) NSInteger offset; // ivar: _offset


+(id)positionWithOffset:(NSInteger)arg0 ;
+(id)zeroPosition;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithOffset:(NSInteger)arg0 ;
-(id)positionByAddingOffset:(NSInteger)arg0 ;
-(id)summaryDescription;


@end


#endif