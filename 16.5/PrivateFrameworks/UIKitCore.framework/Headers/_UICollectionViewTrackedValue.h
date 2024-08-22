// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWTRACKEDVALUE_H
#define _UICOLLECTIONVIEWTRACKEDVALUE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UICollectionViewTrackedValue : NSObject {
    NSArray *_values;
    NSInteger _valuesCount;
    NSInteger _currentIndex;
}


@property (nonatomic) BOOL isAccumulating; // ivar: _isAccumulating
@property (nonatomic) CGFloat trackedValue; // ivar: _trackedValue


-(CGFloat)speed;
-(id)init;
-(void)addValue:(CGFloat)arg0 ;


@end


#endif