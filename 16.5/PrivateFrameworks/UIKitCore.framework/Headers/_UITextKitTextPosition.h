// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTKITTEXTPOSITION_H
#define _UITEXTKITTEXTPOSITION_H

@protocol NSTextLocation;


#import "UITextPosition.h"

@interface _UITextKitTextPosition : UITextPosition

@property (readonly, nonatomic) NSInteger affinity; // ivar: _affinity
@property (readonly, nonatomic) NSObject<NSTextLocation> *location; // ivar: _location
@property (readonly, nonatomic) NSInteger offset; // ivar: _offset


+(id)positionWithOffset:(NSInteger)arg0 ;
+(id)positionWithOffset:(NSInteger)arg0 affinity:(NSInteger)arg1 ;
+(id)positionWithTextContentManager:(id)arg0 location:(id)arg1 affinity:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif