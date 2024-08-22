// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINPUTSESSIONACCUMULATOR_H
#define _UITEXTINPUTSESSIONACCUMULATOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UITextInputSessionAccumulator : NSObject <NSCopying>

 {
    NSUInteger _values;
}


@property (readonly, nonatomic) id *block; // ivar: _block
@property (nonatomic) _NSRange depthRange; // ivar: _depthRange
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger type; // ivar: _type


+(id)accumulatorWithName:(id)arg0 type:(NSInteger)arg1 depth:(NSUInteger)arg2 block:(id)arg3 ;
+(id)accumulatorWithName:(id)arg0 type:(NSInteger)arg1 depthRange:(struct _NSRange )arg2 block:(id)arg3 ;
-(BOOL)_increaseWithActions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)_increaseWithCount:(NSUInteger)arg0 source:(NSInteger)arg1 ;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)increaseWithActions:(id)arg0 ;
-(void)reset;


@end


#endif