// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORYLAYOUTSEGMENT_H
#define UIKBRENDERFACTORYLAYOUTSEGMENT_H


#import <Foundation/Foundation.h>

#import "UIKBRenderTraits.h"

@interface UIKBRenderFactoryLayoutSegment : NSObject {
    int _rectCount;
    CGRect _rects;
    NSUInteger _triangleCorners;
    int _edgeCount;
    NSUInteger _edges;
    NSString" _cachedKeyNames;
}


@property (nonatomic) int keyStates; // ivar: _states
@property (nonatomic) BOOL requireAllMatches; // ivar: _requireAllMatches
@property (readonly, nonatomic) UIKBRenderTraits *traits; // ivar: _traits


+(id)segmentWithTraits:(id)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 withKeyplane:(id)arg2 ;
-(BOOL)shouldOverlayTraitsForKey:(id)arg0 ;
-(id)initWithTraits:(id)arg0 ;
-(void)addLayoutRect:(struct CGRect )arg0 asTriangle:(NSUInteger)arg1 ;
-(void)addRelativeLayoutRectFromEdge:(NSUInteger)arg0 ofCachedKey:(id)arg1 ;


@end


#endif