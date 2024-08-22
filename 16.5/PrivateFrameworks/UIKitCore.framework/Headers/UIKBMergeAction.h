// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBMERGEACTION_H
#define UIKBMERGEACTION_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIKBGeometry.h"

@interface UIKBMergeAction : NSObject <NSCopying>



@property (retain, nonatomic) NSString *disappearingKeyName; // ivar: _disappearingKeyName
@property (retain, nonatomic) UIKBGeometry *factors; // ivar: _factors
@property (retain, nonatomic) NSArray *orderedKeyList; // ivar: _orderedKeyList
@property (retain, nonatomic) NSString *remainingKeyName; // ivar: _remainingKeyName


+(id)mergeActionWithOrderedKeyList:(id)arg0 factors:(id)arg1 ;
+(id)mergeActionWithRemainingKeyName:(id)arg0 disappearingKeyName:(id)arg1 factors:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif