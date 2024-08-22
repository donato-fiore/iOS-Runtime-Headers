// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKTEXTSELECTIONRECT_H
#define VKTEXTSELECTIONRECT_H

@class UIBezierPath, NSString;


#import "VKBaseTextSelectionRect.h"
#import "VKTextSelectionRectCustomHandleInfo.h"
#import "VKQuad.h"

@interface VKTextSelectionRect : VKBaseTextSelectionRect

@property (retain, nonatomic) VKTextSelectionRectCustomHandleInfo *_customHandleInfo; // ivar: __customHandleInfo
@property (copy, nonatomic) UIBezierPath *_path; // ivar: __path
@property (retain, nonatomic) NSString *_transcript; // ivar: __transcript
@property (nonatomic) BOOL containsEnd; // ivar: _containsEnd
@property (nonatomic) BOOL containsStart; // ivar: _containsStart
@property (readonly, nonatomic) VKQuad *quad; // ivar: _quad
@property (nonatomic) CGRect rect; // ivar: _rect
@property (nonatomic) NSInteger writingDirection; // ivar: _writingDirection


-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(id)description;
-(id)handleInfoForQuad:(id)arg0 origin:(struct CGPoint )arg1 ;
-(id)initWithRect:(struct CGRect )arg0 containsStart:(BOOL)arg1 containsEnd:(BOOL)arg2 writingDirection:(NSInteger)arg3 quad:(id)arg4 ;
-(id)summaryDescription;


@end


#endif