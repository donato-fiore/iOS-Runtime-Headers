// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEXTENDEDPHYSICSBODY_H
#define PKEXTENDEDPHYSICSBODY_H

@class PKPhysicsBody;



@interface PKExtendedPhysicsBody : PKPhysicsBody {
    NSInteger _associations;
    CGFloat _areaFactor;
}


@property (nonatomic) CGFloat normalizedDensity;


+(id)bodyWithBodies:(id)arg0 ;
+(id)bodyWithCircleOfRadius:(CGFloat)arg0 ;
+(id)bodyWithEdgeChainFromPath:(struct CGPath *)arg0 ;
+(id)bodyWithEdgeFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
+(id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg0 ;
+(id)bodyWithEllipseInRect:(struct CGRect )arg0 ;
+(id)bodyWithPolygonFromPath:(struct CGPath *)arg0 ;
+(id)bodyWithRectangleOfSize:(struct CGSize )arg0 ;
+(id)bodyWithRectangleOfSize:(struct CGSize )arg0 center:(struct CGPoint )arg1 ;
-(BOOL)dissociate;
-(id)description;
-(id)init;
-(id)initWithRectangleOfSize:(struct CGSize )arg0 ;
-(void)associate;


@end


#endif