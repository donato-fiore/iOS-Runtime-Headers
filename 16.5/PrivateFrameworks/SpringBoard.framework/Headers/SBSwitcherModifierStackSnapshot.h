// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERMODIFIERSTACKSNAPSHOT_H
#define SBSWITCHERMODIFIERSTACKSNAPSHOT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "SBSwitcherModifierQuerySnapshot.h"

@interface SBSwitcherModifierStackSnapshot : NSObject

@property (retain, nonatomic) NSArray *childSnapshots; // ivar: _childSnapshots
@property (retain, nonatomic) NSString *modifierName; // ivar: _modifierName
@property (retain, nonatomic) SBSwitcherModifierQuerySnapshot *querySnapshot; // ivar: _querySnapshot


-(NSUInteger)countOfAllChildSnapshots;
// -(void)_enumerateModifierSnapshots:(id)arg0 stop:(unk)arg1  ;
-(void)enumerateModifierSnapshots:(id)arg0 ;


@end


#endif