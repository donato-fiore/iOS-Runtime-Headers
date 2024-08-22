// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDYNAMICANIMATIONACTIVEVALUE_H
#define _UIDYNAMICANIMATIONACTIVEVALUE_H


#import <Foundation/Foundation.h>


@interface _UIDynamicAnimationActiveValue : NSObject {
    CGFloat _boundaryPull;
    id *_applier;
    BOOL _lowerBoundary;
    BOOL _upperBoundary;
}


@property (nonatomic) CGFloat maximumActiveValue; // ivar: _maximumActiveValue
@property (nonatomic) CGFloat minimumActiveValue; // ivar: _minimumActiveValue
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) CGFloat value; // ivar: _value


+(id)activeValue:(CGFloat)arg0 ofType:(int)arg1 ;
+(id)lowerBoundary:(CGFloat)arg0 ofType:(int)arg1 ;
+(id)upperBoundary:(CGFloat)arg0 ofType:(int)arg1 ;
-(BOOL)_isLowerBoundary;
-(BOOL)_isUpperBoundary;
-(CGFloat)_boundaryPull;
-(id)_applier:(SEL)arg0 ;
-(id)description;
-(id)init;
-(void)_appendDescriptionToString:(id)arg0 atLevel:(int)arg1 ;
-(void)_setBoundaryPull:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif