// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDDRAWABLELAYOUT_H
#define TSDDRAWABLELAYOUT_H

@class NSString;
@protocol TSDWrappable;


#import "TSDLayout.h"
#import "TSDWrapPolygon.h"
#import "TSDBezierPath.h"

@interface TSDDrawableLayout : TSDLayout <TSDWrappable>

 {
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)allowsConnections;
-(BOOL)isHTMLWrap;
-(BOOL)supportsInspectorPositioning;
-(id)i_computeWrapPath;
-(id)i_computeWrapPathClosed:(BOOL)arg0 ;
-(id)i_externalWrapPath;
-(id)i_wrapPath;
-(id)wrapPolygon;
-(int)wrapDirection;
-(int)wrapFitType;
-(int)wrapType;
-(struct CGRect )boundsInRoot;
-(struct CGRect )boundsInfluencingExteriorWrap;
-(void)dealloc;
-(void)dragBy:(struct CGPoint )arg0 ;
-(void)i_invalidateWrap;
-(void)invalidate;
-(void)invalidateExteriorWrap;
-(void)invalidateParentForWrap;
-(void)parentDidChange;
-(void)processChangedProperty:(int)arg0 ;
-(void)setGeometry:(id)arg0 ;


@end


#endif