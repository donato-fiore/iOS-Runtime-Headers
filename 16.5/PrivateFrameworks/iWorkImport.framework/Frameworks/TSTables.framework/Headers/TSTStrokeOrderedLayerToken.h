// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTSTROKEORDEREDLAYERTOKEN_H
#define TSTSTROKEORDEREDLAYERTOKEN_H

@class NSString, TSDStroke;
@protocol TSTStrokeLayerStrokeAndRange;

#import <Foundation/Foundation.h>


@interface TSTStrokeOrderedLayerToken : NSObject <TSTStrokeLayerStrokeAndRange>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<TSTStrokeLayerStrokeAndRange> *majorStrokeLayerToken; // ivar: _majorStrokeLayerToken
@property (retain, nonatomic) NSObject<TSTStrokeLayerStrokeAndRange> *minorStrokeLayerToken; // ivar: _minorStrokeLayerToken
@property (nonatomic) int order; // ivar: _order
@property (nonatomic) TSTSimpleRange range; // ivar: _range
@property (retain, nonatomic) TSDStroke *stroke; // ivar: _stroke
@property (readonly) Class superclass;


+(id)tokenWithStroke:(id)arg0 range:(struct TSTSimpleRange )arg1 order:(int)arg2 majorStrokeLayerToken:(id)arg3 minorStrokeLayerToken:(id)arg4 ;
-(id)initWithStroke:(id)arg0 range:(struct TSTSimpleRange )arg1 order:(int)arg2 majorStrokeLayerToken:(id)arg3 minorStrokeLayerToken:(id)arg4 ;


@end


#endif