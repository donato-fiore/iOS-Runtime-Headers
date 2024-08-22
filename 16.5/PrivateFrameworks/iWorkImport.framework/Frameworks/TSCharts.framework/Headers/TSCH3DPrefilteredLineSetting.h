// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DPREFILTEREDLINESETTING_H
#define TSCH3DPREFILTEREDLINESETTING_H

@class TSDStroke;

#import <Foundation/Foundation.h>


@interface TSCH3DPrefilteredLineSetting : NSObject

@property (nonatomic) BOOL cullBackfaces; // ivar: _cullBackfaces
@property (nonatomic) BOOL disableColorOutput; // ivar: _disableColorOutput
@property (nonatomic) tvec4<float> filterRadius; // ivar: _filterRadius
@property (nonatomic) float lineWidth; // ivar: _lineWidth
@property (copy, nonatomic) TSDStroke *stroke; // ivar: _stroke
@property (nonatomic) tvec4<float> strokeColor; // ivar: _strokeColor
@property (nonatomic) BOOL useNormals; // ivar: _useNormals


+(id)setting;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif