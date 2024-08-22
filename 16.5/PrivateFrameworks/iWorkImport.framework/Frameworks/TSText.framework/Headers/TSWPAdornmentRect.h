// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPADORNMENTRECT_H
#define TSWPADORNMENTRECT_H

@class TSDFill, TSUBezierPath, TSUSparseArray, TSDShadow, TSDStroke;

#import <Foundation/Foundation.h>


@interface TSWPAdornmentRect : NSObject

@property (readonly, nonatomic) TSDFill *fill; // ivar: _fill
@property (readonly, copy, nonatomic) TSUBezierPath *path;
@property (readonly, copy, nonatomic) TSUSparseArray *paths; // ivar: _paths
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) CGRect rect; // ivar: _rect
@property (readonly, copy, nonatomic) TSUSparseArray *rubyPaths; // ivar: _rubyPaths
@property (retain, nonatomic) TSDShadow *shadow; // ivar: _shadow
@property (readonly, nonatomic) TSDStroke *stroke; // ivar: _stroke
@property (readonly, nonatomic) int type; // ivar: _type


-(id)initWithCharacterFill:(id)arg0 rect:(struct CGRect )arg1 range:(struct _NSRange )arg2 paths:(id)arg3 rubyPaths:(id)arg4 ;
-(id)initWithCharacterFillAdornmentState:(id)arg0 ;
-(id)initWithCharacterStroke:(id)arg0 rect:(struct CGRect )arg1 range:(struct _NSRange )arg2 paths:(id)arg3 rubyPaths:(id)arg4 ;
-(id)initWithCharacterStrokeAdornmentState:(id)arg0 ;
-(id)initWithRect:(struct CGRect )arg0 fill:(id)arg1 ;
-(id)initWithRect:(struct CGRect )arg0 stroke:(id)arg1 ;
-(id)initWithRect:(struct CGRect )arg0 stroke:(id)arg1 fill:(id)arg2 type:(int)arg3 ;
-(id)initWithRect:(struct CGRect )arg0 stroke:(id)arg1 fill:(id)arg2 type:(int)arg3 range:(struct _NSRange )arg4 paths:(id)arg5 rubyPaths:(id)arg6 ;
-(id)initWithRect:(struct CGRect )arg0 stroke:(id)arg1 fill:(id)arg2 type:(int)arg3 range:(struct _NSRange )arg4 paths:(id)arg5 rubyPaths:(id)arg6 shadow:(id)arg7 ;
-(id)pathFromExcludeRange:(struct _NSRange )arg0 limitSelection:(id)arg1 rubyGlyphRange:(struct _NSRange )arg2 ;


@end


#endif