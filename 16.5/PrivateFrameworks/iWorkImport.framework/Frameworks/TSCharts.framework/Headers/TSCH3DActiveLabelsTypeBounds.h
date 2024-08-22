// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DACTIVELABELSTYPEBOUNDS_H
#define TSCH3DACTIVELABELSTYPEBOUNDS_H

@class NSMutableIndexSet, NSMutableDictionary, NSIndexSet, NSNumber;

#import <Foundation/Foundation.h>


@interface TSCH3DActiveLabelsTypeBounds : NSObject {
    NSMutableIndexSet *_activeIndices;
    NSMutableDictionary *_map;
}


@property (readonly, retain, nonatomic) NSIndexSet *activeIndices;
@property (readonly, copy, nonatomic) NSNumber *activeType; // ivar: _activeType


-(BOOL)hasAnyCachedBoundsAtIndices:(id)arg0 ;
-(BOOL)hasCachedBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)resetIndex:(NSInteger)arg0 ;
-(id)active;
-(id)arrayAtIndex:(NSInteger)arg0 ;
-(id)init;
-(void)addBounds:(id)arg0 ;


@end


#endif